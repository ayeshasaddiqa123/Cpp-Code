#include<iostream>    //include the iostream library (a preprocessor directive)
using namespace std ;   //use standard namespace
int main()             // built-in function (main) from where execution starts
{
	// variables declaration

	int n;int min;int num;int sum=0;
	int max;

    //prompt the user
	cout<<"Enter total numbers you want to enter : ";
	cin>>n;
	cout<<"Enter number : ";
	cin>>num;
	max=num;
	min=num;
	
	// find min and max number
	for(int i=1 ;i<n;i++)
	{
		cout<<"Enter number : ";
		cin>>num;
		sum=sum+num;
		if(num>max)
		 max=num;
		if(num<min)
		 min=num;
		
	}
	
	//display result
float	avg=sum/n;
cout<<"Maximum number is : "<<max<<endl;
cout<<"Minimum number is : "<<min<<endl;
cout<<"Average is : "<<avg;
}