// A program tat prints  all odd prime numbers and composite numbers between 11 and 25.
#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
int main ()               // main function from where execution starts
{
    int p=1;//decalre a variable
    cout<<"The odd prime and composite numbers between 11 and 25 are : "<<endl;     //prompt the user for input
    for(int i=11;i<=25;i=i+2)
    {
        p=1;    //initialize p to 1 for each odd number
        for(int c=2;c<=i/2;c++)
        
            if(i%c==0)
            {
                p=0;
                break;           //EXIT FROM LOOP BODY
            }

            if(p==1)
             
                cout<<i<<" is a prime odd number."<<endl;
             
            else
             
                cout<<i<<" is a composite odd number."<<endl;
             
        
    }
              return 0; //return 0 to operating system
}



// program 2

#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
int main ()               // main function from where execution starts
{
	for( int i=1 ; i<=6 ; i++) {
		for(int j=i ; j>=1 ; j--) {
			cout<<"*";
}

		cout<<endl;
}

   return 0; //return 0 to operating system
}



//program 3


#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
void prime(int);
int main ()               // main function from where execution starts
{
	int n;
	cout<<"Enter a number :";
	cin>>n;
	prime(n);
	
   return 0; //return 0 to operating system
}
void prime(int a)
{
	int p=1;
	for(int c=2;c<=a/2;c++) 
	
	
		if(a%c==0)
		{
		   p=0;	
		}
if (a%2==0 && p==0)
cout<<a<<"is even but not prime.";

else if (a%2!=0 && p==0)
cout<<a<<"is odd but not prime.";


else if (a%2!=0 && p==1)
cout<<a<<"is odd but  prime.";


else if (a%2==0 && p==1)
cout<<a<<"is even but  prime.";

}