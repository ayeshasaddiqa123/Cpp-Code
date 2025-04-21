//Write a program that inputs value from user and search the number in array.

#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
int main ()               // main function from where execution starts
{
	int size;
	int n;
	int loc=-1;
	int arr[size];
	cout<<"Enter size of array : ";
	cin>>size;
	
	
	//input values in array
	for(int i=0;i<size;i++) {
		cout<<"Enter a number in array : ";
		cin>>arr[i];
}

    // to search a number in array
     cout<<"Enter any desired number to search in array : ";
     cin>>n;
     for(int i=0;i<size;i++)
	  {
     		if (arr[i]==n)
     		loc=i;
	}
	
	// showing results
	if(loc==-1)
		cout<<"Value not found .....";
	else
		cout<<"Value found at index "<<loc;
     
     
return 0; //return 0 to operating system
	
}