/*This C program can Count 10 employees overtime work and their salary(BDT) in a week*/
#include<stdio.h>
int main(){
        int i,working_hour,overtime_work;
        float overtime_TK;

        for(i=1;i<=10;i++){
        printf("Enter the working hours of employee no %d : ",i);
        scanf("%d",&working_hour);

        if(working_hour>36){
        overtime_work=working_hour-36;
        overtime_TK=overtime_work*(float)120;
        printf("Employee no %d will get Overtime duty Tk in BDT: %.2f TK\n",i,overtime_TK);
        }else{
        printf("You Didn't Work above 36 hours in this week.\n");
        }

        }
return 0;
}
