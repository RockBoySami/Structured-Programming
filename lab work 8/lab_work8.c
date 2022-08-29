/*this is the C program for reversing any number*/
#include<stdio.h>
int main(){
int a;
int b;
int c;
int d;
int e;
int number;
int reverse;
printf("ENTER THE FIVE DIGIT NUMBER: ");
scanf("%d", &number);

e=number%10;
d=(number/10)%10;
c=(number/100)%10;
b=(number/1000)%10;
a=(number/10000)%10;

reverse=e*10000+d*1000+c*100+b*10+a;
printf("The reverse value of the number is : %d", reverse);



return 0;
}
