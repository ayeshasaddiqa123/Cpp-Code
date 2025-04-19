// Aprogram that inputs values in array and then disspalys these values on screen

#include<iostream>    //include the iostream library(a preprocessor directive)
using namespace std;  //use standard namespace
int main()            //main function from where execution start
{
	int arr[5];                 //declare variable arr
	    cout<<"Store values in array . "<<endl;
	
	for(int i=0;i<5;i++)
	{
		cout<<"Enter a number : ";       //prompt the user for input
		cin>>arr[i];                    //cin object to input values
	}
	
	    cout<<"The values stored in arrays are :- ";
	
	for(int i=0;i<5;i++)
	{
		
		cout<<arr[i]<<endl;    // display values on screen
	}
	
	return 0; //return 0 to  the operating system
}