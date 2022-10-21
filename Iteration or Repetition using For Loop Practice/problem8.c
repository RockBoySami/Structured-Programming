/*This C program can Sum of this series 9+13+17+21+……+n=?*/
#include<stdio.h>
int main(){
int num,i,sum=0;
            printf("Enter the last number of the series: ");
            scanf("%d",&num);

            for(i=9;i<=num;i=i+4){
            sum=sum+i;
            }
            printf("The sum of the is: %d",sum);

return 0;
}
