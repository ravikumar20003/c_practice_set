#include<stdio.h>

int main(){
    int a ;

    printf("Enter a number a\n");
    scanf("%d", &a);

   if(a%2==0){
   printf("%d is Even number\n", a);
   }
    else{
      printf("%d is Odd number\n", a);  
    }
    return 0;
}