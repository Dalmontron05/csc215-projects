// Main C++ file



// Imports
#include <iostream>
#include <stdlib.h>

using namespace std;


// Global Variables
bool retry = false;


// Functions
bool senario2(char x)
{
    switch (x)
    {
        case 'a':
            cout << "Throwing any sense of common sense or self preservation out the window, you bolt straight to the corridor. By some miracle, you reach the corridor without triggering any traps. You take a second to catch your breath, wondering how you're still alive. It dawns on you that maybe the intended path from the temple makers really was to just go straight forward from the window. Who knows, all you know is that you made it.\n\n";
            return true;
        case 'b':
            cout << "You edge around a human-sized mousetrap, and shimmy around a weighted plate under an axe tied to the ceiling. You crawl against a wall, keeping low to avoid being within crossfire of the cannons sticking out the wall. Because of this, you can't shine the light as easily in front of you. Your hand ends up catching a tripwire, which detonates some explosives. Clearing that whole temple, and you, off the face of the earth.\n\n";
            return false;
        case 'c':
            cout << "You go back through the window to collect some stick and rocks. You head back, and use them to set off a human-sized mousetrap, some spikes traps, and an axe tied to the ceiling. You spend a few minutes throwing stuff trying to find a way to set off the cannons in the wall. Eventually, you throw a stick that catches on a tripwire, which blows the whole place up. Guess the dungenmakers were willing to destroy their own treasure if it fell into the wrong hands.\n\n";
            return false;
        default:
            cout << "Invalid choice.\n\n";
            return false;
    }
}


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


bool senario1(char x)
{
    switch (x)
    {
        case 'a':
            cout << "You walk through the front door. Upon your third step in, you hear a soft 'clunk' and feel your foot sink a bit lower then the floor. You look down, only to get decapitated by an anvil falling on your head.\n\n";
            return false;
        case 'b':
            cout << "It's pitch black on the other side. Your turn on your flashlight, but don't see anything amiss. You vault through, but your feet never make contact with the floor. You fall forward and smack your forehead against the edge of what appears to be a hole tucked right in front of the window. As you winced in pain, you couldn't manage to grab onto anything before plummeting to your death.\n\n";
            return false;
        case 'c':
            cout << "You rappel upwards and scale the structure. You figured the temple was probably designed to be traveled through from bottom to top. So, if you could find an entrance on the roof, you could get right to the meat and potatoes. Unluckily, there wasn't. You slide down right above the window, and decide to go through there instead. Upon turning on your flashlight from your elevated position, you notice a narrow, but deep pit fall sneakily hidden right behind the window. You swing in through the window, barely missing the hole.\n\n";
            return true;
        default:
            cout << "Invalid choice.\n\n";
            return false;
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


int main()
{
    cout << "Welcome to my Interactive Simulation Game! You'll play as John Marshell attempting to loot an ancient temple. Let's get started\n\n\n";

    cout << "You trample through a dark, damp forest. You've been searching for this temple for hours. They say that everyone who's dared to enter it, has never returned. But you're in a bit of a financial pinch. Whatever booby traps are waiting for you must be protecting something very valuable, and you're going to find it.\nYou hack through the dense vines and branches until you find it. The two story structure looks like it's had at least a century of errosion.\nYou approach it.\n\n";
    choice1();

    cout << "You look around the room and start to see why no-one else has came back. Everything your light touches reveals a gnarly looking trap, or remnants of a victim to said traps. You see a corridor directly ahead on the far side of the room";
    choice2();
}

