#include<stdio.h>
void reverse(int arr[],int n);
void printarr(int arr[],int n);

int main(){
    int Arr[]={1,2,3,4,5};
    reverse(Arr, 5);
    printarr(Arr, 5);
    return 0;
}

void printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}


void reverse(int arr[],int n){
    for(int i=0;i<n/2;i++){
        int first=arr[i];
        int scnd= arr[n-i-1];
        arr[i]=scnd;
        arr[n-i-1]=first;
    }
}