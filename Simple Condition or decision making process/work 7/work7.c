/*this is the c program for determining a number is negative  or not negative*/
#include<stdio.h>
int main(){
        float number;

        printf("Enter the number: ");
        scanf("%f",&number);

        if (number<0){
        printf("The number is negative");

        }else{
        printf("The number is not negative");
        }

        return 0;
        }
