#include <stdio.h>
#include <math.h>

typedef struct{
    compleks v1;
    compleks v2;
    compleks v3;
    compleks k1;
}node;

node node1(compleks i1, compleks r1, compleks c1, compleks r2, compleks l2){
    node z;
    compleks a,b;
    z.v1 = negatif(addComplex(addComplex((multiplyComplex(l2,(addComplex(c1,r2)))),(multiplyComplex(r1,l2))),(multiplyComplex(r1,(addComplex(c1,r2))))));
    z.v2 = multiplyComplex(r1,l2);
    z.v3 = negatif(multiplyComplex(r1,addComplex(c1,r2)));
    z.k1 = multiplyComplex(multiplyComplex(l2,addComplex(c1,r2)),multiplyComplex(i1,r1));
    return z;
}

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
