//Inicia un programa que recogiendo la hora minutos y segundos devuelva la hora mas un segundo.

#include<stdio.h>

int main()
{
    int h , min , seg; //Variables enteras.

    printf("Introduce la Hora: \n");
    scanf ("%i",&h); //importante introducer el ampersand en los scanf.
    printf("Introduce los minutos: \n");
    scanf ("%i",&min);
    printf("Introduce los segundos: \n");
    scanf ("%i",&seg);

    if (h <= 23 && min <= 59 && seg <= 59)
    {
        seg += 1; //Tiene que ser += 1 por que si es =+ 1 es igual a 1 positivo.
        if (seg == 60){
            min += 1; //Estas son optimizaciones para que al llegar a 60 se resetee a 0.
            seg = 0;
        }
        if (min == 60){
            h += 1;
            min = 0;
            }
        if (h == 24){
            h = 0;
        }
        
        printf (" La hora es: %i:%i:%i.",h,min,seg); 
    }
    else{

        printf("La hora introducida es incorrecta");

    }
    

    return 0;
}
