
#include<stdio.h>

int main(){
    int radius;
    float pi = 3.14;

    printf ("what is the radius of circle\n");
    scanf("%d", &radius);

    printf("the area of your circle is %f\n", pi*radius*radius);
    int height;
    printf("what is the height of cylinder\n");
    scanf("%d", &height);

    printf("the volume of your cylinder is %f\n",pi*radius*radius*height);
    printf("The volume of your sphere is %f\n", 4*pi*radius*radius*radius/3);
    return 0;
}


    



