/*Find the cost price of one item*/
#include<stdio.h>
int main(){
    float totalselllingprice,totalprofit,cost;

    printf("Enter the total selling price of 15 items: ");
    scanf("%f",&totalselllingprice);

    printf("Enter the totalprofit earned: ");
    scanf("%f",&totalprofit);

    cost=(totalselllingprice-totalprofit)/15;//the cost of one item is here

    printf("The cost of one item is: %f\n", cost);

return 0;
}
