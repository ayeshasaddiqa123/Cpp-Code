// Aprogram that inputs values in array and then dispalys there sum and average on screem


#include<iostream>    //include the iostream library(a preprocessor directive)
using namespace std;  //use standard namespace
int main()            //main function from where execution start
{
    int arr[5];           //declare array of type integer
    float avg;
	int sum=0;
    for(int i=0;i<5;i++)
	{
		cout<<"Enter a number : ";     
		cin>>arr[i];
		sum=sum+arr[i];
		
	}
	cout<<"Elements stored in array : "<<endl;
	for(int i=0;i<5;i++)
	{
		
		cout<<arr[i]<<"\t";
	}
	
	cout<<"Sum of array elements are :"<<sum<<endl;     //displays sum
	cout<<"avg of array elements are :"<<sum/5.0<<endl;  //dispalys average
	
	return 0;//return 0 to operating system
}