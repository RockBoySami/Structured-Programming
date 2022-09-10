/*This is the C program for determining how much profit he made or loss he incurred*/
#include<stdio.h>
int main(){
    float costprice, sellingprice, profit, loss;
printf("Enter the cost price: ");
scanf("%f",&costprice);

printf("Enter the selling price: ");
scanf("%f",&sellingprice);

if(costprice>sellingprice){
        loss=costprice-sellingprice;//loss tk is here 
        printf("The seller has made incurred loss and the loss is: %f\n",loss);

}else{
        profit=sellingprice-costprice;//profit tk is here
        printf("The seller has made profit and the profit is: %f\n",profit);
}

return 0;
}
