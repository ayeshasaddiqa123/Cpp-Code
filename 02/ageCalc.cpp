// A program that inputs age of differnt persons and counts the number of persons in the age group 50 and 60.
#include<iostream>    //include the iostream library(a preprocessor directive)
using namespace std;  //use standard namespace
int main()            //main function from where execution start
{
	int n;
	int count=0;
	int age[1000];        //declare array
	cout<<"Enter a number to enter range of desired numbers of persons age : ";
	cin>>n;
	
	cout <<"Enter ages of "<<n<<" persons : ";
	
	for(int i=0;i<n;i++) {
		cin>>age[i];
		   if(age[i]>50 && age[i]<60)
		     count++;
}
	
	cout<<"Age of persons between 50 and 60 range is : "<<count;
	
	return 0; //retun 0 to operating system
}