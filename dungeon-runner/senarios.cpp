// Imports
#include "senarios.h"

#include <iostream>
#include <stdlib.h>

using namespace std;


// Functions
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

