compleks multiplyComplex (compleks x, compleks y){
	compleks z;
	z.real = x.real*y.real - x.imj*y.imj;
	z.imj = x.imj*y.real + x.real*y.imj;
	return z;
}