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