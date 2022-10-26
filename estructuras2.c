#include<stdio.h>
//En este ejercicio solicitamos el valor de x.
int main()
{
    int x ;
    x = 9;
    
    printf("Ingresa el valor de x\n");
     scanf("%i",&x);

    if (x==5) //si el valor es correcto se ejecuta el if, si no se ejecuta el else.
    {
        
        printf("Has acertado el valor de x! felicidades.\n",x);
       
    }

        else {

            printf("no has acertado el valor de x!, intentalo nuevamente.");
        
        /* code */
    }
    
    return 0;
}
