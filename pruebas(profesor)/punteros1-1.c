#include<stdio.h>

int main(){
    int x[100], b;
    int *p, *q; //declaro p y q como punteros a enteros
    p = &x[3]; //p apunta a x[3]
    q = &x[0]; //q apunta a x[0]

    p = p + 3; // hace que p avance tres enteros, ahora
               // p apunta a x[6]

    int *pa, *pb;

    x[50] = 10;
    pa = &x[50];


    //el resultado es x[50] + 1
    b = *pa + 1;
    printf("%d", b);

    //el resultado es x[50 + 1]
    b = *(pa + 1);


    pb = &x[10]; //a pb se le asigna x[10]

    *pb = 0; //x[10] = 0

    *pb += 2; //x[10] = x[10] + 2

    (*pb)--; //x[10] = x[10] - 2

    x[0] = *pb--; //x[0] = x[10]
                  //pb apunta a x[9]


    return 0;
}