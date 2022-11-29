#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill_rand_num(int arr[], int n){
    for(int i = 0; i < n; i++){
        arr[i] = -5 +rand() % 31;
        printf("%d ", arr[i]);
    }puts("");
}

int fill_pos(int arr[], int n){
    int pos = 0;
    for(int i = 0; i < n; i++){
        if(arr[i]>0){
            pos++;
        }
    }
     return pos;

}
int fill_neg(int arr[], int n){
    int neg = 0;
    for(int i = 0; i < n; i++){
        if(arr[i]<0){
            neg++;
        }
    }
     return neg;

}
int fill_pair(int arr[], int n){
    int pair = 0;
    for(int i = 0; i < n; i++){
        if(arr[i]%2==0){
            pair++;
        }

    }
     return pair;
}
int fill_unpair(int arr[], int n){
    int unpair = 0;
    for(int i = 0; i < n; i++){
        if(arr[i]%2!=0){
            unpair++;
        }
    }
     return unpair;
}

int main(){
    srand(time(0));
    int n;
    printf("n = "); scanf("%d", &n);
    int arr[n];
    fill_rand_num(arr,n);
    printf("musbat sonlar = %d\nmanfiy sonlar = %d\n juft sonlar = %d\ntoq sonlar = %d\n", fill_pos(arr,n), fill_neg(arr,n), fill_pair(arr,n), fill_unpair(arr,n));


    return 0;
}