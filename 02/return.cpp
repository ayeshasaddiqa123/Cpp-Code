// program 1

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



// program 2
#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
float max( float arr[5], int n);
int main ()               // main function from where execution starts
{
	float arr[5],n;
	for(int i=0;i<=4;i++) {
		cout<<"Enter numbers in array :";
		cin>>arr[i];
}
cout<<"The maximum number in array : "<< max(arr,3);
	
	
   return 0; //return 0 to operating system
}
float max( float arr[5], int n)
{
	float max=arr[0];
	for(int i=0;i<n;i++) 
		if(arr[i]>max)
		max=arr[i];
		return max;


}



//program 3
#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
int even( int arr[5]);
int main ()               // main function from where execution starts
{
	int arr[5],n;
	for(int i=0;i<=4;i++) {
		cout<<"Enter numbers in array :";
		cin>>arr[i];
}
cout<<"The even numbers in array are: "<< even(arr);
	
	
   return 0; //return 0 to operating system
}
int even( int arr[5])
{
	
         int n=0;
	for(int i=0;i<5;i++) 
		if(arr[i] % 2==0)
	n++;
		return n;


}




// program 4

#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
int max( int arr[3][2]);
int main ()               // main function from where execution starts
{
	int arr[3][2],n;
	for(int i=0;i<3;i++)
		for(int j=0;j<2;j++)
	 {
	
		cout<<"Enter numbers in array :";
		cin>>arr[i][j];
}
cout<<"The max number in array is: "<< max(arr);
	
	
   return 0; //return 0 to operating system
}
int max( int arr[3][2])
{
	
         int m=arr[0][0];
         	for(int i=0;i<3;i++)
		for(int j=0;j<2;j++)
	 
		if(arr[i][j]>m)
		m=arr[i][j];

		return m;


}
