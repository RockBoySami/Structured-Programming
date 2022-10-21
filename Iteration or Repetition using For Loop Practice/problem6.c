/*This C program can display a full pyramid with star*/

#include<stdio.h>
int main(){
        int number,col,row,space;
        printf("Enter the number of Rows:");
        scanf("%d",&number);

        for(row=1;row<=number; row++){
        for(space=-10;space<=(number-row);space++){
        printf(" ");
        }
        for(col=1;col<=(2*row-1);col++){
        printf("*");
        }
        printf("\n");
        }

return 0;
}
