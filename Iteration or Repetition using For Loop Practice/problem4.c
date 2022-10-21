/*This C program Can calculate of any positive number's factorial*/
#include<stdio.h>
int main(){
            int i,number,fact=1;
            printf("Enter the Number here: ");
            scanf("%d",&number);
            if(number>0){
            for(i=1;i<=number;i++){
            fact=fact*i;
            }
            printf("The factorial of %d is: %d",number,fact);
            }else{
            printf("You have Entered Negative Numebr");
            }

return 0;
}
