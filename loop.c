#include <stdio.h>
#include <math.h>

typedef struct{
    compleks i3;
    compleks i4;
    compleks i5;
    compleks k2;
}loop;

loop loop1(compleks r1, compleks r2, compleks c1, compleks l1, compleks i1){
    loop z;
    z.i3 = addComplex(addComplex(r1, r2), addComplex(c1, l1));
    z.i4 = negatif(l1);
    z.i5 = negatif(addComplex(c1, r2));
    z.k2 = negatif(multiplyComplex(i1, r1));
    return z;
}

loop loop2(compleks r3, compleks l1, compleks c2, compleks i2){
    loop z;
    z.i3 = negatif(l1);
    z.i4 = addComplex(addComplex(r3, c2), l1);
    z.i5 = negatif(r3);
    z.k2 = multiplyComplex(c2, i2);
    return z;
}

loop loop3(compleks l2, compleks r3, compleks r2, compleks c1){
    loop z;
    z.i3 = negatif(addComplex(c1, r2));
    z.i4 = negatif(r3);
    z.i5 = addComplex(addComplex(c1, r2), addComplex(l2, r3));
    z.k2.real = 0;
    z.k2.imj = 0;
    return z;
}