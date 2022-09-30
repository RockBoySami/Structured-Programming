/*This is the c program for converting temperature from degree celcius to farenheit and farenheit to celcius.*/
#include<stdio.h>
int main(){
int choice;
float fahrenheit,celsius;
printf("1.Celsius to Fahrenheit\n2.Fahrenheit to Celsius\nPlease enter your choice:");
scanf("%d",&choice);

            if(choice==1){
            printf("Enter the temparature in Celsius: ");
            scanf("%f",&celsius);
            printf("%.2f celsius is %.2f fahrenheit\n",celsius,fahrenheit=(celsius*9/5)+32);
            }else if(choice==2){
            printf("Enter the temparature in Fahreheit: ");
            scanf("%f",&fahrenheit);
            printf("%.2f fahrenheit is %.2f celsius\n",fahrenheit,celsius=(fahrenheit-32)*5/9);
            }else{
            printf("Invalid\n");
            }
return 0;
}
