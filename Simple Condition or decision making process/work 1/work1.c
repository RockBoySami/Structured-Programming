/*This is the C program for determining the profit or loss seller incurred*/
#include<stdio.h>
int main(){
    float cost_price, selling_price, profit, loss;
        printf("Enter the cost price: ");
        scanf("%f",&cost_price);

        printf("Enter the selling price: ");
        scanf("%f",&selling_price);

        if(cost_price>selling_price){
        
                printf("The seller has made incurred loss and the loss is: %f\n",cost_price-selling_price);

        }else{

                printf("The seller has made profit and the profit is: %f\n",selling_price-cost_price);
        }

return 0;
        }
