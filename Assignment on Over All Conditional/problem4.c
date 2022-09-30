/*This is c program is a simple calculator which can calculate
two numbers summation, subtractraction, multiplication and, division*/
#include<stdio.h>
int main(){
int choice;
float a,b,sum,sub,mul,div;

printf("Please insert the first number: ");
scanf("%f",&a);
printf("Please insert the second number: ");
scanf("%f",&b);
printf("what do you want to do with the inputted numbers?\n1. Calculate the summation\n2. Calculate the subtraction\n3. Calculate the multiplication \n4. Calculate the division\nPlease enter your choice:");
scanf("%d",&choice);

                if(choice==1){
                printf("The summation of %.2f and %.2f is = %.2f\n", a,b,sum=a+b);
                }else if(choice==2){
                printf("The Subtraction of %.2f and %.2f is = %.2f\n", a,b,sub=a-b);
                }else if(choice==3){
                printf("The Multiplication of %.2f and %.2f is = %.2f\n", a,b,mul=a*b);
                }else if(choice==4){
                printf("The Division of %.2f and %.2f is = %.2f\n", a,b,div=a/b);
                }else{
                printf("Invalid input entered");
                }
return 0;
}
