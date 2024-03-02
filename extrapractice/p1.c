#include<stdio.h>
int main(){
    printf("enter 10 numbers; ");
    int sum=0;
    for(int i=0;i<10;i++){
        int j;
        scanf("%d",&j);
        sum+=j;
    }
    printf("%d\n",sum);
    float avg=sum/10;
    printf("%f",avg);
}