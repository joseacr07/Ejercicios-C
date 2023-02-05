//Header para funciones scanf y printf
#include<stdio.h>

//Header para función malloc
#include<stdlib.h>

#define n 3 //tamaño v1
#define m 4 //tamaño v2


//función de la gestión de memoria fácil, aquí el tamaño de los vectores viene definido por las constantes declaradas anteriormente
void facil(void){

    //declaro los vectores de tamaño fijo
    int v1[n];
    int v2[m];
    int v[n + m];

    int i = 0;

    //escaneo los vectores v1 y v2
    for(i = 0; i < n; i ++){
        scanf("%d", &v1[i]);
    }

    for(i = 0; i < m; i ++){
        scanf("%d", &v2[i]);
    }

    //asigno los n elementos del vector v1 a las primeras "n" posiciones del vector v
    for(i = 0; i < n; i++){
        v[i] = v1[i];
    }

    //asigno los m elementos del vector v2 a v a partir de la posición v[n]
    for(i = 0; i< m; i++){
        v[n + i] = v2[i];
    }


    //imprimo el vector v para comprovar el resultado
    for(i = 0; i < n + m; i++){
        printf("%d\n", v[i]);
    }
    

}

/*función de la gestión de memoria difícil, aquí declaramos punteros y les asignamos el espacio que le introduzcamos en cada ejecución
utilizamos la función malloc
*/
void dificil(void){

    //declaro los 3 punteros a variables enteras
    int *v1;
    int *v2;
    int *v;

    //declaro los enteros que servirán para dar tamaño a los vectores v1 y v2 respectivamente
    int a = 0;
    int b = 0;

    //escaneo los valores a y b y luego asigno ese valor a la longitud del puntero
    scanf("%d %d",&a,&b);

    /* Como la función malloc es void hay que decirle qué tipo de variable se le asigna, como v1 es un puntero a enteros, se escrive como (int*)
    para asignar un número "a" de enteros (recordemos que un tipo de variable entero es un conjunto de casillas de la memoria de tamaño definido).
    Cuantas casillas de la memoria son un entero se conoce por sizeof(int).
    De este modo, <a * sizeof(int)> es "a" veces la cantidad de casillas que ocupa un int, por lo que se puede entender como "a" enteros.
    Es decir, un vector de "a" enteros.*/
    v1 = (int*)malloc(a * sizeof(int));
    v2 = (int*)malloc(b * sizeof(int));

    //El vector v tiene una longitud a + b
    v = (int*)malloc((a + b) * sizeof(int));

    int i = 0;

    //escaneo los vectores v1 y v2
    for(i = 0; i < a; i ++){
        scanf("%d",&v1[i]);
    }
    for(i = 0; i < b; i ++){
        scanf("%d",&v2[i]);
    }

    //asigno los n elementos del vector v1 a las primeras "n" posiciones del vector v
    for(i = 0; i < a; i ++){
        v[i] = v1[i];
    }

    //asigno los m elementos del vector v2 a v a partir de la posición v[n]
    for(i = 0; i < b; i ++){
        v[n + i] = v2[i];
    }

    //imprimo el vector v para comprovar el resultado
    for(i = 0; i < a + b; i++){
        printf("%d\n", v[i]);
    }
    
}


int main(){

    //Llamo las funciones en el main para que se ejecuten cuando corro el programa
    facil();
    dificil();


    return 0;
}