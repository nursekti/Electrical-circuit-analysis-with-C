compleks addComplex (compleks x, compleks y){
	compleks z;
	z.real = x.real+y.real;
	z.imj = x.imj+y.imj;
	return z;
}