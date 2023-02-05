#include<stdio.h>

int main (){
    int x[100] , b;
    int *p , *q;
    p = &x[3];
    q = &x[0];

    p = p + 3;

    int *pa, *pb ; 

    x[50] = 10;
    pa = &x[50];

    b = *pa + 1; 

    printf("%d",b);


    b = *(pa + 1);


    pb = &x[10];

    pb = 0;


    pb += 2;

   
   (*pb)--;

    x[0] = *pb;  


    return 0;
}
