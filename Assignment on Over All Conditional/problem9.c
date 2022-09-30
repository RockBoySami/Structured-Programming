/*This is the C program for total number of currency notes of each denomination the cashier will have to give to the withdrawer*/
#include<stdio.h>
int main(){
        int currency,a,b,c,d,e,f;
        printf("Enter the currency in hundreds: ");
        scanf("%d", &currency);

        a=currency/100;//hundred notes are here
        b=currency%100;
        c=b/50;//fifty notes are here
        d=b%50;
        e=d/10;//ten notes are here
        f=d/10;

        printf("hundred notes are: %d\n", a);
        printf("Fifty notes are: %d\n", c);
        printf("Ten notes are: %d\n", e);


        return 0;
        }
