/*this is the c program weather a number zero or not*/
#include<stdio.h>
int main(){
float number;
printf("Enter the number: ");
scanf("%f",&number);

if (number==0){
    printf("The number is zero");

}else{
    printf("The number is not zero");
}

return 0;
}
