/*A program that inputs salary and grade . It adds 50% bonus if the grade is greater than 15.It adds 25% bonus if the grade is 15 or lessand then dispalys the total salary.*/

#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
int main ()               // main function from where execution starts
{
    float salary ,grade,bonus; //three float type variables to store values
    cout<<"Enter salary : ";   //cout object to dispaly message
    cin>>salary;               //cin object to take input
    cout<<"Enter grade : ";
    cin>>grade;

    if(grade>15)
      {
        bonus=salary*50/100.0;
      }
    else
      {
        bonus=salary*25/100.0;
      }

      salary=salary+bonus;
      cout<<"The total salary of employee is : "<<salary;
      return 0;   // return 0 to operating system

}
