#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>
using namespace std;
string message = "I am not an idiot\, but Daria says I am";
string response = "I am an idiot\, but Efim says I am not\n";
string cat = "Meow! MEOW!!!\n";
void print(string message){cout << message<< endl;};
int  main(){
for ( int i =3; i<15; i++){
   if(i%3==0)
   {
   
   print(message);
   
   }
   else if (i%2==1)
   {print (cat);}
   else {
   print(response);
   }
}
return 0;
};