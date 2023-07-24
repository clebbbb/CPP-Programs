using namespace std;
#include<iostream>
#include<cstring> 

int main()
{
    //variable declaration
    char mpass[20], pass[20];
    int numOne, numTwo, sum;
    //Prompting user to create their own password 
    cout<<"Create a Password";
    cin>>pass;
    //Prompt use to enter two numbers to calculate their sum
    cout<<"Enter Two Numbers to Add:";
    cin>>numOne>>numTwo;
    //Prompt user to reenter password created to access the result
    cout<<"Enter the Password to See the Result:";
    cin>>mpass;
    if (mpass == pass)
    {
        sum = numOne - numTwo;
        cout<<numOne<<"+"<<numTwo<<"="<<sum;
    }
    else
        cout<<"Sorry! You've entered the wrong password!"<<endl;
    return 0;
}
