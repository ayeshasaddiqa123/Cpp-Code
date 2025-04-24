#include<iostream>    //include the iostream library (a preprocessor directive)
using namespace std ;   //use standard namespace
int main()             // built-in function (main) from where execution starts
{
	//   output in square form
	
		int a=1,b=5;
	cout<<"----------\n"<<"a\tb\n"<<"----------\n";
	
	while(a<=5 && b>=1)
	{
		cout<<a<<"\t"<<b<<"\n";
		a++;
		b--;
	}
	 cout<<"----------\n";
	 cout<<endl<<"Now the obove shape with some differences given below :-\n";
	 
	 // another square
	 	int num=1;
	    int sum=0;
	 
	 	cout<<"------------\n"<<"num\tsum\n"<<"------------\n";
	 
    while(num<=5)
    {
    	sum=sum+num;
    	cout<<num<<"\t"<<sum<<"\n";
    	num++;
	}

cout<<"------------";
	
	 return 0; //return 0 to operating system
	 
}