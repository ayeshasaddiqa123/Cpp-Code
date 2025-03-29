//Aprogram that inputs three digits and make possible combinations of them.

#include<iostream>    // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
int main ()               // main function from where execution starts
    {
             int a,b,c;
        cout<<"Enter three  numbers to make possible combinations : ";
        cin>>a>>b>>c;

        if(a!=b && b!=c && c!=a)
            
             {
                cout<<a<<b<<c<<"\t";
                cout<<a<<c<<b<<"\t";
                cout<<c<<b<<a<<"\t";
                cout<<b<<a<<c<<"\t";
                cout<<c<<a<<b<<"\t";
             }
        else 
        {
            if(a==b&&b==c&&c==a)
              {
                cout<<a<<b<<c;
              }
          else
          {
            if(a==b)
             {
                cout<<a<<b<<c<<"\t";
                cout<<a<<c<<b<<"\t";
                cout<<c<<b<<a<<"\t";
             }
               else
             {
                if(a==c)
                 {
                     cout<<a<<b<<c<<"\t";
                     cout<<a<<c<<b<<"\t";
                     cout<<b<<a<<c<<"\t";
                 }
                 else
                        {
                             cout<<a<<b<<c<<"\t";
                             cout<<b<<a<<c<<"\t";
                             cout<<b<<c<<a<<"\t";

                         }    
                     }     
                  }          
             }

       return 0;  //return 0 to the operating system


    }
    
