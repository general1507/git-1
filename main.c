#include <stdio.h>


int Exchange(int *n){
    
        *n=*n%10*10+*n/10;
        
        return *n;
} 


int main(){

    int n;
   printf("ikki xonali son kiriting==> " ); scanf("%d", &n);

    printf("%d ",Exchange(&n));

    

    return 0;


}