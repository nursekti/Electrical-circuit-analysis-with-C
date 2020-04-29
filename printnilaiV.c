void printnilaiV(compleks nilai[3]){
/*I.S. : array of struct compleks
  F.S. : nilai V tiap node*/
    int i;
    for(i=0; i<3; i++){
        printf("nilai V%d = ", (i+1));
        printComplex(nilai[i]);
        printf("\n");
    }
}
