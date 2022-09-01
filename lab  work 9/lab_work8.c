/*four digit number is input through the keyboard calculating the first and last digit of the number*/
#include<stdio.h>
int main(){
int a,b,c,d,sum,num;
printf("Enter the four digit number: ");
scanf("%d", &num);

d=num%10;
a=num/1000;

sum=d+a;;
printf("The sum of first and last digit of number four is: %d\n", sum);

return 0;
}
