#include<stdio.h>

int main()
{
    int y;
    y =5;

    if (y==5) //Aqui dentro del parentesis se coloca el igual que para ejecutar la condicion.
    { 
        printf("El valor de Y es correcto es igual a = %i. \n", y); 
        
    }
        else{   //Else no lleva parentesis.
            printf("El valor de Y no es correcto , es menor que = %i. \n", y);
        }
    return 0;
}
