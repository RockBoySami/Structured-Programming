/*This C program can find a number is Prime or not*/
#include<stdio.h>
int main(){
int num,i,is_prime=1;

                printf("Enter a number: ");
                scanf("%d",&num);

                if(num>0){
                for(i=2;i<num; i++){
                if(num%i==0){
                is_prime=0;
                break;
                }
                }
                }if(is_prime==0){
                printf("The number is not a prime number");
                }else{
                printf("The number is a prime number");
                }

return 0;
}
