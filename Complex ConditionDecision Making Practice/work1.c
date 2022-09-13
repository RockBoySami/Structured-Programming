/*This is the C program for determinig weather a number is positive, negative or neutral*/
#include<stdio.h>
int main(){
        float number;
        printf("Enter the number: ");
        scanf("%f",&number);

        if(number>0){
        printf("The number is positive");
        }else if(number<0){
        printf("The number is negative");
        }else{
        printf("The number is neutral");
        }

        return 0;
        }
