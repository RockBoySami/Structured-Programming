/*this is C the program for determining the shortest route*/
#include<stdio.h>
int main(){
        float distance_a,distance_b;

        printf("Enter route distance A: ");
        scanf("%f",&distance_a);

        printf("Enter route distance B: ");
        scanf("%f",&distance_b);

        if(distance_a>distance_b){

        printf("Route B is the shortest route than route A\n");
        }
        else{
        printf("Route A is shortest than route B\n");
        }

        return 0;
        }
