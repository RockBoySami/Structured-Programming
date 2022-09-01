/*this is c program for calculating the total number
of illiterate men and women*/
#include<stdio.h>
int main(){
    int tmen,twomen,tliteracy,lmen,lwomen,illiteratemen,illiteratewomen,totalilliteratemanandwomen,townpopulation;
    printf("Enter the total Town Population: ");
    scanf("%d",&townpopulation);

tmen=(52*townpopulation)/100;
twomen=townpopulation-tmen;

tliteracy=(48*townpopulation)/100;
lmen=(35*townpopulation)/100;
lwomen=(tliteracy-lmen);

illiteratemen=tmen-lmen;
illiteratewomen=twomen-lwomen;

totalilliteratemanandwomen=illiteratemen+illiteratewomen;

printf("This is the number of total illiterate man and women: %d\n", totalilliteratemanandwomen);



return 0;
}
