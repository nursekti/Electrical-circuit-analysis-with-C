#include <stdio.h>
#include <math.h>

typedef struct{
	float real;
	float imj;
} compleks;

typedef struct{
    compleks v1;
    compleks v2;
    compleks v3;
    compleks k1;
}node;

typedef struct{
    compleks i3;
    compleks i4;
    compleks i5;
    compleks k2;
}loop;