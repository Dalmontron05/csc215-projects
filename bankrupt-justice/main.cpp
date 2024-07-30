// Main C++ file

// Imports
#include <iostream>
#include <stdlib.h>

using namespace std;


// Global Variables
int terroristAccount = 500000;
int joeAccount = 450;


// Function Declarations
void checkAccounts();

// swaps the values of two variables
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}


int main()
{
    checkAccounts();
    cout << "\nWe will now swap the values of the terrorist organizations bank account with Joe's Coffee Shop bank account.\n" << endl;
    swap(&terroristAccount, &joeAccount);
    checkAccounts();
}


void checkAccounts()
{
    cout << "Terrorist Account: $" << terroristAccount << endl;
    cout << "Joe's Account: $" << joeAccount << endl;
}


