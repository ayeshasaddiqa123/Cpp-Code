#include <iostream>    //include the iostream library (a preprocessor directive)
using namespace std ;   //use standard namespace
int gcd(int x,int y) ; // fuction dclaration
int main()             // built-in function (main) from where execution starts
{
	int a, b ,c ;
	cout << "Enter two numbers :" ;
	cin >> a >> b;
	
	
	// function call within output statement

	cout<<"Greatest common divisor of "<<a<<" and "<<b<<" is : "<<gcd(a,b);
	
	return 0; //return 0 to operating system	
}

// function dfinition
int gcd(int x,int y)
{
	int n,gcd;
	if(x<y)
	 n=x;
	else
	 n=y;
	 
	 for(int i=1;i<=n;i++) 
	 	if( x%i==0 && y%i==0 )
	 	gcd=i;
	 	return gcd;

	
}