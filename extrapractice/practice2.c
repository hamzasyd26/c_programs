#include<stdio.h>

int main(){
    int i=1,sum,n;
    printf("enter the number upto which sum is required\n");
    scanf("%d",n);
    
    do{
        sum+=i;
        i++;
    }while(i<=n);
    
    //  for(i=0; i<=n; i++){
        // sum+=i;
    printf("sum upto the given number is %d",sum);
    return 0;
}