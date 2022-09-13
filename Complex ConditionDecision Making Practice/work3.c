/*This is the C program for showing the value of n is 1 when m is larger than 0, 0 when m is 0 and -1 when m is less than 0*/
#include<stdio.h>
int main (){
        int m;
        printf("Enter the number: ");
        scanf("%d",&m);

        if(m>0){
        printf("n = 1");
        }else if(m==0){
        printf("n = 0");
        }else{
        printf("n = -1");
        }
        return 0;
        }
