// A prograam uses four arrays and each consisting of five elements.They store sums , squares and cubes of indexes.

#include<iostream>    //include the iostream library(a preprocessor directive)
using namespace std;  //use standard namespace
int main()            //main function from where execution  
{
	const  int size=5;
	int i;
	int total=0;
	int numbers[size],squares[size],cubes[size],sums[size];
	
	for(int i=0;i<size;i++) {
		numbers[i]=i;
		squares[i]=i*i;
		cubes[i]=i*i*i;
		sums[i]=numbers[i]+squares[i]+cubes[i];
}
    
		cout<<"Numbers"<<"\t";
		for(int i=0;i<size;i++) 
			cout<<numbers[i]<<"\t";
				cout<<endl;
				
		cout<<"squares"<<"\t";
		for(int i=0;i<size;i++) 
			cout<<squares[i]<<"\t";
				cout<<endl;
				
		cout<<"cubes"<<"\t";
		for(int i=0;i<size;i++) 
			cout<<cubes[i]<<"\t";
				cout<<endl;
				
		cout<<"sums"<<"\t";
		for(int i=0;i<size;i++) 
			{
			cout<<sums[i]<<"\t";
			total=total+sums[i];
		}
				cout<<endl;
				
		cout<<"Grand Total : "<<total;
		
		return 0; //return 0 to operating system
				

}