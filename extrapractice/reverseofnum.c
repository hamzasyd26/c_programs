#include<stdio.h>
int main(){
    int num;
    printf("enter the number :");
    scanf("%d",&num);
    int rev=0;
    for(int i=0;i<4;i++){
        int rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    printf("reverse string is %d",rev);

    return 0;
}