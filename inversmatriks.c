void inversmatriks(compleks arr[4][4], compleks invers[3][3]){
/*I.S. : matriks 4x4 dan 3x3
  F.S. : matriks 3x3 hasil invers*/
    compleks determinan;
    determinan.real=0;
    determinan.imj=0;
    int i, j;
    for(i = 0; i < 3; i++)
		determinan = addComplex(determinan, substractComplex
                    (multiplyComplex(multiplyComplex(arr[0][i],
                    arr[1][(i+1)%3]), arr[2][(i+2)%3]),
                     multiplyComplex(multiplyComplex(arr[0]
                    [(i+2)%3], arr[1][(i+1)%3]), arr[2][i])));
    printf("Nilai determinan matriks: ");
    printComplex(determinan);
    printf("\n");

    for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			invers[i][j] = multiplyComplex(substractComplex(multiplyComplex(arr
                            [(i+1)%3][(j+1)%3], arr[(i+2)%3][(j+2)%3]),
                            multiplyComplex(arr[(i+1)%3][(j+2)%3],
                            arr[(i+2)%3][(j+1)%3])), oneper(determinan));
        }
	}
	transposematriks(invers);
	printf("matriks invers: \n");
	for(i=0;i<3;i++){
	   for(j=0;j<3 ;j++){
           printComplex(invers[i][j]);
        }
        printf("\n");
	}
	printf("\n");
}
