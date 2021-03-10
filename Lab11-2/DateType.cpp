//
//  DateType.cpp
//  Labb11-2
//
//  Created by Oke-Oghene Amuwha on 3/8/21.
//

#include <cstdlib> // For several general-purpose functions
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
#include <stdio.h>
#include "DateType.h"
using namespace std; // So "std::cout" may be abbreviated to "cout"

void dateType::setDate(int month, int day, int year)
{
    // Check month
    while (month < 1 || month > 12)
    {
        cout << "Error! " << month << " is wrong" << endl;
        cout << "Please enter a value between 1 and 12 for the Month" << endl;
        cin >> month;
    }
    monthV = month;
    
    // Check day
    while (day < 1 || day > 31)
    {
        cout << "Error! " << day << " is wrong" << endl;
        cout << "Please enter a value between 1 and 31 for the date" << endl;
        cin >> day;
    }
    dayV = day;
    
    // Variables for year check
    int digitCount = 0;
    int flag = 0;
    int yearCount;
    
    // Counts digits in year
    while(flag == 0)
    {
        yearCount = year;
        digitCount = 0;
        while (year)
        {
            year /= 10;
            digitCount++;
        }
    }
    
    // Check year
    if(digitCount != 4)
    {
        cout << "Error! " << yearCount << " is wrong" <<endl;
        cout << "Please enter correct year in the format yyyy" << endl;
        cin >> year;
        flag = 0;
    }
    
    else
        flag = 1;
    
    yearV = yearCount;
}

int dateType::getDay() const
{
    return dayV;
}

int dateType::getMonth() const
{
    return monthV;
}

int dateType::getYear() const
{
    return yearV;
}

void dateType::printDate() const
{
    cout << monthV << "-" << dayV << "-" << yearV;
}

// Check leap year
void dateType::isLeapYear(int year)
{
    if (yearV % 400 == 0)
        cout << endl << yearV << " is a leap year!" << endl;
        
    else if (yearV % 100 == 0)
        cout << endl << yearV << " is a leap year." << endl;
        
    else if ( yearV % 4 == 0 )
        cout << endl << yearV << " is a leap year." << endl;
        
    else
        cout << endl << yearV << " is not a leap year." << endl;
}

// Constructor
dateType::dateType(int month, int day, int year)
{
    // Check month
    while(month < 1 || month > 12)
    {
        cout << "Enterd month " << month << " is wrong" << endl;
        cout << "Enter correct month" << endl;
        cin >> month;
    }
    monthV = month;
    
    // Check day
    while(day < 1 || day > 31)
    {
        cout << "Enterd date " << day << " is wrong" << endl;
        cout << "Enter correct date" << endl;
        cin >> day;
    }
    dayV = day;
    
    // Variables for year check
    int digitCount = 0;
    int flag = 0;
    int yearCount;
    
    // Counts digits in year
    while(flag == 0)
    {
        yearCount = year;
        digitCount = 0;
        
        while(year)
        {
            year /= 10;
            digitCount++;
        }
    }
    
    if(digitCount != 4)
    {
        cout << "Enterd year " << yearCount << " is wrong" << endl;
        cout << "Enter correct year" << endl;
        cin >> year;
        flag = 0;
    }
    
    else
        flag = 1;

    yearV = yearCount;
}

