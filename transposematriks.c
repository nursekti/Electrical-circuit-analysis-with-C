void transposematriks(compleks A[3][3]){
/*I.S. : sebuah matriks 3x3
  F.S. : matriks yang telah ditranpose*/
    compleks temp;
    int i, j;
    for (i=0; i<3; i++){
        for (j=i; j<3; j++){
            temp = A[i][j];
            A[i][j] = A[j][i];
            A[j][i] = temp;
        }
    }
}
