#include<stdio.h>

int main(){
    int n , i;
    printf("Enter the value of n\n");
    scanf("%d", &n);

    for( i=0; i<=n; i++){
        printf("n x %d = %d\n", i, n*i);
    }
    return 0;
}