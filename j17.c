#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill_rand_num(int arr[], int n){
    for(int i = 0; i < n; i++){
        arr[i] = -5 +rand() % 31;
        printf("%d ", arr[i]);
    }puts("");
}
void add(int arr[],int neg, int n){
    int sum = 1;
    if(neg == n-1){
            printf("manfiy son eng songgisi\n");
    } else{
                for(int i = neg+1; i < n; i++){
                   printf("%d ", arr[i]);
                    if(arr[i]==0){
                        sum+=arr[i];
                    } else {
                        sum *= arr[i];
                      }
                } printf("\nsum = %d\n", sum);
    }
}






int main(){
    srand(time(0));
    int n;
    printf("n = "); scanf("%d", &n);
    int arr[n];
    fill_rand_num(arr,n);
    int neg = 0;
    for(int i = 0; i < n; i++){
        if(arr[i]<0){
            neg = i;
        }
    } printf("%d\n",neg);
    add(arr,neg,n);



    return 0;
}