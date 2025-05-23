   					
	          
    
 
 
              Program no 1 :
						Write a program that converts 12000 rupees into dollars 
						(when 1dollar=99).
                      #include<iostream>
           		 using namespace std;
  		  int main()
{
  		  int Rupees=12000;
 	           float one_dollar=99.0;
		float  Amount_in_dollars;
	
		Amount_in_dollars = Rupees/one_dollar;
		cout << " Total dollars in 12000 rupees are= " << Amount_in_dollars;
		return 0;
    		}
Output

Total dollars in 12000 rupees are= 121.212
------------------------------------------------------------------------------------
    
 Program no 2:
Write a program that inputs time in hours ,minutes and 	seconds and convert them into second and displays on the screen.
		#include<iostream>
using namespace std;
int main()
{
                      int hrs,min,sec;
   		 cout << " Enter time in hours = ";
   		  cin >> hrs;
  		  cout << " Enter time in minutes = ";
   		  cin >> min;
  		  cout << " Enter time in seconds = ";
		 cin >> sec;
	 
		//seconds in one hour =3600
	 		 int sec_in_hrs = hrs*3600;
		 //seconds in one minute=60
	  		int sec_in_min = min*60;
	  
		int  total_time_in_seconds = sec_in_hrs + sec_in_min + sec;
			cout << "Total time in seconds = " << total_time_in_seconds;  
	         return 0;
}
        Output
     	      Enter time in hours = 1
 	      Enter time in minutes = 1
      Enter time in seconds = 20
      Total time in seconds = 3680
---------------------------------------------------------------------------------------
 
 Program no 3:
Write a program that inputs values into three variables a,b,c and calculate the   discriminant and displays it on screen (disc=b^2-4ac).
#include<iostream>
using namespace std;
int main()
 	{
    int a,b,c;
            cout << "Enter value of a = ";
              cin >> a;
	cout << "Enter value of b = ";
	  cin >> b;
	cout << "Enter value of c = ";
	  cin >> c;
	 
	 float disc = (b*b -(4*a*c));
	 cout << "Discriminant = "	<< disc;
	 return 0; 
	 }
    Output
    Enter value of a = 34
         Enter value of b = 12
         Enter value of c = 23
         Discriminant = -2984
------------------------------------------------------------------------------------------
   Program no 4:
Write a program that inputs four numbers and calulate the sum,average and product of these numbers.
#include<iostream>
using namespace std;
int main()
{
   	 float num1,num2,num3,num4;
   	 cout<< "Enter first number= ";
    	 cin>> num1;
   	 cout<< "Enter second number= ";
    	 cin>> num2;
    	 cout<< "Enter third number= ";
    	 cin>>num3;
  	  cout<< "Enter fourth number= ";
   	  cin>>num4;

    	 float sum = num1 + num2 + num3 + num4;
     	float avg = sum/4.0;
    	 float pro = num1 * num2 * num3 * num4;
     
    	 cout<< "Sum of four numbers are = " << sum <<endl;
   	  cout<< "Average of four numbers are =" << avg<<endl;
   	  cout<< "Product of four numbers are =" << pro;
     
	 return 0; 
	 }
 
  	Output
Enter first number= 3.6
Enter second number= 7.9
Enter third number= 9.0
Enter fourth number= 8.0
Sum of four numbers are = 28.5
Average of four numbers are =7.125
Product of four numbers are =2047.68
-------------------------------------------------------------------------------------------
          Program no 5:
Write a program that inputs current units and previous units from the user      and calculates the electricity bill.Per unit price is 19.25 and surcharge on the bill 12.5% will be added. The program omputes the net bill and displays it on screen.			                                                                                                                                                                                                                        

