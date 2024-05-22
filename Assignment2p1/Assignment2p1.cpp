// Assignment2p1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    string pokemonName;
    char pokemonGender;
    int pokemonLevel;
    double pokemonExpToNextLevel;


    cout << "Enter your pokemon name:" << endl;
    cin >> pokemonName;

    cout << "Are they male or female? (enter gender initial)" << endl;
    cin >> pokemonGender;

    cout << "What level are they?";
    cin >> pokemonLevel;

    cout << "What's their exp to the next level?";
    cin >> pokemonExpToNextLevel;

    cout << "Your pokemon's name is " + pokemonName << " and they have a gender initial of " << pokemonGender << " and they are level " << pokemonLevel << "With " << pokemonExpToNextLevel << "more exp left to go";
}

