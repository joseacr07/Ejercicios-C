#include<stdio.h>

int main(){

    int a = 0; // "a" es una variable entera
    int *pint; // pint es un puntero a un número entero
    pint = &a; //pint igual a dirección de a, entonces pint apunta al entero "a"

    printf("%d",a);
    printf("\n");
    printf("%d",*pint);
    printf("\n");

    return 0;

}