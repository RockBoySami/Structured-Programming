/*this is the c program for determining the youngest person*/
#include<stdio.h>
int main(){
    int arifage,joyage;

printf("Enter the Arif's Age:");
scanf("%d",&arifage);

printf("Enter the joy's Age:" );
scanf("%d",&joyage);

if(arifage>joyage){
    printf("Joy is youngest\n");

}else{
    printf("Arif is youngest\n");

}
return 0;
}
