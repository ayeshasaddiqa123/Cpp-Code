// A program that inputs 4x4 matrix and displays the sum of its diagonal elements.

#include<iostream>    //include the iostream library (a preprocessor directive)
using namespace std ;   //use standard namespace
int main()             // built-in function (main) from where execution starts
{
	// array declaration
	int arr[4][4];
	int sum=0;
	
	// input values in 4x4 matrix
	for(int i=0;i<4;i++) 
		for(int j=0;j<4;j++) {
			cout<<"Enter number in "<<i<<"x"<<j<<" element of array : ";
			cin>>arr[i][j];
					}
         cout<<endl;
		 
		 
		 // finding sum	
			for(int i=0;i<4;i++) 
			{
				for(int j=0;j<4;j++)
				{
					cout<<arr[i][j]<<"\t";
					if (i==j)
						sum=sum+arr[i][j];
				}
		
				cout<<endl;
			}
	
	
	//display result
	cout<<"The sum of diagonal elements is : "<<sum;
		

}