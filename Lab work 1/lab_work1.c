/*Niloys basic salary*/
#include<stdio.h>
int main(){
float basicsalary;
float dearnessallowance;
float houserent;
float grosssalary;

printf("Please enter your Basic Salary: ");
scanf("%f", &basicsalary);

dearnessallowance= (40 * basicsalary)/100;
houserent= (20 *basicsalary)/100;
grosssalary=basicsalary+houserent+dearnessallowance;

printf("your grosssalary is: %.2f taka",grosssalary);
return 0;



}
