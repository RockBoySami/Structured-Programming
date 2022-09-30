/*This is the C program that can take input the age of your father, mother and uncle and your program should
output who is the oldest, who is youngest and whose age is between oldest and young*/
#include<stdio.h>
int main(){
int f_age, m_age, u_age;

printf("Enter your father's age: ");
scanf("%d",&f_age);
printf("Enter your mother's age: ");
scanf("%d",&m_age);
printf("Enter your uncle's age: ");
scanf("%d",&u_age);

            if(f_age>m_age && m_age>u_age){
            printf("Your father is the oldest person\nYour uncle is the youngest person\nYour mother's age is between oldest and youngest age\n");
            }else if(m_age>f_age && f_age>u_age){
             printf("Your mother is the oldest person\nYour uncle is the youngest person\nYour father's age is between oldest and youngest age\n");
            }else if(u_age>f_age && f_age>m_age){
             printf("Your uncle is the oldest person\nYour mother is the youngest person\nYour father's age is between oldest and youngest age\n");
            }else if(u_age>m_age && m_age>f_age){
             printf("Your uncle is the oldest person\nYour father is the youngest person\nYour mother's age is between oldest and youngest age\n");
            }else if(f_age>u_age && u_age>m_age){
             printf("Your father is the oldest person\nYour mother is the youngest person\nYour uncle's age is between oldest and youngest age\n");
            }else if(m_age>u_age && u_age>f_age){
             printf("Your mother is the oldest person\nYour father is the youngest person\nYour uncle's age is between oldest and youngest age\n");
            }else{
            printf("you have enter invalid age type\n");
            }
return 0;
}


