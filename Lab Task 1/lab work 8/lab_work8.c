/*This is the C program for reversing any 5 digit number*/
#include<stdio.h>
int main(){
        int a,b,c,d,e,num,reverse;
        printf("Enter the five digit number: ");
        scanf("%d",&num);

        e=num%10;
        d=(num/10)%10;
        c=(num/100)%10;
        b=(num/1000)%10;
        a=(num/10000);

        printf("The reversing number is: %d\n", reverse=e*10000+d*1000+c*100+b*10+a);

        return 0;
        }
