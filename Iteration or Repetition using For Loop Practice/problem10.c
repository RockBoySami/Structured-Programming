/*This c program can display a Binary half Pyramid*/

#include<stdio.h>
int main(){
            int i,j;

            for(i=1;i<=5;i++){
            for(j=0;j<i;j++){
            printf("%d",j%2);
            }
            printf("\n");
            }

return 0;
}