#include<iostream>
using namespace std;
int main()
{
 	  int current_units , previous_units;
 	   cout<<"Enter current units = ";
   	 cin >> current_units;
  	  cout<<"Enter previous units = ";
   	 cin >> previous_units;
    
   	 int consumed_units = current_units-previous_units;
   	 float EB = consumed_units*19.25;
   	 float Net_Bill = EB + (EB*12.5/100);
   	 cout<<"Net bill="<< Net_Bill;
   	 return 0;
}
Output
Enter current units = 360
Enter previous units = 320
Net bill=866.25
-----------------------------------------------------------------------
       Program no 6:
Write a program that inputs principal amount , rate of interest,total time.It computes the      compound interest the formula is :
#include<iostream>       					(amount(1+rate/100)^time)-amount 
#include<math.h>
using namespace std;
int main()
{
	int Principal_amount,Rate_of_interest,Total_Time ;
	cout << "Enter principal amount=" ;
	 cin >> Principal_amount;
	cout << "Enter rate of interest =" ;
	 cin >> Rate_of_interest;
	cout << "Enter total time=";
	 cin >> Total_Time;
	 
	float trate = 1+Rate_of_interest/100.0 ;
   	 float CI = (Principal_amount*(pow(trate,Total_Time))) ;
	cout << "Compound interest is "<<CI ;
	return 0;
}
Output
 
 	Enter principal amount=550
Enter rate of interest =5
Enter total time=2
Compound interest is 56.3749
   	-----------------------------------------------------------
    Program no 7:															   
Write a program that inputs four digits number and displays digits in separate four lines as      4785    .														   
        #include<iostream>
       #include<math.h>
        using namespace std;
        int main(){
       int n;
      cout << "Enter four digits number=";
      cin>>n;
      int a=n/1000;
         n=n%1000;
      int b=n/100;
        n=n%100;
      int c=n/10;
        n=n%10;
      cout<<a<<endl;
      cout<<b<<endl;
      cout<<c<<endl;
       cout<<n<<endl;
	return 0;
}
 
output
Enter four digits number=4785
4
7
8
5
            -----------------------------------------------------------------
    Program no 8:
Write a program that inputs a six digit number and displays it in reverse order as 458762 to 267854.
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout << "Enter six digits number=";
    cin>>n;
    int a=n/100000;
        n=n%100000;
    int b=n/10000;
        n=n%10000;
    int c=n/1000;
        n=n%1000;
    int g=n/100;
	    n=n%100;
	int h=n/10;
	    n=n%10;	 
    cout<<"In reverse order= "<<n<<h<<g<<c<<b<<a;
	return 0;
}
Output
Enter six digits number=458762
In reverse order= 267854
--------------------------------------------------------------------------
       Program no 9:
Write a program that inputs coordinates for two points  i.e.(x1,y1andx2,y2)  . Calculate   the distance  by formula. 
#include<iostream>
#include<math.h>
using namespace std;
int main(){
   	 int x1,y1,x2,y2;
   	 cout << "Enter x1,y1 =";
    	cin>>x1>>y1;
   	 cout << "Enter x2,y2 =";
    	cin>>x2>>y2;
    	float distance=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
   	 cout<<"Distance = "<<distance;
	return 0;
}
Output
Enter x1,y1 =5
7
Enter x2,y2 =8
9
Distance = 3.60555
------------------------------------------------------------------------------------------------------------------
Program no 10: 
			Write a program that inputs base and height from the user and calculates the area of triangle .Area =1/2*base*height;
#include<iostream> 
using namespace std;
int main()
{
	float base,height;
	cout <<"Enter base of triangle =";
	 cin >> base;
	 cout <<"Enter height of triangle =";
	 cin >> height;
	 float Area = 1/2.0*(base*height);
	  cout << "Area of triangle=" << Area;
	  return 0;
}
 
