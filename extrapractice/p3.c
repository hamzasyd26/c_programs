#include<stdio.h>
int fact(int n);

int main(){
    int num=5;
    printf("factorial of %d is %d",num ,fact(num));
    return 0;
}

int fact(int n){
    if(n==1){
        return 1;
    }
    else{
        int N1=fact(n-1);
        int N2=N1*n;
        return N2;
    }
}