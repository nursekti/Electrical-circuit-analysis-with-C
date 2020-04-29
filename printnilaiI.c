void printnilaiI(compleks nilai[3]){
/*I.S. : array of struct compleks
  F.S. : nilai I tiap loop*/
    int i;
    for(i=0; i<3; i++){
        printf("nilai I%d = ", (i+1));
        printComplex(nilai[i]);
        printf("\n");
    }
}
