using namespace std;
#include <iostream>
#include <string>

int main()
{
    //Declaration of variables
    double salary = 0.00;
    double bonus = 0.00;
    double totalSales = 0.00;
    double additionalBonus = 0.00;
    double monthlyPaycheck = 0.00;
    int year = 0;

    //Prompt user to enter salary, total sales and years working 
    cout<<"Please enter your salary";
    cin>>salary;
    cout<<"Please enter total sale made";
    cin>>totalSales;
    cout<<"Please enter years worked at company";
    cin>>year;
    //Calculating monthly paycheck
    if (year <= 5)
    {
        bonus = 10 * year;
    } else {
        bonus = 20 * year;
    }
    if (totalSales = 5000 < 10000)
    {
        additionalBonus = 0.3 * totalSales;
    } else {
        if (totalSales > 10000)
        {
            additionalBonus = 0.6 * totalSales;
        }
    }
    monthlyPaycheck = salary + bonus + additionalBonus;
    // Displaying results 
    cout<<"The monthly paycheck calculated is" << monthlyPaycheck <<endl;

    return 0;
}
