using namespace std;
#include <string>
#include <cctype>
#include <iostream>
#include <iomanip>
int main()
{
int testScore[5], sum = 0;
double average = 0.0;
cout << fixed << showpoint << setprecision(2);
cout<<"Enter the test score";
for (int i=0; i<5; i++){

    cin>>testScore[i];
    sum= sum + testScore[i];
}
average =sum/5;
cout<< "The average test score ="<<average<<endl;

if (testScore[0] < average)
    cout << testScore[0] << " is less than the average "
    << "test score." << endl;
if (testScore[1] < average)
    cout << testScore[1] << " is less than the average "
    << "test score." << endl;
if (testScore[2] < average)
    cout << testScore[2] << " is less than the average "
    << "test score." << endl;
if (testScore[3] < average)
    cout << testScore[3] << " is less than the average "
    << "test score." << endl;
if (testScore[4] < average)
    cout << testScore[4] << " is less than the average "
    << "test score." << endl;
        return 0;
}
