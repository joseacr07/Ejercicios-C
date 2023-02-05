#include<stdio.h>
int main() //Este programa consiste en identificar el numero mayor(max) y el menor (min).
{
    int x , z , y , max , min; //Asignamos variables.

    printf("introduce un valor para x\n");
    scanf("%i",&x);

    printf("introduce un valor para y\n"); //Registramos valores.
    scanf("%i",&y);

    printf("introduce un valor para z\n");
    scanf("%i",&z);

    // Estructuras selectivas anidadas🔷 ; estas son comparaciones, comparamos la primera variable (x) con la segunda (y) a ver, y decimos en la condicion que x es mayor que y ; y si es cierto pues (y) queda fuera y si es asi nos quedaria comparar (x) con (z) y si (x) es mayor que (z) el maximo es (x). La estructura anidada no es mas que un if dentro de otro if. si (x) es mayor que (y) , y (x) es mayor que (z) entonces el maximo es (x) (listo) y.. si no entonces abrimos un else y si (z) es mayor que (x) y (x) era mayor que (y) entonces ahora (z) es el mayor de todos 😀.

    if (x > y){
       if(x > z){
          max = x; 
       }
     else {
        max = z;         //por cada estructura anidada hay un camino diferente.
      }
    }
       else{
        if (y > z){
            max = y;
        }
        else {
            max = z;
        }
       }
       if (x < y){  //Esta parte no la explicaron aqui se saca el minimo, pero es la misma estructura al reves.
        if (x < z){ 
            min = x;}
            else{
                min = z;
            }
       }
       else{
        if (y < z){
            min = y;
        }
        else{
            min = z;
        }
       }
          
        
       printf("El mayor de los tres numeros es %i\n",max);
       
       
       printf("El menor de los tres numeros es %i\n", min);
       

    return 0;
}
