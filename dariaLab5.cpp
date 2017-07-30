#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>
using namespace std;
const int NUM_MONTHS=12;
int rainFall [NUM_MONTHS];
//int total = 0; 
int calculateAverageRainFall(int, int);

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
   {int total= 0;
   int average = 0;
   {  for(int i = 0; i < NUM_MONTHS; i++)
      total = total+rainFall[i];
   }
    average=ceil(float(total/12));
    cout <<"\tAverage " << average;
    return average;
 }

main ()
{ /*cout<< rainFall[0] << endl; */
inputRainFall(rainFall, NUM_MONTHS);
for(int i =0; i < NUM_MONTHS; i++){
cout << rainFall[i] << ' ' <<endl;}

calculateAverageRainFall(rainFall, NUM_MONTHS);

    };


    

