// Main C++ file
// cin.ignore(1000, '\n');


// Imports
#include <iostream>
#include <stdlib.h>

using namespace std;

// Global Variables
bool retry = false;

// Functions Declarations
char answer1(char x)
{
    switch (x)
    {
        case 'A':
            cout << "You walk through the front door. Upon your fifth step in, you hear a soft 'clunk' and feel your foot sink a bit lower then the floor. You look down, only to get decapitated by an anvil falling on your head.";
        case 'B':
            cout << "You vault through the nearby window. The room is dimly lit and dark, but you spot a keyhole in the wall. You try to open it.";
        case 'C':
            cout << "You rappel upwards and scale the structure. The room is dimly lit and dark, but you spot a keyhole in the wall. You try to open it.";
        default:
            cout << "Invalid choice.";
    }
}

char death()
{
    retry = true;
    cout << "Do you want to try again? (Y/N): ";
    char answer;
    cin >> answer;
    cin.ignore(1000, '\n');

    if (answer == 'y' || answer == 'Y')
    {
        
    }
    else
    {
        exit(0);
    }
}

int main()
{
    while (!retry)
    {
        cout << "Welcome to my Interactive Simulation Game! You'll play as John Marshell attempting to loot an ancient temple. Let's get started\n\n\n";

        cout << "You trample through a dark, damp forest. You've been searching for this temple for hours. They say that everyone who's dared to enter it, has never returned. But you're in a bit of a financial pinch. Whatever booby traps are waiting for you must be protecting something very valuable, and you're going to find it.\nYou hack through the dense vines and branches until you find it. The two story structure looks like it's had at least a century of errosion.\nYou approach it.\n\n";

        // Choice 1
        cout << "Do you...\n";
        cout << "A): Walk through the front door\n";
        cout << "B): Vault through a nearby window\n";
        cout << "C): Rappel upwards and scale the structure.\n";

        char choice1;
        cin >> choice1;
        cin.ignore(1000, '\n');
        answer1(choice1);
    }
}

