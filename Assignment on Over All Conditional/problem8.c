/*This is c program for calculating the total number of illiterate men and women*/
#include<stdio.h>
int main(){
        int t_men,t_women,t_literacy,l_men,l_women,illiterate_men,illiterate_women,total_illiterate_man_and_women,town_population;

        printf("Enter the total Town Population: ");
        scanf("%d",&town_population);

        t_men=(52*town_population)/100;
        t_women=town_population-t_men;

        t_literacy=(48*town_population)/100;
        l_men=(35*town_population)/100;
        l_women=(t_literacy-l_men);

        illiterate_men=t_men-l_men;
        illiterate_women=t_women-l_women;

        printf("This is the number of total illiterate man and women: %d\n", total_illiterate_man_and_women=illiterate_men+illiterate_women);


        return 0;
        }
