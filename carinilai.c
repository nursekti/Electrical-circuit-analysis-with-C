void carinilai(compleks nilai[3], compleks invers[3][3], compleks arr[4][4]){
    int i;
    for(i =0; i<3;i++){
        nilai[i] = addComplex(multiplyComplex(invers[i][0], arr[0][3]),
                    addComplex(multiplyComplex(invers[i][1], arr[1][3]),
                    multiplyComplex(invers[i][2], arr[2][3])));
    }
}
