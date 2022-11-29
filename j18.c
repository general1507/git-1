#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill_rand_num(int arr[], int n){
    for(int i = 0; i < n; i++){
        arr[i] = -5 +rand() % 31;
        printf("%d ", arr[i]);
    }puts("");
}
int fill_pair(int arr[], int n){
    for(int i = 0; i < n; i++){
        if(arr[i]%2==0){
           return i;
        }
    }
    return n;
}

int fill_unpair(int arr[], int n){
    int unpair = 0;
    for(int i = 0; i < n; i++){
        if(arr[i]%2!=0){
            unpair = i;
        }
    }
    return unpair;
}
void add(int arr[],int pair, int unpair){
    int sum = 0;
    for(int i = pair+1; i < unpair; i++) {
        printf("%d ", arr[i]);
        sum += arr[i];
    }
    printf("sum = %d\n", sum);

}




int main(){
    srand(time(0));
    int n;
    printf("n = "); scanf("%d", &n);
    int arr[n];
    fill_rand_num(arr,n);
    add(arr,fill_pair(arr,n),fill_unpair(arr,n));


    return 0;
}