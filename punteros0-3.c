#include<stdio.h>


int main(){
    double a = 10.33, b = 0; //variables tipo double
    int *p = NULL;
    p = &a;
    b = *p;
    printf("b = %g\n", b);
    
    
    return 0;
}