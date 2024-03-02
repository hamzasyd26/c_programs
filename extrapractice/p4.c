#include<stdio.h>

int sumofary(int arr[],int n);

int main(){
    int array[4] = {2,9,6,7};
    int num=4;
    printf("sum of elements of array is %d",sumofary(array,num));
}

int sumofary(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}