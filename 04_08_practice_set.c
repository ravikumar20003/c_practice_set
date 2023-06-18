#include<stdio.h>

int main(){
    
    // int n = 17, prime=1;
    // for(int i=2; i<n; i++){
    //     if(n%i==0){
    //         prime = 0;
    //         break;
    //     }
    // }
    // if(prime==0 ){
    //     printf("This is not a prime number");
    // }
    // else{
    //     printf("The is a prime number");
    // }
    // return 0;

    int n, i, count=0;
    printf("Enter any number n\n");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        if(n % i==0){
            count ++;
        }
    }
    if(count==2){
        printf("n is a prime number");
    }
    else{
        printf("n is not a prime number");
    }
    return 0;
}