/*this is the c program for check a triangle is valid or not*/
#include<stdio.h>
int main(){
int a,b,c, sum;

printf("Enter the angle 1: ");
scanf("%d", &a);

printf("Enter the angle 2: ");
scanf("%d", &b);

printf("Enter the angle 3: ");
scanf("%d", &c);

sum=a+b+c;//sum of three triangle is here
if(sum==180){
    printf("The triangle is valid");

}else{
    printf("The triangle is not valid");
}


return 0;
}
