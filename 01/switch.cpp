/*
A program that converts ASCII number to character and vice versa.
The program sould display the follwing menu:
1.Convert ASCII to Character
2.Convert Character to ASCII number
*/
#include<iostream>       // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
int main ()               // main function from where execution starts
{

    int number,option;
    char character;
    cout<<"1.Convert ASCII value to Character"<<endl;   //dislay on screen
    cout<<"2.Convert Character to ASCII number"<<endl;  //dislay on screen
    cout<<"Enter your choice : ";
    cin>>option;                                       //input 

    switch(option)  //switch statement to execute only one statement of your choice
    {
    case 1:
            cout<<"Enter a number : ";
            cin>>number;
            cout<<"The charcter value of"<<number<<"  ASCII code is :"<<char(number);
            break;
     case 2:
     cout<<"Enter a character : ";
     cin>>character;
     cout<<"The ASCII value of"<<character<<"   is :"<<int(character);
    break; 
    
    default:
    cout<<"Invalid Option Entered..........";
    break;
    }
    return 0; // return 0 to the opearating system
}