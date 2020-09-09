/*
* @file: prof5.cc 
* @author: Andrew Yang
* @date: 9/8/2020
* @brief This is our 3rd lab, and for this program you compare the size of two intergers.
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
   double ctof;  // equivalent Celsius temperature
   double ftoc;  // equivalent Fahrenheit temperature.
 
   int fah = 56;  //declare and initialize at the same time - page 48
   int cel = 20;

   ctof = 9.0/5  * cel + 32;
   ftoc = 5.0/9 * (fah -32);

   cout << cel << " degrees Celsius in Fahrenheit is " << ctof << endl;
   cout << fah << " degrees Fahrenheit in Celsius is " << (int)(ftoc*10)/10.0<< endl;

   return (EXIT_SUCCESS);
}
