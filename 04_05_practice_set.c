#include<stdio.h>

int main(){
    int i=1, sum=0, n=10;

    while(i<=n){
        sum +=i;
        i++;
        }

        printf("The sum of first ten natural number is %d\n", sum);

        do{
            printf("The sum of first ten natural number is %d\n", sum);
            sum +=i;
            i++;
        }while(i<=n);
    
    return 0;
}