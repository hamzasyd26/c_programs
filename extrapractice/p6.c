#include<stdio.h>
#include<string.h>
struct student{
    int roll;
    char name[20];
    int marks;
};
int main(){
    struct student s[5];
    for(int i=0;i<5;i++){
        printf("enter details of student no.%d",i);
        scanf("%d %c %d",&s[i].roll,&s[i].name,&s[i].marks);
    }
    for(int j=0;j<5;j++){
        printf("roll name marks of student %d is %d %c %d",j,s[j].roll,s[j].name,s[j].marks);
    }
}