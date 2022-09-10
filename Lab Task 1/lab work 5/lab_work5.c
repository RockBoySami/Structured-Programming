/*This is C program for calculating the area and perimeter of rectangle, and the area and circumference of the circle*/
#include<stdio.h>
#define PI 3.1416
int main(){
        float length,breadth,area_R,perimeter,radius,circumference,area_C;

        printf("please enter length of a rectangle: ");
        scanf("%f", &length);

        printf("please enter breadth of a rectangle: ");
        scanf("%f", &breadth);

        printf("please enter radius of a circle: ");
        scanf("%f", &radius);

        printf("areaR: %f\n", area_R=(length*breadth));
        printf("perimeter: %f\n", perimeter=(length+breadth)*2);

        printf("areaC: %f\n", area_C=PI*radius*radius);
        printf("circumference: %f\n", circumference=(2*PI*radius));

        return 0;
        }
