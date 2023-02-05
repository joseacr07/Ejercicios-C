#include<stdio.h> //Introducir un numero que este entre 1 y 10.

int main(int argc, char const *argv[])
{
    int x;
    printf("Introduce un numero\n"); //Aquii comienza el algoritmo
    scanf("%i",&x);

    if( x >= 1 && x <= 10){ //1ra- condicion  x numero igual o mayor que uno.. la 2da- (va con dos ampersent& y es que x tiene que ser igual o menor que 10.) Dos && significa que se tienen que cumplir las dos condiciones.
        printf("El numero que introducisteis es %i; y esta entre 1 y 10, felicidades!!.\n",x);
    }
    else{
        printf("El numero %i NO esta entre 1 y 10..\n",x);
    }
    return 0;
}
