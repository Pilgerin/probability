/*CIS	180
Assignment 2
Stone, Daria
*/

#include	<iostream>
#include	<iomanip>

using	namespace std;

	
int main	()

{ 
	double grossAmount;// gross payment
	double netPay;	//	net payment

	cout << setw(26) <<	"The program calculates net payment." << endl; //displays title
	cout << setw(26) << " Enter the gross payment:  " << right << "$ "; //displays prompt 
	cin >> grossAmount; //accepts	input	from the	keyboard
	cout << "-----------------------------------" << endl; 
  
	const	double FEDERAL_TAX =	0.2, STATE_TAX	= 0.04, SOCIAL_SECURITY_TAX =	0.035, MEDICARE_TAX = 0.275, PENSION_PLAN	= 0.06 ;// constant tax	rates
	const	double HEALTH_INSURANCE	= 80 ; // constant health insurance deduction
	double federalDeduct, stateDeduct, socialSecDeduct, medicareDeduct, pensionPlanDeduct ; // declares variables for	tax deductions
	
	federalDeduct = grossAmount *	FEDERAL_TAX;//calculates tax deductions
	stateDeduct	= grossAmount * STATE_TAX;	
	socialSecDeduct =	grossAmount	* SOCIAL_SECURITY_TAX;
	medicareDeduct	= grossAmount * MEDICARE_TAX ;
	pensionPlanDeduct	= grossAmount * PENSION_PLAN;
	netPay =	grossAmount	- (federalDeduct + stateDeduct +	socialSecDeduct +	medicareDeduct	+ pensionPlanDeduct + HEALTH_INSURANCE) ;	//calculates total amount of deductions
	
	cout << setprecision	(2)<<	fixed; //sets the	precision of floating-point numbers	to	2
	cout <<	setw(26)	<<	"Gross Amount: " << right << " $"  << setw(7) << grossAmount << endl; // displays title
	cout << "-----------------------------------" << endl;
	cout <<	setw(26)	<<	"Federal Tax: " << right << " $"	 << setw(7)	<<	federalDeduct << endl; //displays each	deduction
	cout <<	setw(26)	<<	"State Tax: " << right << " $"  << setw(7) << stateDeduct << endl;
	cout <<	setw(26)	<<	"Social Security Tax: "	<<	right	<<	" $"	<<	setw(7) << socialSecDeduct	<<	endl;
	cout <<	setw(26)	<<	"Pension Plan: " << right << " $"  << setw(7) << pensionPlanDeduct << endl;
	cout <<	setw(26)	<<	"Health Insurance: "	<<	right	<<	" $"	<<	setw(7) << HEALTH_INSURANCE << endl;
	cout << "-----------------------------------" << endl;
	cout <<	setw(26)	<<	"Net Pay: "	<<	right	<<	" $"	<<	setw(7) << netPay	<<	endl;	//displays total net	pay
	  return	0;
}