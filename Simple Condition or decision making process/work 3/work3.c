/*this is the c program for determining the youngest person*/
#include<stdio.h>
int main(){
        int arif_age,joy_age;

        printf("Enter the Arif's Age:");
        scanf("%d",&arif_age);

        printf("Enter the joy's Age:" );
        scanf("%d",&joy_age);

        if(arif_age>joy_age){
        printf("Joy is youngest\n");

        }else{
        printf("Arif is youngest\n");

        }
        return 0;
        }