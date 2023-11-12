// ProgrammingAdvices.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <cstdlib>
#include <ctime>
#include "OwnLibrary.h"
using namespace std;

int RandomNumber(int From, int To) {
    int Randnum = rand() % (To - From + 1) + From;
    return Randnum;
}

void FillArrayWithRandomNumbers(int& NumberOfElements, int array[]) {
    for (int i = 0; i < NumberOfElements; i++) {
        array[i] = RandomNumber(1, 100);
    }
    cout << endl;
}

void GetTarget(int& target) {
    cout << "Enter The number You want to search for: \n";
    cin >> target;
}
void PrintArray(int NumberOfElements, int array[]) {

    cout << "Array Elements: ";
    for (int i = 0; i < NumberOfElements; i++) {

        cout << array[i] << " ";
    }
    cout << endl;
}

void searchingAlgorithm(int arraylength, int arr[], int target) {
    for (int i = 0; i < arraylength; i++) {
        if (target == arr[i]) {
            printf("Target You are looking for is: %d\n", target);
            printf("Found At Position: %d\n", i);
            printf("Found At Order : %d\n", i + 1);
        }
    }
}

int main() {
    srand((unsigned)time(NULL));
    int arr[100], arrayLength, target;

    arrayLength = lib::readPositiveNumber("Enter Array Length");
    FillArrayWithRandomNumbers(arrayLength, arr);
    PrintArray(arrayLength, arr);
    GetTarget(target);
    searchingAlgorithm(arrayLength, arr, target);

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
