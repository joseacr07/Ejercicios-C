#include<stdio.h> //Introducir un numero que este entre 1 y 10.

int main(int argc, char const *argv[])
{
    int x;
    printf("Introduce un numero\n"); //Aquii comienza el algoritmo
    scanf("%i",&x);

    if( x >= 1 || x <= 10){  // || = O se escribe con dos barras. Y con que una de las condiciones sea cierta se ejecuta. Por eso se ejecuta con un numero mayor.
        printf("El numero que introducisteis es %i; y esta entre 1 y 10, felicidades!!.\n",x);
    }
    else{
        printf("El numero %i NO esta entre 1 y 10..\n",x);
    }
    return 0;
}
