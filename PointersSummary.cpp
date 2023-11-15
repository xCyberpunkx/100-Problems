// ProgrammingAdvices.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <cstdlib>
#include <ctime>
#include "OwnLibrary.h"
#include <vector>
using namespace std;
void swap(int* a, int* b) {
    int temp = 0;
    temp = *a;
    *a = *b;
   *b = temp;
}
struct stEmployee {
    string name;
    float salary;
};

int main() {
    
    int a = 9;
    cout << "a value: " <<a << endl;
    cout << "a value of the Adress pointing to: " << &a << endl;
    int* p = &a;
    cout << "Pointer Adress: " << p << endl;

    // dereferencing Pointer
    cout << "Pointer Value: " << *p << endl;

    // changing addresses during runtime
    int b = 420;
    p = &b;
    cout << *p << endl;

    // Changing Value using ptr
    *p = 20;
    cout << *p << endl;

    // changing value using var
    b = 30;
    cout << *p << endl;

    // swaping by ptr
    printf("PreSwap: \na = %d\nb = %d\n", a, b);
    swap(&a, &b);
    printf("PostSwap:\na = %d\nb = %d\n", a,b);

    // pointing to an arr 
    int arr[2] = { 1,2 };
    p = arr;
    cout << p << endl; // equiv of &arr[0]
    cout << p + 1 << endl; // equiv of &arr[1]

    // pointer arithmitic
        cout << *(p) << endl;
        cout << *(p + 1) << endl;

   // pointer & structure
        stEmployee employee,*ptr;

        employee.name = "Theo";
        employee.salary = 6900;

        ptr = &employee;

        cout << ptr->name << endl;
        cout << ptr->salary << endl;
        // void pointer
        float f = 10.5;
        int s = 50;
        void* PTR;
        PTR = &f;

        cout << *(static_cast<float*>(PTR)) << endl;
        PTR = &s;
        cout << *(static_cast<int*>(PTR)) << endl;

    
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
