
// Use of local variables in functions they can be accessed only in the function they are declared
// and not outside of it .A simple problem related to it is given below


#include<iostream>     //  include the iostream library (a preprocessor directive)
using namespace std;     //  use the stanadard namespace
void  fun (int a);			//  function declaration
int main ()               //  main function from where execution starts
{
	for(int i=1;i<=5;i++) {
		
			fun(i);   // function call
}

	
   return 0; // return 0 to operating system
}
 // function definition
 
  void fun (int  x)
 {
 
 int n = 0;
 n++;
 cout << "The value of n is : " << n << endl;
 }

// The above code is a simple C++ program that demonstrates the use of local variables in functions.
// The output of the above code is :
/* The value of n is : 1
 The value of n is : 1
 The value of n is : 1                
 The value of n is : 1
 The value of n is : 1*/
 
 


// GLOBAL VARIABLES
// Global variables are declared outside of all functions and can be accessed by any function in the program.
// They are declared at the top of the program, before the main function.

//HERE IS A SIMPLE EXAMPLE OF GLOBAL VARIABLE

#include<iostream>     //  include the iostream library (a preprocessor directive)
using namespace std;     //  use the stanadard namespace
void  fun (int a);			//  function declaration
int g;                 // global variable
int main ()               //  main function from where execution starts
{
        cout<<"Enter the value : ";
        cin>>g;
        cout<<" the value of vriable before function call  : "<< g << endl;
        fun ( g) ;   // function call
        cout<<" the value of vriable before function call  : " << g;
			
	
   return 0; // return 0 to operating system
}
 // function definition
 
  void fun(int x)
 {
 g++;
 
 }
 
// The above code is a simple C++ program that demonstrates the use of global variables in functions.
// The output of the above code is :
/*
Enter the value : 5
 the value of vriable before function call  : 5
 the value of vriable before function call  : 6
*/





//static variables in function 
// Static variables are declared inside a function and retain their value between function calls.
// They are initialized only once, and their value persists for the lifetime of the program.
// They are declared using the static keyword.

//HERE IS A SIMPLE EXAMPLE OF STATIC VARIABLE
#include<iostream>     //  include the iostream library (a preprocessor directive)
using namespace std;     //  use the stanadard namespace
void  fun (int a);			//  function declaration
int g;                 // global variable
int main ()               //  main function from where execution starts
{
	for(int i=1;i<=5;i++) {
		
			fun (i) ;  // function call
}

	
   return 0; // return 0 to operating system
}
 // function definition
 
  void fun(int x)
 {
 static  int n=0;
 n++;

 cout << "The value of n is : " << x<< endl;
 }
 
// The above code is a simple C++ program that demonstrates the use of static variables in functions.
// The output of the above code is :
/*
The value of n is : 1       
The value of n is : 2
The value of n is : 3
The value of n is : 4
The value of n is : 5
*/



// register var
// Register variables are stored in the CPU registers instead of RAM, which makes them faster to access.
// They are declared using the register keyword.

