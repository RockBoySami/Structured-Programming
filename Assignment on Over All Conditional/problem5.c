/*This c program will f integer variable
currentNumber is odd, change its value so that it is now 3 times currentNumber
plus 1, otherwise change its value so that it is now half of currentNumber*/
#include<stdio.h>
int main(){
int current_number;
printf("Enter the value: ");
scanf("%d",&current_number);

                if(current_number%2==0){
                printf("Changed value is= %d",current_number/2);
                }else{
                printf("Changed value is= %d",current_number*3+1);
                }
return 0;
}
