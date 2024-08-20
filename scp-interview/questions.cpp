// Imports
#include "questions.h"

#include <iostream>
#include <stdlib.h>

using namespace std;


// Functions
bool question1()
{
    string s, c, p;

    cout << "What does the acronym SCP stand for?\n\n";

    cout << "The S stands for: ";
    cin >> s;
    cin.ignore(1000, '\n');

    cout << "The C stands for: ";
    cin >> c;
    cin.ignore(1000, '\n');

    cout << "The P stands for: ";
    cin >> p;
    cin.ignore(1000, '\n');

    if ((s == "secure" ||  s == "Secure") && (c == "contain" || c == "Contain") && (p == "protect" || p == "Protect"))
    {
        cout << "\nCorrect.";
        return true;
    }
    else
    {
        cout << "\nIncorrect. SCP stands for Secure, Contain, and Protect";
    }
    return false;
}


void question2()
{
    char answer;

    cout << "\n\n\nThe 'Safe' object class means the SCP in question does not pose a threat\n";
    cout << "True or False? (enter 't' for true or 'f' for false): ";
    cin >> answer;
    cin.ignore(1000, '\n');

    if (answer == 'f' || answer == 'F')
    {
        cout << "\nCorrect.";
    }
    else
    {
        cout << "\nIncorrect. The 'Safe' SCP object class designation only means that the SCP is relatively easy to contain. It has nothing to do with how much of a threat the SCP poses";
    }
}


void question3()
{
    char answer;

    // Question 3
    cout << "\n\n\nWhich of the following object class designations best describes an SCP that is used to contain another SCP?\n\n";

    cout << "A) Thaumiel\n";
    cout << "B) Apollyon\n";
    cout << "C) Archon\n";
    cout << "D) Ticonderoga\n\n";

    cout << "Enter the corresponding multi-choice letter: ";
    cin >> answer;
    cin.ignore(1000, '\n');

    if (answer == 'A' || answer == 'a')
    {
        cout << "\nCorrect.";
    }
    else
    {
        cout << "\nIncorrect. The correct answer was Thaumiel.";
    }
}


void question4()
{
    int answer;

    cout << "What's the secret password?";
    cin >> answer;
    cin.ignore(1000, '\n');

    if (answer == 1234)
    {
        cout << "\nCorrect. Achievement unlocked! 'Tell me I'm not the most valuable member of this team.'";
    }
    else
    {
        cout << "\nIncorrect. Don't worry, that question was extra credit. I won't count it against you";
    }
}