/*This is the C program for calculating the distance between Mirpur and Ashulia*/
#include<stdio.h>
int main(){
        float distance,meter,feet,inches,centimeters;

        printf("please enter the distance of mirpur and ashulia: ");
        scanf("%f", &distance);

        printf("meter: %f\n", meter=1000*distance);
        printf("feet: %f\n", feet=3280.84*distance);
        printf("inches: %f\n", inches=39370.1*distance);
        printf("centimeters: %f\n", centimeters=100000*distance);

        return 0;

        }
