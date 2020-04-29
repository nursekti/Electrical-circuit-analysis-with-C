void printmatriks(compleks arr[4][4]){
    //print matriks
    int i, j;
    for(i=0;i<3;i++){
	   for(j=0;j<3 ;j++){
           printComplex(arr[i][j]);
        }
        printComplex(arr[i][3]);
        printf("\n");
	}
	printf("\n");
}