/*CIS 180
Assignment 4
Stone, Daria */
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int accountNumber,month;// declares variables
float balanceDue, paymentAmt;
string firstName, lastName;

//definition of function displayColumnTitle
void displayColumnTitle ()
{
cout << setw(10) <<" MONTH" << "\tBALANCE DUE\n" << endl;//displays column title
}


//definition of function calculateBalance
float balance(float balanceDue, float paymentAmt)
{
balanceDue = balanceDue - paymentAmt; //calculates balance
return balanceDue; //returns calculated balance
}

// function displayBalance
void displayBalance()
{

float temp;
temp = balanceDue; 
   for(int month = 1; month < 11; month++)// repeats displaying payments
   {
   cout << setprecision (2)<< showpoint <<fixed; //formats output
   cout << setw (10)<<  month << " "<< " $ " <<  balance(temp, paymentAmt) << endl; //displays balance
   temp = balance(temp, paymentAmt);
   }//displays months and balance
    
}

int main ()
{

{

cout << "\nLOAN AMOUNT CALCULATION" <<endl; //displays program header
cout << "\nEnter account number or -1 to terminate input: " << endl; 
cin >> accountNumber; //account number input
   while (accountNumber != -1)// verifies account number
   {
   
     cout << "Enter User Name" <<endl;//user name input
     cin >> firstName >> lastName;
     cin.ignore (80,'\n') ;
     cout << "Enter balance" << endl; //balance input
     cin >> balanceDue;
     cout << "Schedule of payments for account #" << accountNumber << ", customer " << firstName <<" "<< lastName <<endl; //displays user's input
     paymentAmt = balanceDue/10.0;//calculates monthly payments
     
      {
      displayColumnTitle ();//calls function to display title
      displayBalance ();//calls function to display balance
      cin.clear(); 
      cout << "\tLOAN AMOUNT CALCULATION" <<endl; //closes loop
      cout << "Enter account number: " << endl;
      cin >> accountNumber;
      }
   }
}
cout <<"Thank you!" << endl; //if account number =-1, end of program
return 0;
}