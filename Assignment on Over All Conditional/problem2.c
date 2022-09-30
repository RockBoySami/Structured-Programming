/*This is the c program for finding the quadrant from inputted coordinates lies*/
#include<stdio.h>
int main(){
float x,y;

printf("Please enter the value of X coordinate point: ");
scanf("%f",&x);
printf("Please enter the value of Y coordinate point: ");
scanf("%f",&y);

            if(x>0 && y>0){
            printf("Inputted coordinate(%.2f,%.2f) lies in 1st Quadrant\n",x,y);
            }else if(x<0 && y>0){
            printf("Inputted coordinate(%.2f,%.2f) lies in 2nd Quadrant\n",x,y);
            }else if(x<0 && y<0){
            printf("Inputted coordinate(%.2f,%.2f) lies in 3rd Quadrant\n",x,y);
            }else if(x>0 && y<0){
            printf("Inputted coordinate(%.2f,%.2f) lies in 4th Quadrant\n",x,y);
            }else{
            printf("Inputted coordinate(%.2f,%.2f) lies in center\n",x,y);
            }
return 0;
}
