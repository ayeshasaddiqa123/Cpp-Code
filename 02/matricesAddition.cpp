// A program that inputs two matrices of two dimensional array of same order and sum it and and then display it on matrix form.

#include<iostream>   //include the iostream library(a preprocessor directive)
#include<iomanip>    //include the iomanip library(a preprocessor directive)
using namespace std;  //use standard namespace
int main()            //main function from where execution start
{
	// variables declaration
	int r1,r2,c1,c2;
	int a[20][20],b[20][20],c[20][20];

	
	
	// Prompt from user the order of matrix
	
	cout<<"Enter order of first matrix : ";
	cin>>r1>>c1;
	cout<<"Enter order of second matrix : ";
	cin>>r2>>c2;
	
	
		// exit if number of rows and columns are not same
	
	if(r1!=r2 || c1!=c2)
	{
		cout<<"Sum of matrices not possible .....";
		exit(0);
	}
	
	
	// Input first matrix
	
	for(int i=0;i<r1;i++) 
     for(int j=0;j<c1;j++) {
     	cout<<"Enter "<<i<<" x "<<j<<" element of first matrix : ";
     	cin>>a[i][j];
		  }

     // Input second matrix

      	for(int i=0;i<r2;i++) 
    	 for(int j=0;j<c2;j++) {
     		cout<<"Enter "<<i<<" x "<<j<<" element of second matrix : ";
     		cin>>b[i][j];
}
     cout<<endl;
     
      // display first array in matrix
	for(int i=0;i<r1;i++) 
	 {
	     cout<<endl;
     for(int j=0;j<c1;j++) {
     	cout<< setw(9)<<a[i][j];
	 }
}
	 cout<<"\t"<<"+"<<endl;
	
	// display second array in matrix
		for(int i=0;i<r1;i++) 
	 {
	     cout<<endl;
     for(int j=0;j<c1;j++) {
     	cout<< setw(9)<<b[i][j];
	 }
}
	 cout<<endl<<"\t\t\t="<<endl;
	 
	 // dispaly sum
	 
	 for(int i=0;i<r1;i++) 
	 {
	     cout<<endl;
     for(int j=0;j<c1;j++) {
     	c[i][j]=a[i][j]+b[i][j];
     	  cout<< setw(9)<<c[i][j];
	 }
}
	return 0; //return 0 to operating system
}