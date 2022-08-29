/*Temperature of a city  alters from fahrenheit to centigrade*/
#include<stdio.h>
main(){
float citytemperatureF;
float centigrade;
printf("Enter your city temperatureF: ");
scanf("%f", &citytemperatureF);

centigrade=(citytemperatureF-32)/9*5;

printf("centigrade: %f", centigrade);

return 0;
}
