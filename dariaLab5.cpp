#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>
using namespace std;
const int NUM_MONTHS=12;
int rainFall [NUM_MONTHS];
float total = 0;
//float average;
int calculateAverageRainFall(int, int);
int ceil (float, int);

string month[NUM_MONTHS] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

void inputRainFall(int rainFall[],int size)
{ifstream inputFile;
   inputFile.open ("rainfall.txt");
     for (int count=0; count<size; count++)
   {       
      inputFile >> rainFall[count];         }   
    inputFile.close();
    cout<< rainFall[6] << endl; 

    }
    
 int calculateAverageRainFall(int rainFall[], int NUM_MONTHS)
   {  for(int i = 0; i < NUM_MONTHS; i++)
      total = total+rainFall[i];
      return total;
    }
    //float average = total/NUM_MONTHS;
   // cout << average << endl;
   //cout << float average = ceil(total /NUM_MONTHS);
   //cout << average <<endl;
   //return 0;


main ()
{ cout<< rainFall[0] << endl; 
inputRainFall(rainFall, NUM_MONTHS);
for(int i =0; i < NUM_MONTHS; i++){
cout << rainFall[i] << ' ';

//calculateAverageRainFall(rainFall, NUM_MONTHS);
 }
 cout << endl;
    };


    

