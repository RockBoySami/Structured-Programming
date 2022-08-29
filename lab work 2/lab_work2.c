/*Distance between Mirpur and Ashulia*/
#include<stdio.h>
main(){
float distance;
float meter;
float feet;
float inches;
float centimeters;
printf("please enter the distance of mirpur and ashulia: ");
scanf("%f", &distance);


meter=1000*distance;
feet=3280.84*distance;
inches=39370.1*distance;
centimeters=100000*distance;

printf("meter: %f\n", meter);
printf("feet: %f\n", feet);
printf("inches: %f\n", inches);
printf("centimeters: %f\n", centimeters);

return 0;


}

