using namespace std;
#include <iostream>
#include <math.h>
#include <iomanip>
int main()
{
    //declaring variables 
    int num1 =5;
    int num2 =7;
    double num3 =8.0;
    double num4 =3.7;
    cout<<"5 + 7 = "<<num1+num2<<endl;
    cout<<"3.7 + 8.0 = "<<num3+num4<<endl;
    cout<<"5 + 8.0 = "<<num1+num3<<endl;
    cout<<"5 - 7 = "<<num1-num2<<endl;
    cout<<"3.7 - 8.0 ="<<num4-num3<<endl;
    cout<<"5 - 8.0 ="<<num1-num3<<endl;
    cout<<"5 * 7 ="<<num1*num2<<endl;
    cout<<"3.7 * 8.0 ="<<num4*num3<<endl;
    cout<<"5 * 8.0 ="<<num1*num3<<endl;
    cout<<"5 / 7 ="<<num1/num2<<endl;
    cout<<"3.7 / 8.0 ="<<setprecision(1)<<num4/num3<<endl;
    cout<<"5 / 8.0 ="<<setprecision(1)<<num1/num3<<endl;
    return 0;
}