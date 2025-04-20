//A prograam that enters current day and month from the user . It then calcultes and displays total number of days till the entered date.

#include<iostream>    //include the iostream library(a preprocessor directive)
using namespace std;  //use standard namespace
int main()            //main function from where execution start
{
	int current_day,month,total;					//varaible declaration
	int days_per_month[12]={31,28,31,30,31,30,31,31,30,31,30,31};   //array declaration
	
	cout<<"Enter current day  number of year : ";
	cin>>current_day;
	
	cout<<"Enter month  of year : ";
	cin>>month;
	
	total=current_day;
	
	for(int i=0;i<month-1;i++) {
		total = total+days_per_month[i];
}

	
	cout<<"Total days in year till the month and day entered is : "<<total;
	
	return 0;		//return 0 to the operating system
	
	
	
	
	
	
}
