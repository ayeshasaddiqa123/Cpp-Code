// A program that inputs array of five numbers and sort them using bubble sort.


#include<iostream>    //include the iostream library(a preprocessor directive)
using namespace std;  //use standard namespace
int main()            //main function from where execution start
{
	// variables declaration
	int arr[5];
	int temp;
	
	// inputs array
	for(int i=0;i<5;i++) 
		{
			cout<<"Enter number in array : ";
			cin>>arr[i];	
		}
		

        //display original values
		cout<<"The original values in array : ";
		for(int i=0;i<5;i++) 
			cout<<arr[i]<<" ";	
		
		
		// sorting process
			for(int i=0;i<5;i++) 
			for(int  j=0;j<4;j++) 
				if(arr[j]>arr[j+1])
				 {
				 	temp=arr[j];
				 	arr[j]=arr[j+1];
				 	arr[j+1]=temp;
				 }
				
			// display sorted array
				cout<<" \n The Sorted array is : \n";
		for(int i=0;i<5;i++)
	 		 cout<<arr[i]<<" ";
	  
	 	 return 0; //return 0 to operating system
		
		 
}