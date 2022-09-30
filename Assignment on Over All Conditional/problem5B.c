/*This is the c program for finding the cost*/
#include<stdio.h>
int main(){
int distance;
double cost;
printf("Please enter the distance: ");
scanf("%d",&distance);

            if(distance>=0 && distance<=100){
            printf("Cost= %.2lf",cost=5.00);
            }else if(distance>100 && distance<=500){
            printf("Cost= %.2lf",cost=8.00);
            }else if(distance>500 && distance<1000){
            printf("Cost= %.2lf",cost=10.00);
            }else{
            printf("Cost= %.2lf",cost=12.00);
            }

return 0;
}
