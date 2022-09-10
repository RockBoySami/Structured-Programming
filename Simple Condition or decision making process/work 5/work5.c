/*this is the c program for check the area of triangle is greater than the perimeter*/
#include<stdio.h>
int main(){
         float area,height,perimeter,a,base,c;

         printf("Enter side of the triangle 1: ");
         scanf("%f",&a);

         printf("Enter base of the triangle: ");
         scanf("%f",&base);

         printf("Enter side of the triangle 3: ");
         scanf("%f",&c);

         printf("Enter the height of the triangle: ");
         scanf("%f",&height);

         if( area=(0.5*base*height), perimeter=a+base+c,  perimeter>area){

         printf("The perimeter of the triangle is greater than the area");
         }else{
         printf("The perimeter of the triangle is not greater than the area");

         }
         return 0;
         }
