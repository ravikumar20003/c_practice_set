#include<stdio.h>

int main(){
    int n;

    printf("Enter the value of n\n");
    scanf("%d", &n);

    while (n<10){
    printf("The number is %d\n", n+1);
    n++;
    
    }
    return 0;
}