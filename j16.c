#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill_rand_num(int arr[], int n){
    for(int i = 0; i < n; i++){
        arr[i] = -5 +rand() % 21;
        printf("%d ", arr[i]);

    }

}
void add(int arr[],int neg){
    int sum = 0;
    for(int i = 0; i < neg; i++){
        printf("%d", arr[i]);
        printf("%d ", arr[i]);
        sum += arr[i];
    } printf("\nsum = %d\n", sum);
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
            neg = i;break;
        }
    } printf("%d\n",neg);
add(arr,neg);

    return 0;
}