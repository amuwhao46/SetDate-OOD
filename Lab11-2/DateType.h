//
//  DateType.h
//  Labb11-2
//
//  Created by Oke-Oghene Amuwha on 3/8/21.
//

#ifndef DateType_h
#define DateType_h

#include <cstdlib> // For several general-purpose functions
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std;

class dateType
{
public:
    void setDate(int month, int day, int year);
    // Function to set the date.
   
    int getYear() const;
    
    int getMonth() const;
    
    int getDay() const;
    
    void printDate() const;
    // Function to output the date in the form mm-dd-yyyy
    
    void isLeapYear(int year);
    
    dateType(int month = 0, int day = 0, int year = 0);
    // Constructor

private:
    int yearV;
    int monthV;
    int dayV;
};


#endif /* DateType_h */
