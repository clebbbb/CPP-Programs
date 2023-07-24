using namespace std;
#include <iostream>
#include <math.h>

int main()
{
    //variable declaration
    double salesPrice = 0.0;
    double stateSalesTax = 0.0;
    double citySalesTax = 0.0;
    double luxuryTax = 0.0;
    double salesTax = 0.0;
    double amountDue = 0.0;
    
    //prompt user to state the sales price
    cout<<"State price of item";
    cin>>salesPrice;
    //defining the tax percentage
    stateSalesTax = salesPrice * 0.04;
    citySalesTax = salesPrice * 0.015;
    if(salesPrice > 50000){
        luxuryTax = salesPrice * 0.1;
    } else {
        luxuryTax = 0;
    };
    //Calculating the amount of salestax
    salesTax = stateSalesTax + citySalesTax + luxuryTax;
    //Calculating the final price of an item 
    amountDue = salesPrice + salesTax;
    //Displaying results
    cout<<"The final amount for a value is"<<amountDue <<endl;

    return 0;
} 
