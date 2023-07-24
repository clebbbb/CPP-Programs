using namespace std;
#include <iostream>
#include<cmath>
double trap(double h, double a, double b)
{
    double val;
    val =0.5 * h *(a + b);
    return val;
}
int main()
{
    double height, width1, width2;
    cout<<"the area of a trapezium is 1/2h(a+b)"<<endl;
    cout<<"please enter positve values for the the height and two widths";
    cin>>height>>width1>>width2;
    cout<<endl;
    if ((height, width1, width2)>0)
    {
        cout<<"The area of your trapezium is"
            <<trap(height,width1,width2)<<endl;
    } else {
        cout<<"the values entered were negative"<<endl;
    }
    return 0;
}