/*This C program can take ten integer value and calculate the average of the ten numbers*/
#include<stdio.h>
int main(){
        int i, sum=0, num;
        float average;

        for(i=0;i<10;i++){
        printf("Enter Integer numbers: ");
        scanf("%d",&num);
        sum=sum+num;
        average=sum/(float)10;
        }
        printf("The average value of Ten integer number is: %.2f\n",average);

return 0;
}
