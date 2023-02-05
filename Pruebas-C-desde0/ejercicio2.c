//1-Declarar un vector de 20 enteros
//2-asignar un valor unico a cada uno de los 20 enteros
//3-Declarar un puntero unico
//4-imprimir cada uno de los elementos del vector usando unicamente el puntero

#include<stdio.h>


int main()
{
    int a[20];
    int *p = NULL;
    p = &a[0];

    for (int i = 0; i  < 20; i++){
        a[i]= i *2;

        printf("a[%d]\n",*(p+i));
    }
    

    return 0;
}
