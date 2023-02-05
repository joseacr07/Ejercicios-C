#include<stdio.h>
#include<math.h> // librería que contiene función sqrt

int main(){
    double *p = NULL, d = 0, x = 100;
    p = &x;
    d = sqrt(x) + *p;
    printf("%g\n", *p);
    printf("%g\n",d);

    return 0;
}