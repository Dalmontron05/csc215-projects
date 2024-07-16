// Main C++ file
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
    bool willRetake = false;

    do
    {
        // variables
        string guessedProfessor, chosenProfessor;
        int chosenProfessorIndex;
        char askToRetake = 'n';

        // prints all professors
        cout << "Hello! Here are some of the professors you might have here at UAT:\n";
        for (int i = 0; i < 10; i++)
        {
            cout << "• " << professors[i] << endl;
        }

        // asks user to guess a professor
        cout << "Suprise! Today you're going to meet one of these professors. Who do you think it'll be?: ";
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
                // checks if that name is the chosenProfessor
                if (guessedProfessor == chosenProfessor)
                {
                    cout << "That's right!.\n";
                }
                // if not, tells user who the correct professor was
                else
                {
                    cout << "Nope! Today you'll be seeing-"<< endl;
                }
            }
        }
        
        // plays a bell sound when the chosen professor is here.
        Beep(750, 100);
        cout << "Oh! They're here! That signifies this part of the tour. Enjoy your time with " << chosenProfessor << "!\n";

        // asks user if they want to try again
        cout << "Do you want to run the simulation again? (y/n): ";
        cin >> askToRetake;
        cin.ignore(1, '\n'); // why on gods green earth is this cin and getline bullshit so sensitive

        if (askToRetake == 'y')
        {
            willRetake = true;
        }
        else
        {
            willRetake = false;
        }
        
    } while (willRetake == true);
}

