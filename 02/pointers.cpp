// program 1

#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
int main ()               // main function from where execution starts
{
	int *ptr;
	int a;
	ptr=&a;
	cout<<"The address of  value stored is : "<<ptr;
   return 0; //return 0 to operating system
}



// program 2

#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
int main ()               // main function from where execution starts
{
	int *ptr1,*ptr2;
	int a;
	int sum;
	int b;
	
	
	cout<<"Enter values of a and b :";
	cin>>a>>b;
	ptr1 = &a;
	ptr2 = &b;
	sum = *ptr1 + *ptr2;
	
	cout<<"The sum of  values stored is : " << sum;
   return 0; //return 0 to operating system
}





// program 3

#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
int main ()               // main function from where execution starts
{
	int marks[5];
	int *ptr;
	cout<<"Enter five marks : ";
	for(int i=0;i<5;i++) 
		cin>>marks[i];
		
		ptr=marks;
		cout<<"You entered the following values :";\
		for(int i=0;i<5;i++)
		cout <<*ptr++<<" ";
		


   return 0; //return 0 to operating system
}


// program 4
#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
int main ()               // main function from where execution starts
{
	int marks[5];
	int*ptr;
	cout<<"Enter an array of five marks :";
	for(int i=0;i<5;i++) {
	
	cin>>marks[i];	
}
ptr=&marks[4];
for(int i=0;i<5;i++)
cout<<*ptr--<<endl;

   return 0; //return 0 to operating system
}
