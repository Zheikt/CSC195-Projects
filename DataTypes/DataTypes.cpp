// DataTypes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int getInt() {
std:stringstream ss;
    string strHolder;
    std::cin >> strHolder;
    ss = stringstream(strHolder);
    int iValue;
    ss >> iValue;
    return iValue;
}

float getFloat() {
std:stringstream ss;
    string strHolder;
    std::cin >> strHolder;
    ss = stringstream(strHolder);
    float iValue;
    ss >> iValue;
    return iValue;
}

int main()
{
    float iTAX = 0.1f;
    string strName;
    char cInitial;
    short shAge = 0;
    bool bIsAdult;
    int iZipcode = 0;
    float fWage = 0.0f;
    int iDaysWorked = 0;
    int iHoursWorkedPerDay[] = {0,0,0,0,0,0,0};
    int iTotalHours = 0;
    float fGrossIncome = 0.0f;
    float fNetIncome = 0.0f;

    std::cout << "Enter first name: ";
    std::cin >> strName;
    std::cout << "Enter last initial: ";
    std::cin >> cInitial;
    std::cout << "Enter age: ";
    shAge = getInt();
    bIsAdult = shAge >= 18;
    std::cout << "Enter zipcode: ";
    iZipcode = getInt();
    std::cout << "Enter wage: ";
    fWage = getFloat();
    std::cout << "Enter days worked: ";
    iDaysWorked = getInt();
    for (int i = 0; i < iDaysWorked; i++) {
        std::cout << "Hours worked on day " << i + 1 << ": ";
        iHoursWorkedPerDay[i] = getInt();
        iTotalHours += iHoursWorkedPerDay[i];
    }

    fGrossIncome = fWage * iTotalHours;
    fNetIncome = fGrossIncome - (fGrossIncome * iTAX);

    std::cout << strName << " worked for " << iTotalHours << " hours at $" << fWage << " per hour.\n";
    std::cout << "Gross income: $" << fGrossIncome << "\nNet income: $" << fNetIncome;

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
