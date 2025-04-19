// Aprogram that inputs values in array and then disspalys these values on screen

#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	    cout<<"Store values in array . "<<endl;
	
	for(int i=0;i<5;i++)
	{
		cout<<"Enter a number : ";
		cin>>arr[i];
	}
	
	    cout<<"The values stored in arrays are :- ";
	
	for(int i=0;i<5;i++)
	{
		
		cout<<arr[i]<<endl;
	}
	
	
}