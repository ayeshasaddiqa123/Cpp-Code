// program 1

#include<iostream> // include iostream library (apreprocessor directive)
using namespace std; //using standard namespace
void show(void);  //function declaration
int main() //main function from where execution starts
{
	show();//function call
		return 0 ; //return 0 to operating system
}
//function definition
void show()
{
	cout<<"Programing makes life interesting .";
}



//program 2

#include<iostream>// include iostream library (apreprocessor directive)
using namespace std;//using standard namespace
int fun(int a,int b);//function declaration
int main()//main function from where execution starts
{
	int a,b;
	cout<<"Enter two numbers : ";
	cin >> a >> b;
	
	fun (a,b); //function call
	return 0 ; //return 0 to operating system
}
//function definition
int fun(int a,int b)
{
	if(a>b)
	cout<<a<<" is maximum.";
	else
	cout<<b<<" is maximum.";
}




//PROGRAM 3
#include<iostream> // include iostream library (apreprocessor directive)
using namespace std; //using standard namespace
void table(int b);  //function declaration
int main() //main function from where execution starts
{
	int a;
	cout<<"Enter a number :";
	cin>>a;
	table(a);//function call
		return 0 ; //return 0 to operating system
}
//function definition
void table( int n)
 
{
  for(int i=1; i<=10;i++ )
         cout<<n<<"*"<<i<<"="<<n*i<<endl;
}


 
 //PROGRAM 4
 #include<iostream> // include iostream library (apreprocessor directive)
using namespace std; //using standard namespace
void fact(int b);  //function declaration
int main() //main function from where execution starts
{
	int a;
	cout<<"Enter a number :";
	cin>>a;
	fact(a);//function call
		return 0 ; //return 0 to operating system
}
//function definition
void fact( int n)
 
{
	int fact =1;
	
	
  for(int i=1; i<=n;i++ )
        {
        	fact=fact*i;
		}
        cout<<"factorial of "<<n<<" is "<<fact;
}



 
 //Program 5
 #include<iostream> // include iostream library (a preprocessor directive)
using namespace std; //using standard namespace
void test(int b);  //function declaration
int main() //main function from where execution starts
{
	int a;
	cout<<"Enter a number :";
	cin>>a;
	test(a);//function call
		return 0 ; //return 0 to operating system
}
//function definition
void test( int n)
 
{
   int c=0;
   for(int i=2;i<=n/2;i++) {
   	if(n%i==0)
   	c=1;
	   }
	   if( c==0 && n%2==0 )
	   cout<<n<<" is a prime  even number.";
	   else if (c==0 && n%2!=0)
	    cout<<n<<" is a prime  odd number.";
	   else if (c!=0 && n%2==0)
	    cout<<n<<" is only even not prime number.";
	   else if (c==0 && n%2!=0)
	   cout<<n<<" is only odd not prime number.";
	   else 
	      cout<<n<<"  not prime number.";
	    
}
 
 