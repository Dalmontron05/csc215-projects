/*
    Daljeet Singh
    Assignment 2.1: JUMANJI: Welcome to the Jungle with I / O
*/
// For this assignment, the user will roleplay as a job interviewee for the fictional SCP Foundation. Answer enough questions right, and you're hired.



// Imports
#include <iostream>
using namespace std;


// Global Variables
int correctAnswers = 0;


// Function Declarations
void question1(); void question2(); void question3(); void testResults();


int main()
{
    bool isHired = false;


    // Introduction
    cout << "WELCOME POTENTIAL FUTURE SCP FOUNDATION FACUALTY MEMBER.\n\n";
    cout << "This next step in the hiring process is a test to see how much you know about us and what we do. If you haven't already, please review our mission statement: https://scp-wiki.wikidot.com/about-the-scp-foundation\n\n";
    cout << "This test will be 3 questions. You must get at least 2 correct to pass. If you do pass, you're hired (this is our last step in the hiring process). If you don't, you will be administered class B anesthetics and returned home.\n\n";

    // Agreement to terms and conditions
    cout << "Do you agree to these terms? (y/n)\n";
    char agreement;
    cin >> agreement;

    if (agreement == 'y')
    {
        cout << "Then let's begin.\n\n\n";
        question1();
    }
    else if (agreement == 'n')
    {
        cout << "We're sorry to hear that. Remain where you are, we've sent security to properly escort you out.";
    }
    else
    {
        cout << "Invalid Input";
    }
}


void question1()
{
    string s, c, p;

    // Question 1
    cout << "What does the acrynom SCP stand for (no caps)?\n\n";

    cout << "The S stands for: ";
    cin >> s;

    cout << "The C stands for: ";
    cin >> c;

    cout << "The P stands for: ";
    cin >> p;

    if (s == "secure" && c == "contain" && p == "protect")
    {
        cout << "\nCorrect.";
        correctAnswers++;
    }
    else
    {
        cout << "\nIncorrect. SCP stands for secure, contain, and protect";
    }

    question2();
}


void question2()
{
    bool answer2 = true;

    // Question 2 https://scp-wiki.wikidot.com/object-classes
    cout << "\n\n\nTRUE OR FALSE? The 'Safe' object class means the SCP in question does not pose a threat\n";
    cin >> answer2;

    if (answer2 == false)
    {
        cout << "\nCorrect.";
        correctAnswers++;
    }
    else
    {
        cout << "\nIncorrect. The 'Safe' SCP object class designation only means that the SCP is relatively easy to contain. It has nothing to do with how much of a threat the SCP poses";
    }

    question3();
}


void question3()
{
    char answer3;

    // Question 3
    cout << "\n\n\nWhich of the following object class designations best describes an SCP that is used to contain another SCP? Enter the corresponding letter.\n\n";
    cout << "A) Thaumiel\n";
    cout << "B) Apollyon\n";
    cout << "C) Archon\n";
    cout << "D) Ticonderoga\n";

    cin.ignore();  // Clear the newline left in the buffer from the previous input
    cin >> answer3; // This should now properly capture the input

    if (answer3 == 'a')
    {
        cout << "Correct.";
        correctAnswers++;
    }
    else
    {
        cout << "Incorrect. The correct answer was Thaumiel.";
    }
    testResults();
}


void testResults()
{
    if (correctAnswers >= 2)
    {
        cout << "\n\n\nCongratulations! You successfully passed the test. Please wait for your interviewer to return to the room to finalize the process.";
    }
    else
    {
        cout << "\n\n\nYou have not passed the test. Remain where you are, we've sent security to properly escort you out.";
    }
}
