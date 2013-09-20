//
//  main.cpp
//  C++ HW Thing 1 - Functions
//  Comparing numbers, characters and doubles.
//
//  Created by William Holt on 9/19/13.
//  Copyright (c) 2013 William Holt. All rights reserved.
//

#include <iostream>
using namespace std;

int maximum(int a, int b, int c)
{
    if (a > b && a > c) return a;
    else if (b > a && b > c) return b;
    else return c;
}

char maximum(char a, char b, char c)
{
    if ((int)a > (int)b && (int)a > (int)c) return a;
    else if ((int)b > (int)a && (int)b > (int)c) return b;
    else return c;
}

double maximum(double a, double b, double c)
{
    if (a > b && a > c) return a;
    else if (b > a && b > c) return b;
    else return c;
}

int main(int argc, const char * argv[])
{
    int num1, num2, num3;
    char char1, char2, char3;
    double dec1, dec2, dec3;

    cout << "Mash in 3 numbers: ";
    cin >> num1;
    cin >> num2;
    cin >> num3;
    cout <<"The largest value of the set is: " << maximum(num1, num2, num3) << endl << endl;

    cout << "Mash in 3 characters: ";
    cin >> char1;
    cin >> char2;
    cin >> char3;
    cout << "The largest value of the set is: " << maximum(char1, char2, char3) << endl << endl;

    cout << "Mash in 3 decimal numbers: ";
    cin >> dec1;
    cin >> dec2;
    cin >> dec3;
    cout << "The largest value of the set is: "<< maximum(dec1, dec2, dec3) << endl;


    return 0;
}
