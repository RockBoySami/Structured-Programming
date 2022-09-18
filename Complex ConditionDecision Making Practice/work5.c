/*This is the C program for calculate the gross salary of an employee*/
#include<stdio.h>
int main(){
            float gross_salary,basic_salary,DA,HRA;
            printf("Enter your basic salary: ");
            scanf("%f",&basic_salary);

            if(basic_salary<=10000){
            HRA=(20*basic_salary)/100;
            DA=(80*basic_salary)/100;
                        
            }else if(basic_salary<=20000){
            HRA=(25*basic_salary)/100;
            DA=(90*basic_salary)/100;
                        
            }else{
            HRA=(30*basic_salary)/100;
            DA=(95*basic_salary)/100;
            }
            printf("Your Gross Salary is: %.2f\n",gross_salary=basic_salary+HRA+DA );
            return 0;
            }
