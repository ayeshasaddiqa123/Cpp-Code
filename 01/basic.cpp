/*
Aprogram that inputs test marks of a student and dis  plays his grade according to givrn criteria:
Test score              Grade 
>=90                        A
80-90                       B
70-79                       c       
60-69                       D
Below 60                    F    
*/

#include<iostream>       // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
int main ()               // main function from where execution starts
{
    int score;              // declare a variable score of type integer
    cout<<"Enter score : "; // print double quoted text
    cin>>score;
    if(score>=90)
    {
        cout<<"Grade A";
    }
    else if(score>=80)
    {
        cout<<"Grade B";
    }
    else if(score>=70)
    {
        cout<<"Grade C";
    }
    else if(score>=60)
    {
        cout<<"Grade D";
    }
    else
    {
        cout<<"Grade F";
    }
return 0; // return 0 to the opearating system
}