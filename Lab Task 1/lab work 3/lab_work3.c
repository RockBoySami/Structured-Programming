/*This is the C program for one student aggregate and percentage marks*/
#include<stdio.h>
int main(){
        float subject_1,subject_2,subject_3,subject_4,subject_5,aggregate_marks,percentage_marks;

        printf("Enter your subject 1 number: ");
        scanf("%f", &subject_1);
        printf("Enter your subject 2 number: ");
        scanf("%f", &subject_2);
        printf("Enter your subject 3 number: ");
        scanf("%f", &subject_3);
        printf("Enter your subject 4 number: ");
        scanf("%f", &subject_4);
        printf("Enter your subject 5 number: ");
        scanf("%f", &subject_5);

        printf("aggregate marks: %f\n", aggregate_marks=subject_1+subject_2+subject_3+subject_4+subject_5);
        printf("percentage marks: %f\n", percentage_marks=(aggregate_marks/500)*100);

        return 0;
        }


