#include<stdio.h>

int main(){
    int grading;
    printf("Enter the score of student(100-60)\n");
    scanf("%d",&grading);
    switch(grading){
        case 100 90:
        printf("your grade is A");
        break;
        case 89 80:
        printf("your grade is B");
        break;
        case 79 70:
        printf("your grade is C");
        break;
        case 69 60:
        printf("your grade is D");
        break;
        default:
        printf("your grade is F");
        break;
    }
    return 0;
}