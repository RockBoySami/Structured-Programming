/*this is the c program for five digit number to  a new  number by adding one to each of its digits*/
#include<stdio.h>
int main(){
    int number,a,b,c,d,e,f,g,h,i,j,reverse,newnumber;
printf("Enter the five digit number: ");
scanf("%d", &number);

a=(number%10)+1;
b=((number/10)%10)+1;
c=((number/100)%10)+1;
d=((number/1000)%10)+1;
e=(number/10000)+1;

reverse=(a*10000+b*1000+c*100+d*10+e*1);

f=(reverse%10);
g=(reverse/10)%10;
h=(reverse/100)%10;
i=(reverse/1000)%10;
j=(reverse/10000);

newnumber=(f*10000+g*1000+h*100+i*10+j*1);//the new number by adding one is here

printf("The new number is: %d\n", newnumber);

return 0;
}
