#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){
    int number, guess, ngusess=1;
    srand(time(0));
    number = rand()%100 + 1; // generates a random number between 1 and 100
    // printf("The number is %d", number);

    do{
        printf("Guess the number netween 1 to 100\n");
        scanf("%d", &guess);
        if(guess>number){
            printf("Lower number please!\n");
        }
        else if(guess<number){
            printf("Higher number please!\n");
        }
        else{
            printf("You gusessed it in %d attempts\n", ngusess);
        }
        ngusess++;
    }while(guess!=number);
    
    return 0;
}