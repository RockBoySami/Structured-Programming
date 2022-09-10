/*This is the C program for calculating Niloy's basic salary */
#include<stdio.h>
int main(){
        float basic_salary,dearness_allowance,house_rent,gross_salary;

        printf("Please enter your Basic Salary: ");
        scanf("%f", &basic_salary);

        dearness_allowance= (40*basic_salary)/100;
        house_rent= (20 *basic_salary)/100;

        printf("your gross_salary is: %.2f taka",gross_salary=basic_salary+house_rent+dearness_allowance);
        return 0;

        }
