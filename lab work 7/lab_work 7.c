/*this is the C program for calculating the sum of 5 digits number*/
#include<stdio.h>
int main(){
int number;
int sum=0;
int remainder;

printf("Enter the five digit number: ");
scanf("%d", &number);

remainder=number%10;
sum=sum+remainder;
number=number/10;

remainder=number%10;
sum=sum+remainder;
number=number/10;

remainder=number%10;
sum=sum+remainder;
number=number/10;

remainder=number%10;
sum=sum+remainder;
number=number/10;

remainder=number%10;
sum=sum+remainder;
number=number/10;

remainder=number%10;
sum=sum+remainder;
number=number/10;

printf("the sum of five digit number is: %d",  sum);
return 0;




}
