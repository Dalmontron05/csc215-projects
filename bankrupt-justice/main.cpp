// Main C++ file

// Imports
#include <iostream>
#include <stdlib.h>

using namespace std;


// Global Variables
int terroristAccount = 500000;
int joeAccount = 450;


// Function Declarations
void checkAccounts(); void swap();


int main()
{
    checkAccounts();
    cout << "\nWe will now swap the values of the terrorist organizations bank account with Joe's Coffee Shop bank account.\n" << endl;
    swap();
    checkAccounts();
}


void checkAccounts()
{
    cout << "Terrorist Account: $" << terroristAccount << endl;
    cout << "Joe's Account: $" << joeAccount << endl;
}


// swaps the values of two variables
void swap()
{
    int temp = terroristAccount;
    terroristAccount = joeAccount;
    joeAccount = temp;
}

