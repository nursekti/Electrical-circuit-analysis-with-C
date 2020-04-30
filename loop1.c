loop loop1(compleks r1, compleks r2, compleks c1, compleks l1, compleks i1){
    loop z;
    z.i3 = addComplex(addComplex(r1, r2), addComplex(c1, l1));
    z.i4 = negatif(l1);
    z.i5 = negatif(addComplex(c1, r2));
    z.k2 = negatif(multiplyComplex(i1, r1));
    return z;
}
