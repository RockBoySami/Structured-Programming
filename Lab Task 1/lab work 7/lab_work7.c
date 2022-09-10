/*calculating the sum os five digits number*/
#include<stdio.h>
int main(){
        int a,b,c,d,e,num,sum;
        printf("Enter the five digit number:" );
        scanf("%d", &num);

        e=num%10;
        d=(num/10)%10;
        c=(num/100)%10;
        b=(num/1000)%10;
        a=(num/10000);

        printf("The sum of five digit number is: %d\n", sum=a+b+c+d+e);

        return 0;
        }

