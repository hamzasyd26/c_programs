#include<stdio.h>

int main(){
    int n, i;
    printf("enter value ");
    scanf("%d",&n);

    for(i=n; i; i--){
        printf("the vaue of i is %d\n",i);
    }
    return 0;
}