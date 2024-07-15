// Main C++ file
//TODO: After the professor visits, make a bell sound ring signaling the end of the classroom portion of the tour.
//TODO: Then allow the user to end the simulation or to run it again using a loop. 
//TODO: potentially for loop if statements might miss outputing anything if user inputs something that's not a professor's name. consider making the "else" statement in the for loop a function. Call that function in the else, and prevent the future loop from running if it does (maybe with a boolean).



// Imports
#include <windows.h>
#include <mmsystem.h>
#include <iostream>
#include <string>

#pragma comment(lib, "winmm.lib")
using namespace std;


// Global Variables
string professors[10] =
{
    "Rawad Habib",
    "Craig Belanger",
    "Tony Hinton",
    "Jacob Hreshchyrshyn",
    "Dr. Daniel Pike",
    "Dr. Brendly Clark Singleton",
    "Blake Ratliff",
    "Dapzury Valenzuela",
    "Gabrielle Vosteen",
    "Dr. David Brokaw"
};


int main()
{
    // variables
    string guessedProfessor, chosenProfessor;
    int chosenProfessorIndex;

    // prints all professors
    cout << "Hello! Here are some of the professors you might have here at UAT:\n";
    for (int i = 0; i < 10; i++)
    {
        cout << "• " << professors[i] << endl;
    }

    // asks user to guess a professor
    cout << "Suprise! Today you're going to meet one of these professors. Who do you think it will be?\n";
    cout << "Your answer: ";
    getline(cin, guessedProfessor);

    // generates a random number between 0 and 9. this interger will represent the random professor
    srand(time(0));
    chosenProfessorIndex = rand() % 10;

    // gives a string to the chosen professor index
    chosenProfessor = professors[chosenProfessorIndex];

    // loops through professors array to figure out if the user chose the correct professor.
    for (int i = 0; i < 10; i++)
    {
        // when user's guess matches a name in the list...
        if (guessedProfessor == professors[i])
        {
            // ..checks if that name is the chosenProfessor
            if (guessedProfessor == chosenProfessor)
            {
                cout << "Congratulations! You've guessed right!.\n";
            }
            else
            {
                cout << "Sorry, but that wasn't the professor you were thinking of. The correct professor was: " << chosenProfessor << endl;
            }
        }
    }
    string bellSoundEffect = "bell-sound-effect.wav";

    // PlaySound(TEXT("bell-sound-effect.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
    cin >> bellSoundEffect; // TESTING so the terminal doesn't close
}

