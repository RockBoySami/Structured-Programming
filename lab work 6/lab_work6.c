/*this is C program for interchanging the contents of C and D*/
#include<stdio.h>
main(){
int C;
int D;

printf("enter your first content 1: ");
scanf("%d", &C);

printf("enter your second content 2: ");
scanf("%d", &D);

C=C-D;
D=D+C;
C=D-C;

printf("C: %d", C);
printf("\nD: %d", D);

return 0;

}

