#include<stdio.h>

int main()
{
    int x ;
    printf("Ingresa el numero del dia que quieres visitar!\n");
    scanf("%i",&x);
    if (x==1)
    {
        printf("Felicidades estas en Lunes!");

    }
         if (x == 2)
        {
            printf("Estas en martes!");
        }

        if(x == 3){
            printf("Felicidades es miercoles\n");
        }
        if (x == 4)
        {
            printf ("Felicidadessss! es jueves!\n");
        }

        if (x ==5 ){
            printf("Estas a Viernes!\n");
        }

        if (x == 6)
        {
            printf("Feliz Sabado!\n");
        }

        if (x == 7)
        {
            printf("Dominguito!\n");
        }
        
        
        //Este programa no es eficiente porque el programa se ejecuta completo aun ya teniendo el resultado.
        
        
    
    
    return 0;
}
