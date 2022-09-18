/*This is the C program for print week day*/
#include<stdio.h>
int main(){
        int week;
        printf("Enter the week number: ");
        scanf("%d",&week);

        if(week>=1 && week<=52){
        printf("Saturday\nSunday\nMonday\nTuesday\nWednesday\nThrusday\nFriday\n");
        }else{
        printf("Invalid\n");
        }
        return 0;
        }
