//A program that tells that entered number is fibonacci or not
#include<iostream>    // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
int main ()               // main function from where execution starts
{
    //A program that tells that entered number is fibonacci or not
    //Fibonacci series is 0,1,1,2,3,5,8,13,21,34,55,89,144....
    //In this series the next number is found by adding up the two numbers before it.
    //For example 0+1=1 , 1+1=2 , 1+2=3 , 2+3=5 , 3+5=8 , 5+8=13 , 8+13=21 , 13+21=34 , 21+34=55 , 34+55=89 , 55+89=144
    //So the fibonacci series is 0,1,1,2,3,5,8,13,21,34,55,89,144....
int n,b,a,next;
cout<<"Enter a number : ";
cin>>n;

if(n==0 || n==1)
 cout<<"The enterd number is fibonacci";
 
 else{
     a=0;
     b=1;
     next =a+b;
     while(next<n)
        {
            a=b;
            b=next;
            next=a+b;
        }
        if(next==n)
        cout<<"The enterd number is fibonacci.";
        else
        cout<<"The enterd number is not fibonacci.";
        
 }
 return 0; //retun 0 to the operating   
}