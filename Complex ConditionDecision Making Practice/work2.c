/*This is the c program to display a menu in a restaurant and input user choice*/
#include<stdio.h>
int main(){
int choice;
printf("List of Food item:\n 1.Rice\n 2.Beef\n 3.Chicken\n 4.Fried Rice\n 5.Chinese Food\n 6.Japanese Susi\nEnter your choice: " );
scanf("%d",&choice);

if(choice==1){
printf("You have chosen: 1.Rice\n");
}else if(choice==2){
printf("You have chosen: 2.Beef\n");
}else if(choice==3){
printf("You have chosen: 3.Chicken\n");
}else if(choice==4){
printf("You have chosen: 4.Fried Rice\n");
}else if(choice==5){
printf("You have chosen: 5.Chinese Food\n");
}else if(choice==6){
printf("You have chosen: 6.Japanese Susi\n");
}else{
printf(" You have Chosen Invalid List Of Food Item\n");
}
return 0;
}
