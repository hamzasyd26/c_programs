#include<stdio.h>
int main(){
    float p,r,t,SI;
    printf("Enter value of principle ");
    scanf("%f",&p);
    
    printf("Enter value of rate ");
    scanf("%f",&r);
    
    printf("Enter value of time ");
    scanf("%f",&t);

    SI = (p*r*t)/100;
    printf("Simple intrest id: %f",SI);
    return 0;
}