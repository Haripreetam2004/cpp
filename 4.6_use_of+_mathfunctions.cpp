#include<iostream>
#include<conio.h>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{ 
  cout<<fixed<<setprecision(2);
  cout<<"sin (100) = "<<sin(100.00)<<"\n";               //Computing sine value
  cout<<"cos (100) = "<<cos(100.00)<<"\n";              //Computing cosine value
  cout<<"tan (100) = "<<tan(100.00)<<"\n";             //Computing tangent value
  cout<<"7 to the power of 6 = "<<pow(7.0,6.0)<<"\n"; //Computing the base value raised to the other
  cout<<"log10 (10) = "<<log10(10.00)<<"\n";         //Computing the log to the base  of 10 value
  cout<<"sqrt (2) = "<<sqrt (2.00)<<"\n";           //Computing the square root of a value
  
  
  getch ();
  return 0;
  
};
/* output
sin (100) = -0.51
cos (100) = 0.86
tan (100) = -0.59
7 to the power of 6 = 117649.00
log10 (10) = 1.00
sqrt (2) = 1.41 */
