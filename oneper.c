typedef struct{
	float real;
	float imj;
} compleks;

compleks oneper(compleks x){
    compleks z;
    float pembagi;
    pembagi = (x.real*x.real)+(x.imj*x.imj);
    z.real = (x.real/pembagi);
    z.imj =(-x.imj/pembagi);
    return z;
}
