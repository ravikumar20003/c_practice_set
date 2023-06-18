#include<stdio.h>

int main(){
    int A,B,C;
    printf("Enter three number A,B,C\n");
    scanf("%d%d%d", &A,&B,&C);

    if(A>=B && A>=C){
        printf("%d is the largest number\n", A);
    }
    else if(B>=A && B>=C){
        printf("%d is largest number\n", B);
    }
    else{
        printf("%d is largest number\n", C);
    }
    return 0;
}