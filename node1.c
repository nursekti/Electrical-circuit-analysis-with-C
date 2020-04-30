node node1(compleks i1, compleks r1, compleks c1, compleks r2, compleks l2){
    node z;
    compleks a,b;
    z.v1 = negatif(addComplex(addComplex((multiplyComplex(l2,(addComplex(c1,r2)))),(multiplyComplex(r1,l2))),(multiplyComplex(r1,(addComplex(c1,r2))))));
    z.v2 = multiplyComplex(r1,l2);
    z.v3 = negatif(multiplyComplex(r1,addComplex(c1,r2)));
    z.k1 = multiplyComplex(multiplyComplex(l2,addComplex(c1,r2)),multiplyComplex(i1,r1));
    return z;
}