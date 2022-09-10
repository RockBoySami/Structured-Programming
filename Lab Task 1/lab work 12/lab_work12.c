/*This is the C  program for calculating cost of one item from 15 items*/
#include<stdio.h>
int main(){
        float total_selling_price,total_profit,cost;

        printf("Enter the total selling price of 15 items: ");
        scanf("%f",&total_selling_price);

        printf("Enter the total profit earned: ");
        scanf("%f",&total_profit);

        printf("The cost of one item is: %f\n", cost=(total_selling_price-total_profit)/15);

        return 0;
        }


