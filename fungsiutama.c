void main(){
    printf("==========ANALISIS RANGKAIAN DENGAN FASOR==========\n\n");
    printf("Desain Rangkaian\n");
    printf("           ------>---L2--------          \n");
    printf("          |      I3            |         \n");
    printf("          |                    |         \n");
    printf("          |                    |         \n");
    printf("          |                    |         \n");
    printf("        V1|     V4    V2       |V3       \n");
    printf("  -----------C1---R2------R3------------ \n");
    printf(" |        |           |        |        |\n");
    printf(" |        |           |        |        |\n");
    printf(" |-       |           |        |       -|\n");
    printf(" Is1      R1          L1       C2      Is2\n");
    printf(" |+       |           |        |       +|\n");
    printf(" |        |           |        |        |\n");
    printf(" |        |     I1    |    I2  |        |\n");
    printf("  ---------------<----------<----------- \n\n\n");
    compleks i1,i2,r1,r2,r3,c1,c2,l1,l2;
    compleks a,b,c,d,e,f;

    float w, besar,sudut;
    printf("Masukkan nilai omega (w): ");
    scanf("%f", &w);
    printf("\n");
    compleks arr1[4][4], arr2[4][4];
    compleks invers[3][3];
    compleks arus[3], tegangan[3], tegangan4;
    compleks Vc1, Vc2, Vl1, Vl2, Ic1, Ic2, Il1, Il2;
    int i,j,n;
    node simpul1,simpul2,simpul3;
    loop putar1, putar2, putar3;

    //sumber arus
    printf("Sumber Arus 1\n");
    printf("Masukkan nilai polar: ");
    scanf("%f", &besar);
    printf("Masukkan sudut polar: ");
    scanf("%f", &sudut);
    i1.real = besar*(cos(0.0174533*sudut));
    i1.imj = besar*(sin(0.0174533*sudut));

    printf("Sumber Arus 2\n");
    printf("Masukkan nilai polar: ");
    scanf("%f", &besar);
    printf("Masukkan sudut polar: ");
    scanf("%d", &sudut);
    i2.real = (besar*(cos((sudut*3.14)/180)));//2
    i2.imj = (besar*(sin((sudut*3.14)/180)));//0
    printf("\n");

    //resistor
    printf("Resistansi\n");
    printf("Resistor 1: ");
    scanf("%f", &r1.real);//8
    printf("Resistor 2: ");
    scanf("%f", &r2.real);//2
    printf("Resistor 3: ");
    scanf("%f", &r3.real);//1
    printf("\n");
    r1.imj=0;
    r2.imj=0;
    r3.imj=0;

    //kapasitor
    c1.real=0;
    c2.real=0;
    c1.imj=(-1/(0.125*w));
    c2.imj=(-1/(0.25*w));
    printf("Kapasitor\n");
    printf("Kapasitor 1:");
    printComplex(c1); printf("\n");
    printf("Kapasitor 2:");
    printComplex(c2); printf("\n\n");

    //induktor
    l1.real =0;
    l2.real =0;
    l1.imj=3*w;
    l2.imj=5*w;
    printf("Induktor\n");
    printf("Induktor 1:");
    printComplex(l1); printf("\n");
    printf("Induktor 2:");
    printComplex(l2); printf("\n\n");

    //Analisis nodal
    simpul1 = node1(i1,r1,c1,r2,l2);
    simpul2 = node2(c1,r2,l1,r3);
    simpul3 = node3(c2,r3,l2,i2);
    matriksnode(arr1, simpul1, simpul2, simpul3);
    printf("matriks analisis nodal\n");
    printmatriks(arr1);
    inversmatriks(arr1, invers);
    carinilai(tegangan, invers, arr1);

    //mencari tegangan 4
    tegangan4 = multiplyComplex(addComplex(multiplyComplex(tegangan[0], r2),
                multiplyComplex(tegangan[1], c1)), oneper(addComplex(c1, r2)));
    printnilaiV(tegangan);
    printf("nilai V4 = ");
    printComplex(tegangan4);
    printf("\n\n");

    //Analisis mesh
    putar1 = loop1(r1, r2, c1, l1, i1);
    putar2 = loop2(r3, l1, c2, i2);
    putar3 = loop3(l2, r3, r2, c1);
    matriksloop(arr2, putar1, putar2, putar3);
    printf("matriks analisis mesh\n");
    printmatriks(arr2);
    inversmatriks(arr2, invers);
    carinilai(arus, invers, arr2);
    printnilaiI(arus);



    //mencari nilai tegangan dan arus di kapasitor dan induktor
    Vc1 = substractComplex(tegangan[0], tegangan4);
    Vc2 = tegangan[2];
    Vl1 = tegangan[1];
    Vl2 = substractComplex(tegangan[0], tegangan[2]);
    Ic1 = substractComplex(arus[0], arus[2]);
    Ic2 = substractComplex(i2, arus[1]);
    Il1 = substractComplex(arus[1], arus[0]);
    Il2 = arus[2];

    //convert fasor ke domain waktu dan membuat grafik
    convert(Ic2, w, "dataIc2.csv");
    convert(Il2, w, "dataIl2.csv");
    convert(Vc2, w, "dataVc2.csv");
    convert(Vl2, w, "dataVl2.csv");

    printf("\n");
    printf("Grafik berhasil dibuat dari data di file csv\n");
    system("visualisasi.py");

}
