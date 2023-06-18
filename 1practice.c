#include<stdio.h>

int main(){
    int length, breadth;
    printf("what is the length of the rectangle\n");
    scanf("%d", &length);

    printf("What is the breadth of the rectange\n");
    scanf("%d", &breadth);

    printf("The area of your rectangle is %d\n", length * breadth);


    return 0;
}