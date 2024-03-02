#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int num,guess;
    int count=1;
    srand(time(0));
    num= rand()%100+1 ;
    // printf("%d\n",num);

    while(guess!=num){
        printf("enter the number");
        scanf("%d",&guess);
        if(guess>num){
            printf("you guessed greater number\n");
        }
        else if(guess<num){
            printf("you guessed smaller number\n");
        }
        else if(guess == num){
            printf("guessed number is correct\n");
            break;
        }
            count+=1;
    }
    printf("total guesses are %d",count);
    return 0;
}