#include<stdio.h>

int main(){
    int n , i, sum=0;
    printf("Enter the value of n\n");
    scanf("%d", &n);

    for( i=0; i<=n; i++){
        
        printf("n x %d = %d\n", i, n*i);

             sum +=n*i;

    }
        printf("The value of sum is %d\n", sum);
    return 0;
}