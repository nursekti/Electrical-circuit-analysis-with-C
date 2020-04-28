void convert(compleks S, float w, char file[20]){
/* I.S. : sebuah struct compleks, nilai omega, variabel file
   F.S. : nilai tegangan atau arus yang disimpan ke dalam csv*/
    FILE *fileku;
    float A, tetha, t, dt=0.1, nilai;
    fileku = fopen(file, "w");
    A = sqrt(S.real*S.real+S.imj*S.imj);
    tetha = atan(S.imj/S.real);
    fprintf(fileku, "waktu,nilai\n");
    for (t=0; t<5; t+=dt){
        nilai = A*cos(w*t+tetha);
        fprintf(fileku, "%f,%f\n", t, nilai);
    }
}
