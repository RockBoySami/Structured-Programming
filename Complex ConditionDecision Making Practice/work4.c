/*This is the C program for print week day*/
#include<stdio.h>
int main(){
        int week;
        printf("Enter the week number: ");
        scanf("%d",&week);

        if(week==1){
        printf("Saturday");
        }else if(week==2){
        printf("Sunday");
        }else if(week==3){
        printf("Monday");
        }else if(week==4){
        printf("Tuesday");
        }else if(week==5){
        printf("Wednesday");
        }else if(week==6){
        printf("Thrusday");
        }else if(week==7){
        printf("Friday");
        }else{
        printf("The day is not valid");
        }
        return 0;
        }