Output
Enter base of triangle =9.08
Enter height of triangle =58.9
Area of triangle=267.406
--------------------------------------------------------------------------
Program no 11:
Write a program that calculates the area of a sector of a triangle . it inputs radii and angle in radian by using formula Area=(radii*radii*angle)/2.0.
#include<iostream> 
using namespace std;
int main()
{
    float angle,radii;
    const float PI=3.14;
    cout<<"Enter angle in radian=";
    cin>> angle;
    cout<<"Enter radii=";
    cin>> radii;
    float Area=(radii*radii*PI/angle)/2.0;
    cout<<"area of sector"<<Area;
	  return 0;
}          
output
Enter angle in radian=5
Enter radii=5.6
area of sector9.84704
               ----------------------------------------------------------------------------
      	Program no 12:
			Write a program that inputs a number and displays its  square and cube.
         #include<iostream> 
using namespace std;
int main()
{
   	 float z;
   	 cout<< "Enter a number";
   	 cin>>z;
  	  float sq=z*z;
  	  float cu=z*z*z;
   	 cout<< "Square of that number="<<sq<<endl;
   	 cout<< "cube of that number="<<cu;
	  return 0;
}      
Output 
 Enter a number5.6
Square of that number=31.36
cube of that number=175.616
-----------------------------------------------------------------------
Program no 13: 
Write a program that inputs a number of five digits .Seperate the integer into its digits and dispalys them by showing four spaces in each.
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter five digits integer";
	cin>>n;
	int a=n/10000;
	    n=n%10000;
	int b=n/1000;
	    n=n%1000;
	int c=n/100;
	    n=n%100;
	int d=n/10;
	    n=n%10;
		
		cout<<"The given number after spaces is="<<a<<"    "<<b<<"    "<<c<<"    "<<d<<"    "<<n;
		return 0;		    
}
Output
Enter five digits integer12345
The given number after spaces is=1    2    3    4    5
---------------------------------------------------------------- 
Program no 14:
Write a program that inputs radius and height of a cylinder and finds out its volume using the formula V=PI*r*r*h   where PI=3.14
#include<iostream>
using namespace std;
# define PI 3.141
int main()
{
	   float rad,hgt;
	   cout<<"Enter radius of a cylinder  =";
	   cin>> rad;
	   cout<< "Enter height of a cylinder = ";
	   cin>> hgt;
	   float vol= PI*rad*rad*hgt;
	   cout<<"volume of a cylinder = "<<vol;
		return 0;		    
}
Output 
Enter radius of a cylinder  =6.0
Enter height of a cylinder = 4.5
volume of a cylinder = 508.842
------------------------------------------------------
Program no 15:
    		Write a program that inputs file in bytes and converts it into megabytes.
#include<iostream>
using namespace std;
int main()
{
	  int FileSizeInBytes;
	  cout<<"Enter file size in bytes=";
	  cin>> FileSizeInBytes;
	  
	  // for convert bytes into megabytes
	  double FileSizeInMBs=FileSizeInBytes/(1024*1024);
	  cout<<"the size of file in megabytes"<<FileSizeInMBs;
		return 0;		    
}
Output  
Enter file size in bytes=5242880
the size of file in megabytes5
------------------------------------------------------------------
Program no 16:
      				Write program that inputs total number of students in a class and calculate their fee.
#include<iostream>
using namespace std;
int main()
{
	  int NumOfStu,Totfee;
	  cout<<"Enter total number of students=";
	  cin>> NumOfStu;
	  cout<<"Enter total Fee=";
	  cin>>Totfee;
	  
	  int net_fee=NumOfStu*Totfee;
	  cout<<"Fee of whole class="<<net_fee;
		return 0;		    
}
Output
Enter total number of students=50
Enter total Fee=16000
Fee of whole class=800000
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Program no  17:
Write a program  that input  initial velocity , acceleration and time span   .It calculates final velocity using formula vf=vi+at. 
#include<iostream>
using namespace std;
int main()
{
	  float vi,a,t;
	  cout<<"Enter initial velocity=";
	  cin>> vi;
	  cout<<"Enter acceleration=";
	  cin>>a;
	  cout<<"Enter time";
	  cin>>t;
	  
	  float vf=vi+(a*t);
	  cout<<"Final velocity="<<vf;
		return 0;		    
}
Output
Enter initial velocity=5.9
Enter acceleration=9.0
Enter time9.0
Final velocity=86.9
-------------------------------------------------------
 
	Program no 18:
