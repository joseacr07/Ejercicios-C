#include<stdio.h>

int main(){
    //declaración de variable entera a
    //declaración de punteros p y q a enteros
    int a = 10, *p, *q;

    //declaración de variable real b
    double b = 0.0;
    
    //asigna la dirección de a a la variable q, q apunta al entero a
    q = &a;

    //asigna a b el valor de a
    b = *q; 

    //error de asignación no válida, ¿a donde apunta p?
   *p = 20;

    printf("En la dirección %x está el dato %g\n", q, b);
    printf("En la dirección %x está el dato %d\n", p, *q);

    return 0;

}