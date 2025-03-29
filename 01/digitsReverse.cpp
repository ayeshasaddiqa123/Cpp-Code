
/*Write a program that inputs a six digit number and displays it in reverse order as 458762 to 267854.*/
#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
int main ()               // main function from where execution starts
{
    int n;
    cout << "Enter six digits number="; //display message
    cin>>n;                              //input
    int a=n/100000;
        n=n%100000;

    int b=n/10000;
        n=n%10000;

    int c=n/1000;
        n=n%1000;

    int g=n/100;
	    n=n%100;
        
	int h=n/10;
	    n=n%10;	 
    cout<<"In reverse order= "<<n<<h<<g<<c<<b<<a;
	return 0;
}