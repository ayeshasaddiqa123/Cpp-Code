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
 
 



// program 6
#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
int fact (int);
int main ()               // main function from where execution starts
{
	int n;
	cout<<"Enter a number to find factorial :";
	cin>>n;
	int c=fact(n);
	cout<<"Factorial of number is : "<<c;
	
	
   return 0; //return 0 to operating system
}
int fact (int a)
{
	if (a==0)
	return 1;
	else
	return a* fact(a-1);
}


// program 7
#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
struct student
{
	int rollno;
	char grade;
	
};
void show(student s);

int main ()               // main function from where execution starts


{
student s;

cout<<"Enter roll no and grade  :";
cin>>s.rollno>>s.grade;

show (s);	
	
	
   return 0; //return 0 to operating system
}
void show( student s)
{
	cout<<"Rol nbumber is :"<<s.rollno;
	cout<<"Grade is :"<<s.grade;
}





// program 8

#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
struct time
{
	int hours;
	int minutes;
	int seconds;
	
};
void show(time a,time b);

int main ()               // main function from where execution starts


{
time arr[2];
for(int i=0;i<2;i++) {
	
cout<<"Enter time in hours ,minutes and seconds format   :";
cin>>arr[i].hours >>arr[i].minutes>>arr[i].seconds;

}
show (arr[0],arr[1]);	
	
	
   return 0; //return 0 to operating system
}
void show( time a,time b)

{
	int h ,sec, min,x;
	
	sec=a.seconds+b.seconds;
	x=sec/60;
	sec%=60;
	
	min=a.minutes+b.minutes+x;
	h=a.hours+b.hours+min/60;
	min%60;
	
	cout<<"total time is :"<<h<<":"<<min<<":"<<sec;	
  
}