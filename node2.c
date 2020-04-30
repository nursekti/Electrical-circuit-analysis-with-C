node node2(compleks c1, compleks r2, compleks l1, compleks r3) {
    node z;
    compleks cr, lr,rl;
    cr = addComplex(c1,r2);
    lr = multiplyComplex(l1, r3);
    rl = substractComplex(r3,l1);

    z.v1 = lr;
    z.v2= negatif(addComplex(multiplyComplex(l1,r3),addComplex(multiplyComplex(addComplex(c1,r2),r3),multiplyComplex(addComplex(c1,r2),l1))));
    z.v3= multiplyComplex(cr,l1);
    z.k1.imj= 0;
    z.k1.real= 0;
    return z;
}