#include<stdio.h>
#include<math.h>
#define PI 3.1416 //macro o global variable

int main()
{
    int y;
    float x;
    x = PI;

    printf("Por favor introduce un valor para Y\n");
    scanf("%i",&y); //Primero imprimimos Y con la letra correspondiente a su variable (i) y luego fuera de las comillas con una coma le asignamos el valor que esta introduciendo el usuario con aspersent (&).
    printf("el valor de Y es= %i\n",y); //Aqui lo imprimimos y asignamos la variable nuevamente.

    x *= y; //Aqui hacemos la operacion de x = pi por el numero que asignamos a Y.(para asignar una multiplicacion , division , suma o resta) y otras operaciones se pueden resumir con (signo de la operacion y (=) ejemplo y += x; en vez de y = y + x;)

    printf("El nuevo valor de Y x PI es %f\n", x); //Y se imprime.

    x = pow(y,x); //para la potencia (pow) se necesita la libreria <math.h> y se escribe de la manera en que esta escrita antes.

    printf("Y la potencia de Y * X es x = %f\n",x);

    x = sqrt(x); //sqrt significa square root(raiz cuadrada) para asignarla se necesita la biblioteca math y se escribe de la manera anterior.

    printf("Y la raiz cuadrada de x es = %f\n",x);

 //Operadores de incremento: los operadores de incremento no son mas que anadir una unidad a la variable que se lo apliquemos por ejemlo:
 
    x ++; 

    printf("el valor de x ++ es %f\n",x);

    x --;

    printf("el valor de x -- es %f\n",x);


    /* code */
    return 0;
}
