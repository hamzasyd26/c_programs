#include<stdio.h>

int main(){
    printf("**Multiplication table of 10**\n");
    for(int i=1; i; i++){
        printf("10X%d = %d\n",i,i*10);
        if(i==10){
            break;
        }
    }
    return 0;
}