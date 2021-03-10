//==========================================================
//
// Title:       Date Maker
// Course:      CSC 2111
// Lab Number:     11-2
// Author:      Oke Amuwha
// Date:        3/8/2021
// Description:
//   <brief description of application including its inputs,
// processing, and outputs>
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
#include <cmath> // For math
#include "DateType.h"
using namespace std; // So "std::cout" may be abbreviated to "cout"

int main()
{

    dateType dateMaker(1,10,2019);
    dateMaker.setDate(5, 8, 20);
    dateMaker.printDate();
    cout << endl;

}
