//
//  main.cpp
//  PRG-3-15-Property-Tax
//
//  Created by Keith Smith on 10/6/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//  A county collects property taxes on the assessment value of property, which is 60 percent
//  of the property's actual value. If an acre of land is valued at $10,000, its assessment
//  value is $6,000. The property tax is then 75 cents for each $100 on the assessment value.
//  The tax for the acre assessed at $6,000 will bev $45. Write a program that asks for the
//  actual value of a piece of property, then displays the assessment value and property tax.

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const float FLT_ASSESSMENT_PERCENTAGE = 0.60f,
                FLT_PROPERTY_TAX = 0.0075f; //This was calculated with (75% / $100)
    
    float fltPropertyValueActual,
          fltPropertyValueAssessment,
          fltPropertyValuePropertyTax;
    
    cout << setprecision(2) << fixed << showpoint;
    
    cout << "Please enter the property's total value: " << endl << "$";
    cin >> fltPropertyValueActual;
    while(!cin || fltPropertyValueActual < 0.0f || fltPropertyValueActual > 1000000.0f)
    {
        cout << "Please enter a property value between $0.00 and $1,000,000.00:\n";
        cout << "$";
        cin.clear();
        cin.ignore();
        cin >> fltPropertyValueActual;
    }
    
    fltPropertyValueAssessment = fltPropertyValueActual * FLT_ASSESSMENT_PERCENTAGE;
    fltPropertyValuePropertyTax = fltPropertyValueAssessment * FLT_PROPERTY_TAX;
    
    cout << "Your property's value assessment is $" << fltPropertyValueAssessment << endl;
    cout << "Your property's tax total is $" << fltPropertyValuePropertyTax << endl;
    
    return 0;
}


