/* CIS 180
Assignment 3
Stone, Daria */
#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <iomanip> 
using namespace std;

int main()
{
    unsigned seed = time (0);// get the system time
    srand (seed);//seeds random number generator
    int num1,num2, userAnswer=0, rightAnswer=0; //integer variables
    int selection; // for menu
    do 
    {
    // Displays menu
        cout << setw (10) << "Menu\n" ;
        cout << setw (5) << " 1. Addition \n 2. Subtraction \n 3. Multiplication \n 4. Division \n 5. Quit \n \n\nEnter your choice (1-5): ";   
 
	        cin >> selection;  // accepts user input for menu
      if (cin.fail()) // verifies menu choice
		{
		cin.clear(); 
		cin.ignore(80, '\n');
		selection = 6;
		}
       
        switch (selection) // switch statement holds menu
        {
			case 1: //Addition
          
			num1 = rand() % 9; // generates two random numbers
			num2 = rand() % 9;
			cout << "Addition\n";
			cout << num1 <<"\n"; // displays the first random number
			cout << " + \n"; 	
            cout << num2 <<"\n"; // displays the second random number
			rightAnswer = num1 + num2; // performs addition
			cout << "---\n";
			cin >> userAnswer; // prompts the user to enter answer
	        if (rightAnswer == userAnswer)//compares users answer with the correct answer
			{
				cout << "Congratulations! That's right.\n"; // if the answer is correct
				cout << "Try again!\n";
			}
			else 
			{ 
				cout << "Another try!\n"; // prompts the user to enter answer again
            cin >> userAnswer; 
	         if (rightAnswer == userAnswer)
               {
				   cout << "Congratulations! That's right.\n"; // if the answer is correct
				   cout << "Try again!\n";
			      }
            else
            {cout  << "Sorry, the correct answer is  " << rightAnswer << "\n"; // if the answer is incorrect
				cout << "Try again!\n";
            }
			} 
            break;

            case 2: // Subtraction
                // generates two random numbers, checks that number 2 is not larger than number 1
		   cout << "Subtraction\n";
			num1 = rand()%10; 
			num2 = rand()%10;
		       while (num2 >= num1){ num1 = rand()%10; num2 = rand()%10;}
			rightAnswer = num1 - num2;// performs subtraction
         			cout << num1 <<"\n";
			cout << " - \n"; 	
			cout << num2 <<"\n";
			cout << "---\n";				
			cin >> userAnswer;
						
			if (rightAnswer == userAnswer)
				{
				cout << "Congratulations! That's right.\n";
				cout << "Try again!\n";
				}
			else 
			{ 
				cout << "Another try!\n"; // prompts the user to enter answer again
            cin >> userAnswer; 
	         if (rightAnswer == userAnswer)
               {
				   cout << "Congratulations! That's right.\n"; // if the answer is correct
				   cout << "Try again!\n";
			      }
            else
            {cout  << "Sorry, the correct answer is  " << rightAnswer << "\n"; // if the answer is incorrect
				cout << "Try again!\n";
            }
			} 	
			break;
			
            case 3: //Multiplication
            cout << "Multiplication\n";
            num1 = rand() % 10; // generates two random numbers
			num2 = rand() % 9;
            cout << num1 <<"\n"; 
			cout << " * \n"; 	
            cout << num2 <<"\n"; 
			rightAnswer = num1 * num2;
			cout << "---\n";
			cin >> userAnswer; 
			cout << "---\n";
	        if (rightAnswer == userAnswer)
			{
				cout << "Congratulations! That's right.\n";
				cout << "Try again!\n";
			}
			else 
			{ 
			cout << "Another try!\n"; // prompts the user to enter answer again
            cin >> userAnswer; 
	         if (rightAnswer == userAnswer)
               {
				   cout << "Congratulations! That's right.\n"; // if the answer is correct
				   cout << "Try again!\n";
			      }
            else
            {cout  << "Sorry, the correct answer is  " << rightAnswer << "\n"; // if the answer is incorrect
				cout << "Try again!\n";
            }
			} 
			break;

            case 4: //Division
            cout << "Division\n";
            num2 = rand() % 9; //generates the numerator 
            num1 = num2 * (rand() % 10 + 1); // generates the denominator to ensure that there will be no remainder
				if (num1 == 0) // verifies that it is never 0 
				{ num2 = rand() % 9; 
				num1 = num2 * (rand() % 10 + 1);
				}
			else
			{cout << num1 <<"\n"; 
			cout << " / \n"; 	
            cout << num2 <<"\n"; 
			rightAnswer = num1 / num2;
			cout << "---\n";
			cin >> userAnswer; 
			cout << "---\n";
	        if (rightAnswer == userAnswer)
			{
				cout << "Congratulations! That's right.\n";
				cout << "Try again!\n";
			}
			else 
			{ 
				cout << "Another try!\n"; // prompts the user to enter answer again
            cin >> userAnswer; 
	         if (rightAnswer == userAnswer)
               {
				   cout << "Congratulations! That's right.\n"; // if the answer is correct
				   cout << "Try again!\n";
			      }
            else
            {cout  << "Sorry, the correct answer is  " << rightAnswer << "\n"; // if the answer is incorrect
				cout << "Try again!\n";
            }
			}
			} 
                break;

            case 5: // exit
                cout << "Program ending. Thank you for using math tutor!\n";
                break;
			case 6: // error message		
           default: cout <<"ERROR. Enter a value in the range 1-5  \n"; 

	}		}while ( selection  != 5 );//exit condition
	
    return 0;
}
