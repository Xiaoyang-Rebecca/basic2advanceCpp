#include "Birthday.h"
#include <iostream>
using namespace std;


/// [Method 1] ///

// Birthday::Birthday(  int m, int d, int y){  
//     month = m;
//     day   = d;
//     year  = y;

// }

/// [Method 2] ///
Birthday::Birthday(  int m, int d, int y)
:month(m), day(d),year(y)
{  

}


void Birthday::printDate(){
    cout << month<< "/" << day << "/" << year << endl;
}


