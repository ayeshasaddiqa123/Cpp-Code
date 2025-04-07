//A program that inputs two numbers and it calculates their Least Common multiple.
#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
int main ()               // main function from where execution starts
{
    int a, b;      //decalre two variables
    cout<<"Enter two numbers : ";     //prompt the user for input
    cin>>a>>b;                 //input values of integer type

    int max,lcm;
    if(a>=b)
       max=a;
    else
      max=b;

     do
        {
            if(max%a==0 && max%b==0)
               {
                lcm=max;
                break;           //EXIT FROM LOOP BODY
               }
            else 
                max++;   
        }while(1);

        cout<<"The LCM of "<<a<<" and "<<b<<" is :"<<lcm;
        return 0; //return 0 to operating system


}