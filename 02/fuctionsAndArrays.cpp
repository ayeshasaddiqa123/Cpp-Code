
// Here are some problems related functions and arrrays that rise your concepts to pro level.

// 1. Write a function that takes an array of integers  and inputs values in main function and then passes array as a parameter to function that  show inverted array.

#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
void array(int []);       // function declaration
int main ()               // main function from where execution starts
{
	
	// array declaration
	int arr[5];
	
	// Enter numbers in array
	cout << "Enter  five integers in array :"<<endl;
	for(int i=0; i<5 ;i++) {
		cin >> arr[i];		
}
     // fuction call
     array(arr);
	
   return 0; //return 0 to operating system
   
}
     // function definition
     
     void array(int a[])
     {
	 cout<<"The numbers stored in array  in reverse order are : "<<endl;
     for(int i=4;i>=0;i--) {
     	cout<<a[i]<<endl;
}
}
// Output:
/*
Enter  five integers in array :
1
2
3
4
5
The numbers stored in array  in reverse order are :
5
4
3
2
1
*/







//  1. Write a function that takes an array of integers  and inputs values in main function and then passes array as a parameter to function then show even numbers in array.

#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
void array(int []);       // function declaration
int main ()               // main function from where execution starts
{
	
	// array declaration
	int arr[5];
	
	// Enter numbers in array
	cout << "Enter  five integers in array :"<<endl;
	for(int i=0; i<5 ;i++) {
		cin >> arr[i];		
}
     // fuction call
     array(arr);
	
   return 0; //return 0 to operating system
   
}
     // function definition
     
     void array(int a[])
     {
     	int count = 0;
	 cout << "The even numbers stored in array   are : "<<endl;
     for(int i=4;i>=0;i--) {
     	 if ( a[i]%2 == 0 )
     	 count++;
}
     cout<<count;
}
/*
Enter  five integers in array :
1
2
3
4
5
The even numbers stored in array   are :
2
*/
     




//  3. Write a function that takes an array of integers  and inputs values in main function and then passes  values of array one by one  to function then show actual number and its square .

#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
void array(int n);       // function declaration
int main ()               // main function from where execution starts
{
	
	// array declaration
	int arr[5];
	
	// Enter numbers in array
	cout << "Enter  five integers in array :"<<endl;
	for(int i=0; i<5 ;i++) {
		cin >> arr[i];		
}
       for(int i=0;i<=4;i++)
    	   array( arr[i]);					// fuction call
    
	 
	
   return 0; //return 0 to operating system
   
}
     
// function definition
     
     void array(int a)
     {
     	
	 cout << "The  numbers stored in array  and their squares are : "<<a<<"\t"<<a*a<< endl;
     
}
     /*
Enter  five integers in array :
1
2
3
4
5
The  numbers stored in array  and their squares are : 1	1
The  numbers stored in array  and their squares are : 2	4
The  numbers stored in array  and their squares are : 3	9
The  numbers stored in array  and their squares are : 4	16
The  numbers stored in array  and their squares are : 5	25

     */



     


// Write a program that passes 2-d array to fuction then function returns maximum value of array.

#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
int array(int arr[3][2]);       // function declaration
int main ()               // main function from where execution starts
{
	
	// array declaration
	int arr[3][2];
	
	// Enter numbers in array
	cout << "Enter  integers in 2-d array :"<<endl;
	for(int i=0; i<3 ;i++)
	for(int j=0 ; j<2; j++) 

 {
		cin >> arr[i][j];		
}
      
    	  int m= array( arr);					// fuction call
      cout<<"The max number is :"<<m;
	 
	
   return 0; //return 0 to operating system
   
}
     // function definition
     
     int array(int arr[3][2])
     {
     	
     	//arr[0][0]=0;
     	int m=arr[0][0];
     	
     	for(int i=0; i<3 ;i++)
	for(int j=0 ; j<2; j++) 
     	if( arr[i][j]>m)
     	m=arr[i][j];
     	return m;
     	
}
     
/*
Enter  integers in 2-d array :
1
2
3
4
5
6
The max number is :6
*/
     


