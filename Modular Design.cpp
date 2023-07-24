using namespace std;
#include <iostream>
#include <string>

// area function
double calcArea(double len, double wid){
    return(len*wid);
}
//perimeter function
double calcPerimeter(double len, double wid){
    return((2*len)+(2*wid));
}
//display function
void displayResult(double a, double p){
cout<<"The area is: \t"<<a<<endl;
cout<<"The perimeter is: \t"<<p<<endl;
}

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
    perimeter = calcPerimeter(length, width);
    //4. Calculate the area funtion call
    area = calcArea(length,width); //Value returning function
    //5. Display results
    displayResult(area, perimeter);
    
    return 0;
}
