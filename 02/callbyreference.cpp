#include <iostream>    // include iostream library a preprocessor directive
using namespace std;  // using standard namespace 
void swap(int &,int &);  //function declaration
int main ()           // main function from where execution starts 
{
	
	//  actual variables declaration 
	int a,b;
	cout<<"Enter two integers : ";   // input two numbers from users
	cin>>a>>b;
	
	cout<<"Values before swaping : " <<endl;
	cout<< "a="<< a <<endl;
	cout<< "b="<< b << endl;
	 
	swap (a,b); // fuction call
	
	cout<<"Values after swaping : " << endl ;
	cout<< "a="<< a<<endl;
	cout<< "b="<< b;
	
	return 0; //return 0 to operating system
}

  void  swap (int &x,int&y)   // fuction definition
    {
    	// swap values
    	int t;
      t=x;
      x=y;
      y=t;
    	
	}
