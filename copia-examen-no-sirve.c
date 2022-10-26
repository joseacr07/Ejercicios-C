#include <stdio.h>
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


int main()
{
    facil();

    return 0;
}

