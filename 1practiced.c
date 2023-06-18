#include<stdio.h>

int main(){
    int celsius;

    printf("What is the value of celsius\n");
    scanf("%d", &celsius);

    printf("convert the value of celsius into fahrenheit is %d\n", (celsius * 9/5) + 32 );

    return 0;
}