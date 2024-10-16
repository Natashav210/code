//A PROGRAM TO CALCULATE AND DISPLAY ELECTRICITY BILL BASED ON UNITS CONSUMED
//NAME:FAITH NATASHA
//REG NO:CT101/G/24504/24

#include<stdio.h>
#include <string.h>
int main(){
    int customer_ID;
    char name[50];
    float units,bill;
    
    printf("simple electricity calculator");
    printf("\n------------------------------\n");
    printf("Enter customer name: ");
    scanf("%s",&name);
    printf("Enter customer id: ");
    scanf("%d",&customer_ID);
    printf("Enter units consumed: ");
    scanf("%f",&units);

    if(units <= 199){
        bill = units * 1.20;
    }
    else if (units <= 400){
        bill = units * 1.50;
    }
    else if(units <= 600){
        bill = units * 1.80;
    }
    else{
        bill = units * 2.00;
    }
    if(bill < 100){
        bill = 100;
    }
    printf("Customer name: %s\n",name);
    printf("units consumed: %.2f\n",units);
    printf("Total bill: %.2f",bill);
    
}
  


   