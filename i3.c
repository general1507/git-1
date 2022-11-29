#include <stdio.h>

void Exchange(int *n){
    *n=*n%10*10+*n/10;
    printf("%d", *n);
    puts("");
    
}


int main(){

int n;


printf("Ikki xonali son kiriting==> "); scanf("%d", &n);

     Exchange(&n);
    return 0;


}