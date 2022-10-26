#include<stdio.h>
//Este ejercicio trata de identificar el numero si es par o impar el sistema lo detecte en este caso estamos tratando de numeros pares
int main()
{ 
    int y , x;
    
    printf("Por favor introduce un numero\n");
    scanf("%i",&x);

    y = x % 2; //Aqui es donde se define el algoritmo.

    if (y==0)
    {
        printf("Felicidades! el numero es par.\n", x);
    }

    else{
        printf("Que mal! el numero es impar.\n"), x;
    }

    

    /* code */
    return 0;
}
