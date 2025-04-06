//A program that inputs anumber and tells wether it is palindrome or not.

#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
int main ()               // main function from where execution starts
{
    int n, num,digit,reverse=0;
    cout<<"Enter a number to check wether it is palindrome or not :";
    cin>>n;
    n=num;

    do
    {
        digit=num%10;
        reverse=(reverse*10)+digit;
        num=num/10;

    }while(num!=0);

    if(n==reverse)
        cout<<"The enterd number is palindrome."; 
    else
         cout<<"The enterd number is not palindrome.";
        //palindrome is a number which becomes equal to reverse of its digits e.g 4994
        return 0;       //return 0 to operating system
} 
