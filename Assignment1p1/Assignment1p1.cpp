/*
    Daljeet Singh
    05/20/2024
*/

// Imports
#include <iostream>
using namespace std;


// Runtime function
int main()
{
    string firstName, lastName;
    int age;


    cout << "Please enter your first name: " << endl;
    cin >> firstName;

    cout << "Please enter your last name: " << endl;
    cin >> lastName;

    cout << "How old are you?: " << endl;
    cin >> age;
    

    cout << "Your name is: " << firstName << " and your last name is " << lastName << " and you are " << age << " years old.";
}

