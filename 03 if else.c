#include<stdio.h>

int main(){
    int age;

    printf("Enter your age\n");
    scanf("%d", &age);

    if(age>=18){
        printf("You are above 18, you can drive");
    }
    else{
        printf("You are below 18, you can not drive");

    }
    return 0;
}