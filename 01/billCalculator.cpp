/*Aprogram that calculates electricity bill with following rates per unit:

1.if the units consumed are <=300, Then the cost is rs 2.per unit.
2.if the units consumed are >300  and<=500 ,Then the cost is rs 5.per unit.
3.if the units consumed exceed 500, Then the cost is rs 7.per unit.

Aline rent rs.150 is also added to the total bill and surcharge of 5% extra if the bill exceeds Rs.2000. Calculate bill with all conditions given above.
*/
#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
int main ()               // main function from where execution starts
{
    int units;           //declare variable of int type to store units
    float bill;
    cout<<"Enter units consumed : "; //display mesaage
    cin>>units;           //cin object inputs units

     
    if(units>500)
        {
            bill=units*7;
        }
     else if(units>500)
        {
            bill=units*7;
        }
    else
        {
            bill=units*2;
        }
    bill=bill+150;

    if (bill>2000)
          bill=bill+(bill*5.0/100);
    cout<<"Total bill is : "<<bill;
    return 0;   // return 0 to operating system
}
