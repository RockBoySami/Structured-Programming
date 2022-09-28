/*This is the C program for interchange the contents of C and D*/
#include<Stdio.h>
int main()
{
    int C, D;
     printf("Enter the value of C: ");
     scanf("%d", &C);

     printf("Enter the value of D: ");
     scanf("%d", &D);
     C = C+D; //c=30, d=20
     D = C-D; //d=10, c=30
     C = C-D; //c=20

     printf("The value of C: %d\n", C);
     printf("The value of D: %d\n", D);

     return 0;
}
