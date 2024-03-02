#include<stdio.h>

int main(){
    char ch;
    printf("enter the character\n");
    scanf("%c", &ch);
    if (ch>=97 && ch<=122){
        printf("entered character is lowercase");
    }
    else{
        printf("entered character is uppercase");
    }
    return 0;
}