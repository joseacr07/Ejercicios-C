#include<stdio.h>

int main()
{
    int y,x,aux; //agregamos una variable auxiliar

    printf("inserte valor de Y\n");
    scanf("%i",&y);
    printf("Inserte valor de x\n");
    scanf("%i", &x);

    //y = x; //el ejercicio consiste en intercambiar aqui el valor de y por el de x por lo tanto hay que guardar uno de los valores en la variable auxiliar porque si no se pierde.
    aux = y; //solucion
    y = x;
    x = aux; //solucion
    
    printf("el valor de y es: %i\n",y);
    printf("el valor de x es: %i\n",x);
    /* code */
    return 0;
}
