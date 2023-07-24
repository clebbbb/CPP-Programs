using namespace std;
#include <iostream>
int main()
{
    int totalGrades= 0;
    int sumOfGrades=0;
    int grade;

    const int SENTINEL = -1;
    //Ask user for first grades and inform how to end program
    cout<<"Enter grades [-1 to end program]";
    cin>>grade;
    //initialise while loop
    while(grade != SENTINEL)
    {
        sumOfGrades += grade;
        totalGrades++;
        cout<<"Enter the next grade [-1 to end program]";
        cin>>grade;
    }
    //computing the average 
    if (totalGrades > 0)
    {
       double average = sumOfGrades * 1.0/ totalGrades;
       cout<<"The average is" << average << endl;
    }
    else {
        cout<< "No grades were entered" << endl;
    }
    return 0;
}