// Main C++ file
// cin.ignore(1000, '\n');


// Imports
#include <iostream>
#include <stdlib.h>

using namespace std;


// Global Variables
bool retry = false;


// Functions
void choice2()
{
    // cout << "You reach the room and notice a staircase leading down. You decide to take the stairs. As you ascend, you hear a loud 'thud' and notice a door leading to the next floor.\n";
    // cout << "Do you...\n";
    // cout << "A): Go down the stairs\n";
    // cout << "B): Turn around and go back up\n";
}


bool senario1(char x)
{
    switch (x)
    {
        case 'a':
            cout << "You walk through the front door. Upon your third step in, you hear a soft 'clunk' and feel your foot sink a bit lower then the floor. You look down, only to get decapitated by an anvil falling on your head.\n\n";
            break;
        case 'b':
            cout << "It's pitch black on the other side. Your turn on your flashlight, but don't see anything amiss. You vault through, but your feet never make contact with the floor. You fall forward and smack your forehead against the edge of what appears to be a hole tucked right in front of the window. As you winced in pain, you couldn't manage to grab onto anything before plummeting to your death.\n\n";
            break;
        case 'c':
            cout << "You rappel upwards and scale the structure. You figured the temple was probably designed to be traveled through from bottom to top. So, if you could find an entrance on the roof, you could get right to the meat and potatoes. Unluckily, there wasn't. You slide down right above the window, and decide to go through there instead. Upon turning on your flashlight from your elevated position, you notice a narrow, but deep pit fall sneakily hidden right behind the window. You swing in through the window, barely missing the hole.\n\n";
            return true;
        default:
            cout << "Invalid choice.\n\n";
    }
    return false;
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


int main()
{
    cout << "Welcome to my Interactive Simulation Game! You'll play as John Marshell attempting to loot an ancient temple. Let's get started\n\n\n";

    cout << "You trample through a dark, damp forest. You've been searching for this temple for hours. They say that everyone who's dared to enter it, has never returned. But you're in a bit of a financial pinch. Whatever booby traps are waiting for you must be protecting something very valuable, and you're going to find it.\nYou hack through the dense vines and branches until you find it. The two story structure looks like it's had at least a century of errosion.\nYou approach it.\n\n";

    // Choice 1
    choice1();
}

