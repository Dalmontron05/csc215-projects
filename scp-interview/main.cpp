// Main C++ file

//TODO: seperate everything out into files and classes

//TODO: "status bar" at the top of the terminal that shows how many questions you've answered, how many you've gotten right, and how many achievments you have.
//TODO: tell user how many questions they got right and left in test results and constantly on their screen while test taking (you can do this by making a function that checks how many question are correct so far)
//TODO: automatically fail the test once they can no longer pass (maybe have functions return something?)
//TODO: add achievments (like the "tell me i'm not the most valuable member of this team" thing from that one scp movie)
//TODO: make terminal colored (ANSI escape code)
//TODO: make introduction not have to be repeated after failing the quiz
//TODO: make one of the questions with an askii image art
//TODO: make obnoxious ding and buzzer sound effects depending on what the user answers on a per questio basis



// Imports
#include <iostream>
#include <stdlib.h>

#include "questions.h"
#include "questions.cpp"

using namespace std;


// Global Variables
int achievements, totalAchievments = 1;
int correctAnswers = 0, totalQuestions = 4;
bool willRetakeTest = false;
string firstName, lastName;


// Function Declarations
void introduction(); void testResultsAndRetry();

class Results
{
    public:
        bool q1, q2, q3, q4;// q representions "questions"
};


int main()
{
    Results answers;
    cout << "Hello! This project is a fictional job interview process for the fictional SCP organization. \nIf you're already aware of what it is, you'll be able to express your SCP trivia knowledge. If not, you'll find out everything you need to know about them in the wiki: https://scp-wiki.wikidot.com/about-the-scp-foundation" << endl;

    cout << "Are you ready? (y/n)\n";
    char agreement;
    cin >> agreement;
    cin.ignore(1000, '\n');
    do
    {
        // main 'quiz taking state' of the loop lives here
        if (agreement == 'y')
        {
            cout << "Then let's begin.\n\n\n";
            introduction();
            answers.q1 = question1();
            question2();
            question3();
            question4();
            testResultsAndRetry();
        }
        else
        {
         cout << "Exiting...";
        }
    } while ( willRetakeTest == true );
}


void introduction()
{
    cout << "----------------------------------------------------------------------" << endl;
    cout << "----------------------------------------------------------------------" << endl;
    cout << "-------------------------+##################--------------------------" << endl;
    cout << "------------------------.#----------------.##-------------------------" << endl;
    cout << "-------------------------#------------------#-------------------------" << endl;
    cout << "------------------------#+------------------##------------------------" << endl;
    cout << "---------------------###----------------------###---------------------" << endl;
    cout << "------------------##-----------------------------+##------------------" << endl;
    cout << "----------------##-.-------------###+.------------.-##----------------" << endl;
    cout << "--------------##---------.--+############+-.----------##--------------" << endl;
    cout << "------------##----------+####################+----------#+------------" << endl;
    cout << "-----------#+---------######-----###+----+######---------##-----------" << endl;
    cout << "----------#+--------#####--------###+--------#####--------+#----------" << endl;
    cout << "---------#--------#####..-------.###+--------.-####+-------+#---------" << endl;
    cout << "--------#+.----.-####------------####------------####-------##--------" << endl;
    cout << "-------##------.####-----------#######+-----------####-------#--------" << endl;
    cout << "-------#+-----.+###-------------#####+.------------###-------##-------" << endl;
    cout << "-------#-------###---------------####-------------.+###.------#-------" << endl;
    cout << "------+#------+###----------------#+----------------###-------#+------" << endl;
    cout << "------#+------+###----------------------------------###+------#+------            Secure, Contain," << endl;
    cout << "------#+------+###----------------------------------###+------#+------                Protect" << endl;
    cout << "------#-.-----+###------------++#+--#+++------------###--------#------" << endl;
    cout << "-----#+--------###-.-----+#######----#######------.+###--------##-----" << endl;
    cout << "---##---------.+###------#######-.----#######------###-----------##---" << endl;
    cout << "-+#-------------####--#########--------#########--####.------------##-" << endl;
    cout << "--#+-------------########-.--#----------#----########-------------+#--" << endl;
    cout << "---#+-----------#######------------------------#######----------.+#---" << endl;
    cout << "----##----------###+#####--------------------#####+###----------##----" << endl;
    cout << "-----##---------------######--------------######---------------##-----" << endl;
    cout << "------##----------------#####################+----------------##------" << endl;
    cout << "-------##-------------------##############-------------------##-------" << endl;
    cout << "--------+#----.---------------------------------------------#+--------" << endl;
    cout << "--------.-#####++##+.------------------------------#########----------" << endl;
    cout << "--------------------####---.------------------+###----...-------------" << endl;
    cout << "-------------------------####+---.------+####+------------------------" << endl;
    cout << "--------------------------------+####+--------------------------------" << endl;
    cout << "----------------------------------------------------------------------" << endl;
    cout << "----------------------------------------------------------------------" << endl << endl; 


    // Asks for name
    cout << "Enter your name\n";
    cout << "First Name: ";
    cin >> firstName;
    cin.ignore(1000, '\n');

    cout << "Last Name: ";
    cin >> lastName;
    cin.ignore(1000, '\n');


    cout << "\nHello " << firstName << ", Welcome to the SCP Foundation's hiring process.\n";


    cout << "Do to the secrecy of this organization, we will access how prepared you came to this interview with some trivia about us.\n\n";
}





void testResultsAndRetry()
{
    char tempRetry;
    // Results
    if (correctAnswers >= 2)
    {
        cout << "\n\n\nCongratulations! You successfully passed the test.";
        willRetakeTest = false;
    }
        cout << "\n\n\nWould you like to try again? (y/n)";
        cin >> tempRetry;
        cin.ignore(1000, '\n');


        // Retry
        if (tempRetry == 'y')
        {
            willRetakeTest = true;
        }
        else
        {
            willRetakeTest = false;
        }
}

