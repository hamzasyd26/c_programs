#include<stdio.h>

int main(){
    int age;
    printf("enter age\n");
    scanf("%d",&age);
    if(age>90){
        printf("you cannot drive\n");
    }
    else{
        printf("you can drive");
    }
    return 0;
}