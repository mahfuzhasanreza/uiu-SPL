#include<stdio.h>
/*
Write a program in C to calculate and print the electricity bill. Customers consumed unit should be captured from the keyboard to display the total amount to be paid to the customer.

The charge are as follow :
--------------------------------------------------------------------
Unit	                                 |              Charge/unit
-----------------------------------------|--------------------------
upto 199	                             |                 @1.20
200 and above but less than 400          |                 @1.50
400 and above but less than 600	         |                 @1.80
600 and above	                         |                 @2.00

If bill exceeds Rs. 400 then a surcharge of 15% will be charged and the minimum bill should be of Rs. 100/-
*/
int main(){
    int unit;
    scanf("%d", &unit);

    float charge;
    if(unit<=199) charge=1.2;
    else if(unit>=200 && unit<400) charge=1.5;
    else if(unit>=400 && unit<600) charge=1.8;
    else if(unit>=600) charge=2.0;

    float billAmount=unit*charge;

    if(billAmount>400){
        billAmount+=(0.15*billAmount);
    }

    if(billAmount<100) billAmount=100;

    printf("Bill Amount: %.2f", billAmount);

    return 0;
}