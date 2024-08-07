// Imports
#include "choices.h"
#include "senarios.h"

#include <iostream>
#include <stdlib.h>

using namespace std;


// Functions
void choice2()
{
    cout << "Do you...\n";
    cout << "A): Sprint straight to it\n";
    cout << "B): Slowly tip toe your way around the traps\n";
    cout << "C): Throw things around the room to try to trigger the traps from a safe distance\n";

    char answer;
    cin >> answer;
    cin.ignore(1000, '\n');

    bool isCorrect = senario2(answer);

    if (!isCorrect)
    {
        cout << "You died, better luck next time!";
        exit(0);
    }
}


void choice1()
{
    cout << "Do you...\n";
    cout << "A): Walk through the front door\n";
    cout << "B): Vault through a nearby window\n";
    cout << "C): Rappel upwards and scale the structure.\n";

    char answer;
    cin >> answer;
    cin.ignore(1000, '\n');

    bool isCorrect = senario1(answer);

    if (!isCorrect)
    {
        cout << "You died, better luck next time!";
        exit(0);
    }
}