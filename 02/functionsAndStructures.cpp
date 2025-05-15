
// HERE ARE SOME EXAMPLES OF FUNCTIONS AND STRUCTURES
//Write a program that declares a structure to store marks and grades.It defines structure variable and inputs the values from the user and displays them.

#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
struct test           // structure  declaration
{
	int mark;
	char grade;
};


void show(test p);     // function declaration
int main ()               // main function from where execution starts

{
	test t;
	cout<<"Enter marks : ";
	cin>>t.mark;
	cout<<"Enter grade : ";
	cin>>t.grade;
	
	show (t);  // fuction call
	
   return 0; //return 0 to operating system
   
}

//  function definition
	void show(test p)
	{
	cout<<"Marks are :"<<p.mark<<endl;
	cout<<"Grade is :"<<p.grade<<endl;
    }

    /*
    OUTPUT:
    Enter marks : 90
    Enter grade : A
    Marks are :90
    Grade is :A
    */





    // Write a program that declares a structure to store country name and populationin millions. It defines  two structure variable and inputs the values from the user and displays them.

    #include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
struct Pop          // structure  declaration
{
	char country[50];
	float pop;
};


void show(Pop x,Pop y);     // function declaration
int main ()               // main function from where execution starts

{
	Pop x,y;
	cout<<"Enter names of both countries : ";
	cin>>x.country>>y.country;
	cout<<"Enterpopulation of both countries: ";
	cin>>x.pop>>y.pop;
	
	show (x,y);  // fuction call
	
   return 0; //return 0 to operating system
   
}

//  function definition
void show(Pop x,Pop y)
	{
cout<<" names of both countries : "<<x.country<<"\t"<<y.country<<endl;
	cout<<"population of both countries: "<<x.pop<<"\t"<<y.pop;
	
    }

    /*
    OUTPUT:
    Enter names of both countries : India Pakistan
    Enterpopulation of both countries: 100 50
    names of both countries : India	Pakistan
    population of both countries: 100	50
    */




    // Write a program that declares a structuretime to store time in hours, minutes and seconds. It defines  an array of two structure variable and inputs the values from the user and displays the total time in hh mm ss format.

#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace

struct time          // structure  declaration
{
    int hh;
    int mm;
    int ss;
};
void show(time t[],int n);     // function declaration
int main ()               // main function from where execution starts

{
    time t[2];
    int n=2;
    cout<<"Enter time in hh mm ss format : ";
    for (int i=0;i<n;i++)
    {
        cin>>t[i].hh>>t[i].mm>>t[i].ss;
    }
    
    show (t,n);  // fuction call
    
   return 0; //return 0 to operating system
   
}
//  function definition
void show(time t[],int n)
    {
    int hh=0,mm=0,ss=0;
    for (int i=0;i<n;i++)
    {
        hh+=t[i].hh;
        mm+=t[i].mm;
        ss+=t[i].ss;
    }
    
    mm+=ss/60;  // convert seconds to minutes
    ss=ss%60;   // get the remaining seconds
    hh+=mm/60;  // convert minutes to hours
    mm=mm%60;   // get the remaining minutes
    
    cout<<"Total time is : "<<hh<<" "<<mm<<" "<<ss<<endl;
    
    }
    /*
    OUTPUT:
    Enter time in hh mm ss format : 1 2 3
    4 5 6
    Total time is : 5 7 9
    */



    
