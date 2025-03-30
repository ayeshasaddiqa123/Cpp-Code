//A program that inputs number of month and it displays the days in months.
#include<iostream>    // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
int main ()               // main function from where execution starts
        {
            int month;
            cout<<"Enter number of month of which days are required : ";
            cin>>month;

                    if (month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12  )
                                cout<<"31 Days";
                 else 
                            if(month==4 || month==6 || month==9 || month==11 )
                                cout<<"30 Days";
                     else
                                 cout<<"28 or 29 Days";

                  return 0;   //return 0 to the operating system 
        }

