#include<stdio.h>

int main(){
    int a = 10, *p, *q;
    p = &a;
    q = p;

    printf("En la dirección %x está el valor %d\n", q, *q);

    return 0;
}