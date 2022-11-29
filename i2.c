#include <stdio.h>


void square(int *a){
    printf("%d\n", *a**a);
  
}    


int main(){

    int a;

    printf("Son kiriting==> "); scanf("%d", &a);


    square(&a);

    return 0;


}