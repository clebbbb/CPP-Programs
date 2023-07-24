using namespace std;
#include<iostream>

void topMarks(int marks[], int size)
{
    for (int i=0; i<size - 1; i++) {
        for (int j=0; j <size - i - 1; i++){
            if (marks[j]<marks[j+1]){
                int temp = marks[j];
                marks[j] = marks[j+1];
                marks[j+1] = temp;
            }
        }
    }
    cout<<"Top three marks:";
    for(int i=0;i<3; i++){
        cout<<marks[i]<<"";
    }
    cout<<endl;
}
int main()
{
    int finalMarks[] ={70,92,67,80,74,68,90,88,75,72};
    int size = sizeof(finalMarks)/sizeof(finalMarks[0]);

    cout<<"final marks:";
    for(int i = 0; i<size;i++){
        cout<<finalMarks[i]<<"";
    }
    cout<<endl;

    topMarks(finalMarks,size);

    return 0;
}