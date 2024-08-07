// Main C++ file



// Imports
#include <iostream>
#include <stdlib.h>

#include "choices.h"
#include "choices.cpp"
#include "senarios.h"
#include "senarios.cpp"

using namespace std;


// Global Variables
bool retry = false;


int main()
{
    cout << "Welcome to my Interactive Simulation Game! You'll play as Joe Marshell attempting to loot an ancient temple. Let's get started\n\n\n";

    cout << "You trample through a dark, damp forest. You've been searching for this temple for hours. They say that everyone who's dared to enter it, has never returned. But you're in a bit of a financial pinch. Whatever booby traps are waiting for you must be protecting something very valuable, and you're going to find it.\nYou hack through the dense vines and branches until you find it. The two story structure looks like it's had at least a century of errosion.\nYou approach it.\n\n";
    choice1();

    cout << "You look around the room and start to see why no-one else has came back. Everything your light touches reveals a gnarly looking trap, or remnants of a victim to said traps. You see a corridor directly ahead on the far side of the room";
    choice2();

    cout << "You see something glimmer at the corridor end. You enroach a golden chest. Despite the dust it's collected, it's shine pierces through the darkness. You open it up to find sizable amounts of gold. You scramble to pick it up and hurry back home.\n\nCongratulations! You've reached the end";
}

