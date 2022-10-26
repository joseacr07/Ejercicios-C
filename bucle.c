#include<stdio.h>

int main(){
    double numero;
    int b;
    int *p;
    b = &p;
    
    b =+ 2;
    /*Double es un tipo de datos*/

    for(int i =0; i < 10; i--){
        numero = i;

        printf("\n b = %d\n",b);
    
        printf("%d\n", p);
    }
    return 0;
}
