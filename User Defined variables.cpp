using namespace std;
#include <iostream>
#include <string>

int main()
{
    //declare variables 
    //data type, name (camel case), initial value
    double length = 0.0;
    double width =0.0;
    double area = 0.0;
    double perimeter = 0.0;


    //1. Prompt the user to enter the length
    cout<< "Enter the length value";
    cin>>length;
    //2. Prompt the user to enter the width value
    cout<< "enter the width value";
    cin>>width;
    //3. Calculate the perimeter 
    perimeter = 2 * (length + width);
    //4. Calculate the area
    area = length * width;
    //5. Display results
    cout<<"the perimeter is"<<perimeter <<endl;
    cout<<"the area is"<<area <<endl;
    
    return 0;
}

