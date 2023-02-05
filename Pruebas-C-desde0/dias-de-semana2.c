#include<stdio.h>

int main() //En esta estructura el programa se deja de ejecutar al localizar el resultado que esta buscando por lo que es mas eficiente, pero puede hacerse mas eficiente.
{
    int x ;
    printf("Ingresa el numero del dia que quieres visitar del 1 a 5!\n");
    scanf("%i",&x);
    if (x==1)
    {
        printf("Felicidades estas en Lunes!");

    }
    else if (x == 2)
    {
        printf("Felicidades estas en martes!");
    }
    else if (x == 3)
    {
        printf(" Feliz - Miercoles");
    }
    else if (x == 4)
    {
        printf("Feliz jueves!");
    }
    else if (x == 5)
    {
        printf("Por fin es Viernes!");
    }
    else{ //Este else sirve para dar un mensaje de error si se escribe un numero diferente.
        printf("El numero introducido es incorrecto...\n");
    }
    
    return 0;
    
    
}

    

