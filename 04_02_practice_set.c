#include<stdio.h>

int main(){
    

    printf("Multiplication of first 10 natural number\n");

    for( int i=10; i; i--){
        printf("10 x %d = %d\n", i, 10*i);
    }
    return 0;
}