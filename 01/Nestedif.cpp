//Write a program that inputs three numbers and displays the smallest number using nested if codition

#include<iostream>       // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
int main ()               // main function from where execution starts
{
   int a,b,c;             // declare three integer variables
    cout<<"Enter three numbers: ";  // display message
    cin>>a>>b>>c;                   // input three numbers
    if(a<b)                         // check if a is less than b
    {
        if(a<c)                     // check if a is less than c
        {
            cout<<"Smallest number is: "<<a;  // display a as smallest number
        }
        else
        {
            cout<<"Smallest number is: "<<c;  // display c as smallest number
        }
    }
    else
    {
        if(b<c)                     // check if b is less than c
        {
            cout<<"Smallest number is: "<<b;  // display b as smallest number
        }
        else
        {
            cout<<"Smallest number is: "<<c;  // display c as smallest number
        }
    }
    return 0;   // return 0 to operating system
}
