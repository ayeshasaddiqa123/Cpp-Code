//A PROGRAM THAT CONVERTS TEMPERATURE FROM CELSIUS TO FAHRENHEIT AND VICE VERSA

#include<iostream>  // include the iostream library (a preprocessor directive)
#include<iomanip>    // include the iomanip library (a preprocessor directive)   
using namespace std;     // use the stanadard namespace
int main ()               // main function from where execution starts
{
   
float temp,temp2;   // declare two variables temp and temp2 of type float
int choice;        // declare a variable choice of type integer
cout<<"Enter 1 to convert temperature from Farenhiet to Celcius."<<endl;
cout<<"Enter 2 to convert temperature from Celcius to Farenhiet."<<endl;    
cout<<"Enter your choice :";
cin>>choice;

switch(choice)   // switch statement to select the case according to the choice
{
    case 1:     // case 1 to convert temperature from Farenhiet to Celcius
    cout<<"Enter temperature in Farenhient :";
    cin>>temp;
    temp2=(temp-32)*5.0/9.0;
    cout<<setprecision(3)<<temp<<" Farenhiet  ="<<temp2<<" Celcius";
    break;

    case 2:  // case 2 to convert temperature from Celcius to Farenhiet
    cout<<"Enter temperature in Celcius :";
    cin>>temp;
    temp2=(temp*9.0/5.0)+32;
    cout<<setprecision(3)<<temp<<" Celcius  ="<<temp2<<" Farenhiet";
    break;
}
return 0; // return 0 to the opearating system
}   
    

 
