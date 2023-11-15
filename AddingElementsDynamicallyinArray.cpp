// ProgrammingAdvices.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <cstdlib>
//#include <ctime>
//#include "OwnLibrary.h"
#include <vector>
using namespace std;

int readNumber() {
    int number;
    cout << "Please Enter A number: \n";
    cin >> number;
    while (cin.fail()) {
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cout << "Invalid Input. Please Enter A number: \n";
        cin >> number;
    }
    return number;
}

void AddElements(int Number, int arr[100], int& ArrayLength) {
    arr[ArrayLength] = Number;
    ArrayLength++;
}

void InputElements(int arr[100], int& ArrayLength) {
    char answer; // Change type to char
    do {
        AddElements(readNumber(), arr, ArrayLength);
        cout << "Do You Want To Add More Elements? [N/n]: No / [Y/y]: YES\n";
        cin >> answer;
        // Convert the answer to lowercase
        answer = tolower(answer);
    } while (answer == 'y');
}

void printArray(int arr[100], int ArrayLength) {
    for (int i = 0; i < ArrayLength; i++) {
        cout << arr[i] << " "; // Added space between elements for better readability
    }
}

int main() {
    int arr[100] = { 0 }; // Initialize array elements to 0
    int arrLength = 0;
    InputElements(arr, arrLength);
    cout << "Array Length: " << arrLength << endl;
    cout << "Array Elements: \n";
    printArray(arr, arrLength);

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
