// c program to check whether a number is even or odd
#include<stdio.h>
int main(){
    int a;
    printf("enter a number ");
    scanf("%d",&a);

    if(a%2==0){
       printf("entered number is even"); 
    }
    else{
        printf("entered number is odd");
    }
    return 0;
}