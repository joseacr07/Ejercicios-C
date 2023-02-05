#include<stdio.h>
#include<stdlib.h>

typedef struct{
    int grado;  //grado del polinomio
    float *coef; //coeficientes del polinomio
} tpolinomio;

tpolinomio LeerPol(){
    tpolinomio pol = {0, NULL};
    int i = 0;
    printf("Grado del polinomio: ");
    scanf("%d", &pol.grado);

    //Asignamos memoria para la matriz
    pol.coef = (float *)malloc((pol.grado + 1) * sizeof(float));
    if(pol.coef != NULL){
        //Leer los coeficientes de mayor a menor grado
        printf("Coeficientes de mayor a menor grado: ");
        for(i = pol.grado; i >= 0; i--){
            scanf("%g", &pol.coef[i]);
        }
    }

    return pol;
}

void VisualizarPol(tpolinomio pol){
    int i = 0;

    //Escribimos los términos de pol de mayor a menor grado
    for(i = pol.grado; i > 0; i--){
        if(pol.coef[i]) printf("%+gx^%d",pol.coef[i],i);
    }
    if(pol.coef[i]) printf("%+g\n", pol.coef[i]);
}

tpolinomio SumarPols(tpolinomio polA, tpolinomio polB){
    int i = 0;
    tpolinomio polresu = {0,NULL}, polaux ={0,NULL};

    if(polA.grado < polB.grado){
        polaux = polA;
        polA = polB;
        polB = polaux;
    }

    polresu.grado = polA.grado;

    polresu.coef = (float*)malloc((polresu.grado + 1) + sizeof(float));
    if(polresu.coef != NULL){
        for (i = 0; i <= polB.grado; i++){
            polresu.coef[i] = polB.coef[i] + polA.coef[i];
        }
        for ( ; i <= polA.grado; i++){
            polresu.coef[i] = polA.coef[i];
        }

        return polresu;
    }
}

int main(){

    tpolinomio polA = {0,NULL};
    printf("Leer pol1:\n");
    polA = LeerPol();
    if(polA.coef != NULL){
        VisualizarPol(polA);
    }


    printf("\n");
    tpolinomio polB = {0,NULL};
    printf("Leer pol2:\n");
    polB = LeerPol();

    VisualizarPol(SumarPols(polA, polB));

    


    return 0;
}