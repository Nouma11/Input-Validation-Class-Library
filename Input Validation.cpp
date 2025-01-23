#include <iostream>
#include "clsInputValidation.h"
using namespace std;

int main() {
    // Test 1: Read a positive number
    cout << "Test 1: Read a positive number\n";
    int positiveNumber = clsInputValidation::ReadPositiveNumber("Invalid input. Please enter a positive number.");
    cout << "You entered: " << positiveNumber << endl;

    // Test 2: Read any number
    cout << "\nTest 2: Read any number\n";
    int anyNumber = clsInputValidation::ReadNumber("Invalid input. Please enter a valid number.");
    cout << "You entered: " << anyNumber << endl;

    // Test 3: Read a number between a range
    cout << "\nTest 3: Read a number between 1 and 100\n";
    int rangedNumber = clsInputValidation::ReadNumberBetwen(1, 100, "Invalid input. Please enter a number between 1 and 100.");
    cout << "You entered: " << rangedNumber << endl;

    // Test 4: Read a double number
    cout << "\nTest 4: Read a double number\n";
    double doubleNumber = clsInputValidation::ReadDBNumber("Invalid input. Please enter a valid number.");
    cout << "You entered: " << doubleNumber << endl;

    // Test 5: Read a double number between a range
    cout << "\nTest 5: Read a double number between 0.0 and 1.0\n";
    double rangedDoubleNumber = clsInputValidation::ReadDBNumberBetwen(0.0, 1.0, "Invalid input. Please enter a number between 0.0 and 1.0.");
    cout << "You entered: " << rangedDoubleNumber << endl;

    // Test 6: Check if a number is between a range
    cout << "\nTest 6: Check if a number is between 10 and 20\n";
    int numberToCheck = 15;
    bool isBetween = clsInputValidation::ISNumberBetwen(numberToCheck, 10, 20);
    cout << "Is " << numberToCheck << " between 10 and 20? " << (isBetween ? "Yes" : "No") << endl;

    // Test 7: Check if a date is valid
    cout << "\nTest 7: Check if a date is valid\n";
    clsDate date(29, 2, 2023); // Invalid date (2023 is not a leap year)
    bool isValidDate = clsInputValidation::IsValideDate(date);
    cout << "Is the date 29/02/2023 valid? " << (isValidDate ? "Yes" : "No") << endl;

    // Test 8: Check if a date is between two dates
    cout << "\nTest 8: Check if a date is between two dates\n";
    clsDate dateToCheck(15, 10, 2023);
    clsDate startDate(1, 10, 2023);
    clsDate endDate(31, 10, 2023);
    bool isDateBetween = clsInputValidation::ISDateBetwen(dateToCheck, startDate, endDate);
    cout << "Is 15/10/2023 between 01/10/2023 and 31/10/2023? " << (isDateBetween ? "Yes" : "No") << endl;

    return 0;
}