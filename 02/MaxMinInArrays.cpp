// A program that inputs array and displays maimum and minimum number and dispaly it in reverse order

#include<iostream>    //include the iostream library(a preprocessor directive)
using namespace std;  //use standard namespace
int main()            //main function from where execution start
{
int arr[10]; int max;
int min;
max=arr[0];             //assign value of arr[0] to max
min=arr[0];             //assign value of arr[0]to min

for(int i=0;i<5;i++) {
	cout<<"Enter number in array at "<<i<<" index = ";
	cin>>arr[i];
	if (arr[i]>max)
	 max=arr[i];
	 if(min>arr[i])
	   min=arr[i];
}
cout<<"Max number is : "<<max<<endl;
cout<<"Min number is : "<<min<<endl;


cout<<"In reverse order \n";

for (int i=4;i>=0;i--) {
	cout<<arr[i]<<"\t";
}
  return 0; //retun 0 to operating system
	
}