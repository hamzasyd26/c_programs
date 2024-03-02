#include<stdio.h>

struct student{
    char name[100];
    int roll;
    float cgpa;
};
int main(){
    struct student s1={"hamza",32,9.7};
    struct student s2={"raman",70,8.3};

    printf("%s\n",s1.name);
    printf("%s\n",s2.name);
    printf("%f\n",s1.cgpa);
    printf("%f\n",s2.cgpa);
 
    return 0;

}