Write aprogram that enters distance travelled and speed of a car.It calculates the total   time and displays it on screen.
#include<iostream>
using namespace std;
#include<iomanip>
int main()
{
	  float speed,distance;
	  cout<<"Enter speed = ";
	  cin>> speed;
	  cout<<"Enter distance = ";
	  cin >>distance;
	
	  float time = distance/speed ;
	  cout<<"Time taken by a car = "<<setprecision(2)<<time;
		return 0;		    
}
Output
Enter speed = 8.9
Enter distance = 15.9
Time taken by a car = 1.8
---------------------------------------------------------
Program no  19:
Write aprogram that inputs two values and swab these values by using another variable. 
#include<iostream>
using namespace std;
#include<iomanip>
int main()
{
	  int n1,n2,temp;
	  cout<<"Enter value of n1= ";
	  cin>> n1;
	  cout<<"Enter value of n2 = ";
	  cin >>n2;
	
	  temp=n1;
	  n1=n2;
	  n2=temp;
	  cout<<"The numbers after swabing = "<<"n1="<<n1<<"  "<<"n2="<<n2;
		return 0;		    
}
Output
Enter value of n1= 8
Enter value of n2 = 9
The numbers after swabing = n1=9  n2=8
--------------------------------
Program no 20:
Write a program that inputs three values and swaps it without using the fourth variable .By using these equations in a sequence. A=A+B+C, B=A-(B+C), C=A-(B+C), A=A-(B+C).
#include<iostream>
using namespace std;
#include<iomanip>
int main()
{
	  int n1,n2,n3;
	  cout<<"Enter value of n1= ";
	  cin>> n1;
	  cout<<"Enter value of n2 = ";
	  cin >>n2;
	cout<<"Enter value of n3 = ";
	  cin >>n3;
	 
	  n1=n1+n2+n3;
	  n2=n1-(n2+n3);
	  n3=n1-(n2+n3);
	  n1=n1-(n2+n3);
	  cout<<"The numbers after swabing = "<<"n1="<<n1<<"  "<<"n2="<<n2<<"  "<< "n3="<<n3;	
	  	return 0;		    
}
Output
Enter value of n1= 2
Enter value of n2 = 3
Enter value of n3 = 4
The numbers after swaping = n1=4  n2=2  n3=3
--------------------------------
       Program  no 21:
Write a program that inputs an even number and odd number.Multiply the even by 5 and odd          by 7 and adds the both . Then subtract the final result from 1000. 
  #include<iostream>
using namespace std;
int main()
{
	int even,odd;
	cout<<"Enter an even number=";
	cin>>even;
	cout<<"Enter an odd number=";
	cin>>odd;
	
	int res=1000-((even*5)+(odd*7));
	cout <<"Final result"<<res;
	return 0;
}
output
Enter an even number=22
Enter an odd number=21
Final result743
-----------------------------------------------------------------
    	Program no 22:
					Write aprogram that inputs rainfall in millimeter and   convert it into  inches. 
#include<iostream>
using namespace std;
int main()
{
	int mm;
	//we know that one inch has 24.5 mm
	float inch=24.5;
	cout<<"Enter rainfall in millimeters=";
	cin>>mm;
	
	float rainfall_in_inches=mm/24.5;
	cout<<"Rainfall in inches="<<rainfall_in_inches;
	return 0;
}
output
Enter rainfall in millimeters=500
Rainfall in inches=20.4082
----------------------------------------------
    	Program no 23;
			Write a program that gives following output in single cout stateme
				*****
				****
				***
				**
				*
#include<iostream>
using namespace std;
int main()
{
	cout<<"*****\n"<<"****\n"<<"***\n"<<"**\n"<<"*\n";
	return 0;
}

Output
*****
****
***
**
*
----------------------------------------------------------------------------------------------------------------------------

			FINISHED




							
