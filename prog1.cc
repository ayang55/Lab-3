// Don't forget to include the header block
// more information on keyword const on pages 95 - 97
// For if else format look at page 77
/*
* @file: prof1.cc 
* @author: Andrew Yang
* @date: 9/8/2020
* @brief This is our 3rd lab, and for this program you compare the size of two intergers.
*/

#include<iostream> 
#include<cstdlib>
using namespace std;
const int INT1 = 15;
const int INT2 = 20; 
int main() {
    cout << "Sum of " << INT1 << " and " << INT2 << " is " << INT1+INT2;
    cout << "Product is " << INT1*INT2 << endl;
    if(INT1 < INT2)
        cout << INT2 << " is bigger";
    else 
        cout << INT1 << " is bigger"; 
    return (EXIT_SUCCESS);
}



