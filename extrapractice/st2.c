#include<stdio.h>
#include<string.h>

struct student{
    char name[20];
    int roll;
    float cgpa;
};

int main(){
    struct student ece={"som",99,7.2};
    struct student *ptr;
    ptr=&ece;
    printf("%f\n",ece.cgpa);
    printf("%d",(*ptr).roll);
    return 0;
}