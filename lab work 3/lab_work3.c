/*This is the C program for one student aggregate and percentage marks*/
#include<stdio.h>
main(){
float subject1;
float subject2;
float subject3;
float subject4;
float subject5;
float aggregatemarks;
float percentagemarks;
printf("Enter your subject 1 number: ");
scanf("%f", &subject1);
printf("Enter your subject 2 number: ");
scanf("%f", &subject2);
printf("Enter your subject 3 number: ");
scanf("%f", &subject3);
printf("Enter your subject 4 number: ");
scanf("%f", &subject4);
printf("Enter your subject 5 number: ");
scanf("%f", &subject5);

aggregatemarks=subject1+subject2+subject3+subject4+subject5;

percentagemarks=(aggregatemarks/500)*100;

printf("aggregatemarks: %f\n", aggregatemarks);
printf("percentagemarks: %f\n", percentagemarks);


return 0;
}




