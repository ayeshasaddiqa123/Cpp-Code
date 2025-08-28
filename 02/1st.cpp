#include<iostream>    //include the iostream library (a preprocessor directive)
using namespace std ;   //use standard namespace
int main()             // built-in function (main) from where execution starts
{
	//   output in square form
	
		int a=1,b=5;
	cout<<"----------\n"<<"a\tb\n"<<"----------\n";
	
	while(a<=5 && b>=1)
	{
		cout<<a<<"\t"<<b<<"\n";
		a++;
		b--;
	}
	 cout<<"----------\n";
	 cout<<endl<<"Now the obove shape with some differences given below :-\n";
	 
	 // another square
	 	int num=1;
	    int sum=0;
	 
	 	cout<<"------------\n"<<"num\tsum\n"<<"------------\n";
	 
    while(num<=5)
    {
    	sum=sum+num;
    	cout<<num<<"\t"<<sum<<"\n";
    	num++;
	}

cout<<"------------";
	
	 return 0; //return 0 to operating system
	 
}





// program 5

#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
int main ()               // main function from where execution starts
{
	for(int i=0;i<6;i++) {  // number of rows
		for(int s=0;s<i;s++){   // give spaces
		
			cout<<" ";}
			for(int j=1;j<=6-i;j++){  // number of columns
			
			cout<<j;}

cout<<endl;
}


   return 0; //return 0 to operating system
}

#include<iostream>    //include the iostream library (a preprocessor directive)
using namespace std ;   //use standard namespace
int main()             // built-in function (main) from where execution starts
{
	char  op;
	int counta=0,countb=0,countc=0,countd=0;
	
	// question asked by 20 times
	
	for(int i=0;i<20;i++)
	{
	cout<<"What is your name ?\n";
	cout<<"a. Ayesha\n"<<"b. Usman\n"<<"c. Irfan\n"<<"d. Zeeshan\n";
	cout<<"Enter choice : ";
	cin>>op;
	
	switch(op)
	{
		case 'a':
		  counta++;
		  break;
		 case 'b':
		  countb++;
		  break;
		 case 'c':
		  countc++;
		  break;
		 case 'd':
		  countd++;
		  break;
		  
		  default:
		  	cout<<"Invalid Input";
		  
		 
	}
    } 
    
    // Each time count options choosed
    
    cout<<"Option a choosed "<<counta<<" times."<<endl;
    cout<<"Option b choosed "<<countb<<" times."<<endl;
    cout<<"Option c choosed "<<countc<<" times."<<endl;
    cout<<"Option d choosed "<<countd<<" times."<<endl;
	
}
