/*
A program to check and output whether the user qualifies and does not qualify for a loan
NAME:FAITH NATASHA
REG NO:CT101/G/24504/24
*/
#include <stdio.h>
int main(){
    int  age;
    float income;

    printf("Enter your age: ");
    scanf("%d",&age);

    printf("Enter your income: ");
    scanf("%f",&income);

    if(age>21 && income>=21000){
    printf("Congratulations you qualify for a loan.");
    }
    
    else
    {
        printf("Unfortunately we are unable to offer you a loan at this time");
    }
}