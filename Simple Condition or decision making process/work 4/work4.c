/*this is the c program for check a triangle is valid or not*/
#include<stdio.h>
int main(){
        float a,b,c,sum;

        printf("Enter the angle 1: ");
        scanf("%f", &a);

        printf("Enter the angle 2: ");
        scanf("%f", &b);

        printf("Enter the angle 3: ");
        scanf("%f", &c);

        if(sum=a+b+c, sum==180){
        printf("The triangle is valid");

        }else{
        printf("The triangle is not valid");
        }

        return 0;
        }