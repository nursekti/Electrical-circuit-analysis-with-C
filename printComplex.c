void printComplex(compleks a){
    if ((a.imj==0)&&(a.real!=0)){
        printf("       %f       ", a.real);
    } else if ((a.imj!=0)&&(a.real==0)){
        printf("       %fj      ", a.imj);
    } else if((a.imj==0)&&(a.real==0)){
        printf("          0       ");
    } else if(a.imj<0){
        printf("  %f%fj  ", a.real, a.imj);
    } else{
        printf("  %f+%fj  ", a.real, a.imj);
    }
}