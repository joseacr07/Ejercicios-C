#include<stdlib.h>
#include<stdio.h>

int main(){
    int a[100];
    int *p = NULL;
    for(int i = 0; i < 100; i++){
        a[i] = 2 * i;
        printf("a[%d] = %d\n",i,a[i]);
    }
    p = &a[5];

    int *q = NULL;
    int b;
    
    //b = *p;
    //b += 2;//    

    
    //q = p//;
    //*q += 5//;
    

    printf("\n b = %d\n", b);
    printf("\n a[5] = %d\n", a[5]);

    return 0;
}