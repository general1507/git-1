#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sum_top(int nums[]){
    int sum=0,sum1=0;
    sum_top = 1 + rand()%9;
    for(int i=0;i<100;i++){
        sum+=nums[i];
    }
   // printf("%d\n",sum);
    for(int i=0;i<=100;i++){
        sum1+=i;
    }
   // printf("%d\n",sum1);
    printf("Yuq son>>> %d\n",sum1-sum);
}






int main(){
       
        int nums[100] = {};
        
        
       
        sum_top(nums);


    return 0;


}