
// write a program that decalres a structure containing records of four players inputting data and ten show the data in tabular form.

#include<iostream>     // include the iostream library (a preprocessor directive)
#include<iomanip>      // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
struct data				// structure declaration
{
	char names[30];
	int runs;
	int innings;
	int times_Not_out;
	float avg;
 };
 void stars();        // function declaration
 void lines(); 			// function declaration
 int main ()               // main function from where execution starts
 {
 
	data players[3];
	for(int i=0;i<3;i++) {
		
		cout << "Enter a name of " << i<< " player : ";
 		cin >> players[i].names ;
 		
			cout << "Enter the runs of "<<i<<" player : ";
		cin >> players[i].runs ;
		
			cout << "Enter inninges playes by  "<< i<< " player : " ;
		cin >> players[i].innings ;
		
			cout << "Enter times not out of " << i <<  " player : ";
		cin >> players[i].times_Not_out ;
		 players[i].avg = float (players[i].runs) / players[i].innings ;
}
    cout << setw(49) <<"CRICKETERS' RECORD" << endl;
    
    lines(); // function call
    
    cout<<setw(15) << "Cricketers'names" << setw(15) << "Runs" << setw(15) << "Innings" << setw(20) << "Times not out" << setw(12) << "Average" <<
    endl;  
    
    lines();		// function call
    
         // display all data
    	for(int i=0;i<5;i++)
     cout << setw(15) << players[i].names << setw(15) << players[i].runs
     << setw(12) << players[i].innings << setw(18) << players[i].times_Not_out << setw(16) << players[i].avg <<
    endl;
    
    
 stars();		// function call
 
 cout<<setw(49)<<"FINISHED"<<endl;
 
  stars();   // function call
	
   return 0; //return 0 to operating system
}


   //functions definition
   void stars()
   {
   	for(int i=0;i<82;i++) {
   		cout<<"*";
}
cout<<endl;

   }
   
   
   
   void lines()
   {
   	for(int i=0;i<82;i++) {
   		cout<<"-";
}
cout<<endl;

   }

/*
Output:
Enter a name of 0 player : sachin
Enter the runs of 0 player : 100
Enter inninges playes by  0 player : 10
Enter times not out of 0 player : 5
Enter a name of 1 player : virat
Enter the runs of 1 player : 200
Enter inninges playes by  1 player : 20
Enter times not out of 1 player : 10
Enter a name of 2 player : dhoni
Enter the runs of 2 player : 300
Enter inninges playes by  2 player : 30
Enter times not out of 2 player : 15
                                CRICKETERS' RECORD
--------------------------------------------------------------------------------------------------
Cricketers'names      Runs         Innings        Times not out    Average
--------------------------------------------------------------------------------------------------
sachin                  100         10            5               10
virat                   200         20            10              10
dhoni                   300         30            15              10
******************************************FINISHED******************************************
*/