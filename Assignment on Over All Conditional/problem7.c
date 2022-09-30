/*This C program can calculate BMI of 18 years and older people*/
#include<stdio.h>
int main(){
float weight, height, BMI;

printf("1.Enter weight in Kilograms: ");
scanf("%f",&weight);
printf("2.Enter the height in meter: ");
scanf("%f",&height);
BMI= weight / (height * height);

                if(BMI<18.5){
                printf("Your BMI Weight Status is: %.2f Underweight",BMI);
                }else if(BMI>=18.5 && BMI<=24.9){
                printf("Your BMI Weight Status is: %.2f Normal and Healthy Weight",BMI);
                }else if(BMI>=25.5 && BMI<=29.9){
                printf("Your BMI Weight Status is: %.2f Overweight",BMI);
                }else{
                printf("Your BMI Weight Status is: %.2f Obese",BMI);
                }
return 0;
}
