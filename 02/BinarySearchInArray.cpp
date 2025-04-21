//A program that initializes a sorted array and search any number in it using binary search.


#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
int main ()               // main function from where execution starts
{
	
	// varaiables declaration in ram
	int arr[10]={10,20,34,56,77,78,89,90,95,97};
	int loc=-1;
	int start=0;
	int end=9;
	int n,mid;
	
	// Prompt from user which number has to search
	cout<<"Enter a number to search  in array : ";
	cin>>n;
	
	// binary search
	while(start<=end) 
	{
		mid=(start+end)/2;
		 if (arr[mid]==n)
		  	{
		  		loc=mid;
		  		break;
		  	}
		
		else if(n<arr[mid])
		  end=mid-1;
		  
		else
		  start=mid+1;        
		  		
    }
    

    // final result after exit from loop body
	if(loc==-1)
			cout<<"Desired number is not found....";
			
	else
			cout<<n<<" is found at index "<<loc<<".";
	
	return 0;   //return 0 to the operating system
	
}