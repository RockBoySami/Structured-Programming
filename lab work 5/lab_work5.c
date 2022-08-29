/*This is C program for calculating the area and perimeter of rectangle, and the area and circumference of the circle*/
#include<stdio.h>
#include<conio.h>
#define PI 3.142857
main(){
float length;
float breadth;
float areaR;
float perimeter;
float radius;
float circumference;
float areaC;

printf("please enter length of a rectangle: ");
scanf("%f", &length);

printf("please enter breadth of a rectangle: ");
scanf("%f", &breadth);

printf("please enter radius of a circle: ");
scanf("%f", &radius);

areaR=(length*breadth);
perimeter=(length+breadth)*2;

areaC=(radius*2)*PI;
circumference=(2*PI*radius);

printf("areaR: %f\n", areaR);
printf("perimeter: %f\n", perimeter);

printf("areaC: %f\n", areaR);
printf("circumference: %f\n", circumference);



return 0;
}
