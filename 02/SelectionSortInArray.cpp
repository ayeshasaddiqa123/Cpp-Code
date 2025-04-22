// Aprogram that inputs array of five numbers and sort them using selection sort.

#include<iostream>       // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
int main ()               // main function from where execution starts
{
    int arr[5];    //array declaration of int data type
	int min;      //declare varaiable min
	int temp;      
	
	// input array
	for(int i=0;i<4;i++) 
		{
			cout<<"Enter number in array : ";
			cin>>arr[i];	
		}
		
		// sorting process

     for(int i=0;i<4;i++) 
	 {
     	min=i;
      for(int j=i+1;j<5;j++)
		  {
     		if( arr[j]<arr[min])
     		  min=j;
     		if(min!=i)
				 {
		 			temp=arr[i];
		 			arr[i]=arr[min];
		 			arr[min]=temp;
			 	}	  
		  }
	  }
	  
	  // output
	  
	  cout<<"\n The sorted array is : \n";
	  for(int i=0;i<5;i++) 
	 	 cout<<arr[i]<<"\t";
	  
	  return 0; //return 0 to operating system
	    
	
}