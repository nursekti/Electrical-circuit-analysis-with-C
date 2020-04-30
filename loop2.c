loop loop2(compleks r3, compleks l1, compleks c2, compleks i2){
    loop z;
    z.i3 = negatif(l1);
    z.i4 = addComplex(addComplex(r3, c2), l1);
    z.i5 = negatif(r3);
    z.k2 = multiplyComplex(c2, i2);
    return z;
}