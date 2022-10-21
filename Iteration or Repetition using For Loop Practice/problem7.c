/*This C program can calculate two positive numbers factorial and sum of the two factorials*/
#include<stdio.h>
int main(){
int i,j,number_1,number_2,fact_1=1,fact_2=1,sum;

            printf("Enter the Number 1 here: ");
            scanf("%d",&number_1);
            printf("Enter the Number 2 here: ");
            scanf("%d",&number_2);

            if(0<=number_1<=20 && 0<=number_2<=20){
            for(i=1;i<=number_1;i++){
            fact_1=fact_1*i;
            }
         z\   for(j=1;j<=number_2;j++){
            fact_2=fact_2*j;
            }
            sum=fact_1+fact_2;
            printf("The sum of the factorials of %d and %d is: %d",nu    mber_1,number_2,sum);
            }else{
            printf("You have Entered Negative Number");
            }

return 0;
}



