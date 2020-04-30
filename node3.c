node node3(compleks c2, compleks r3, compleks l2, compleks i2) {
    node z;
    compleks cr, lr,cl,rlc;
    cr = multiplyComplex(c2,r3);
    lr = multiplyComplex(l2, r3);
    cl = multiplyComplex(c2,l2);
    rlc = addComplex(addComplex(lr,cl),cr);

    z.v1 = cr;
    z.v2 = cl;
    z.v3 = negatif(rlc);
    z.k1 = multiplyComplex(i2,multiplyComplex(cr,l2));
    return z;
}
