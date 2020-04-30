loop loop3(compleks l2, compleks r3, compleks r2, compleks c1){
    loop z;
    z.i3 = negatif(addComplex(c1, r2));
    z.i4 = negatif(r3);
    z.i5 = addComplex(addComplex(c1, r2), addComplex(l2, r3));
    z.k2.real = 0;
    z.k2.imj = 0;
    return z;
}
