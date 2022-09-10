/*This is the C program for calculating the sum of first and last digit of any four digit number*/
#include<stdio.h>
int main(){
        int a,b,c,d,sum,num;
        printf("Enter the four digit number: ");
        scanf("%d", &num);

        d=num%10;
        a=num/1000;

        printf("The sum of first and last digit of number four is: %d\n", sum=d+a);

        return 0;
        }
