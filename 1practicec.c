#include<stdio.h>

int main(){
    int principal;
    int year;
    int rate;

    printf("What is the amount of principal\n");
    scanf("%d", &principal);

    printf("What is the year of amount\n");
    scanf("%d", &year);

    printf("What is the rate of amount\n");
    scanf("%d", &rate);

    printf("the simple interest of your amount is %d\n", principal*year*rate/100);


    
    
    return 0;
}