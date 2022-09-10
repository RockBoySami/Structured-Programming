/*this is the c program for determining a number is positive or not positive*/
#include<stdio.h>
int main(){
        float number;

        printf("Enter the number: ");
        scanf("%f",&number);

        if (number>0){
        printf("The number is positive");

        }else{
        printf("The number is not positive");
        }

        return 0;
        }
