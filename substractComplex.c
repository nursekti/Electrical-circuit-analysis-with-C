typedef struct{
	float real;
	float imj;
} compleks;

compleks substractComplex (compleks x, compleks y){
	compleks z;
	z.real = x.real-y.real;
	z.imj = x.imj-y.imj;
	return z;
}
