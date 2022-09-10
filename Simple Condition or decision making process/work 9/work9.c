/*this is the program for determining the shortest route*/
#include<stdio.h>
int main(){
float distance_a=15.6,distance_b=18;

printf("Route distance A: %f\n",distance_a);


printf("Route distance B: %f\n",distance_b);


if(distance_a>distance_b){

    printf("Route B is shortest than route A\n");
}else{
    printf("Route A is shortest than route B\n");
}
return 0;
}
