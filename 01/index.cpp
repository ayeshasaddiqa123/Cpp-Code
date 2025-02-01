/*
    C++ is an object-oriented programming language used for developing softwares  that instructs hardware what to do
          1.it provides the facility to work with objects and classes.
          2.It has its syntax.
    3.The boiler plate code for all C++ programs  is:

           #include<iostrem>
           using nmespace std;
           int main()
           {
               code here
               return 0;
               }
    4.if there is error in boiler plate code then the program will not run.Three kinks of errors are:
          a.Syntax error or compilation error or compile time error
          b.Logical error due to poor logic of programmer
          c.Run time error
    5.COMMENTS are used to make the code more readable though they do not execute.There are two types of comments:
           a.single line comment (its syntax is //comments)
           b.multi line comment (e.g I write this intro of c++ in multi line comments)


    LETS START WITH THE FIRST MOST BASIC PROGRAM IN C++

           */
 
            //pROGRAM TO PRINT "Welcome to coding worlg"

#include<iostream> // include the iostream library (a preprocessor directive)
using namespace std; // use the stanadard namespace
int main () // main function from where execution starts
{
    cout << "Welcome to coding world!"; // print double quoted text
    return 0; // return 0 to the opearating system
}