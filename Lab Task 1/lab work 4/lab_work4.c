/*This is the C program for alters the temperature fahrenheit to centigrade of a city*/
#include<stdio.h>
int main(){
        float citytemperature_F;
        float centigrade;

        printf("Enter your city temperature in fahrenheit: ");
        scanf("%f", &citytemperature_F);

        printf("Temperature in Centigrade is: %f", centigrade=(citytemperature_F-32)/9*5);

        return 0;
        }
