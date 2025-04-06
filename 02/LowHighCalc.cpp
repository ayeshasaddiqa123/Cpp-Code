//A proram that inputs a number and find out highest and lowest digit in the number.

#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
int main ()               // main function from where execution starts
{
    int num;int digit;           //declare variables
    cout<<"Enter a number : ";   //cout object prints as it is written in""
    cin>>num;                    //input

    int low=num%10;             //intialize it
    int high =num%10;
    num=num/10;

    for(int i=num;i>=1;i=i/10)
    {
        digit=num%10;
        if(digit>high)
            high=digit;

       if(digit<low)
            low = digit;       

    }
        cout<<"The highest digit is : "<<high<<endl;
        cout<<"The lowest digit is : "<<low;
        return 0; //return 0 to the operating system
    }
