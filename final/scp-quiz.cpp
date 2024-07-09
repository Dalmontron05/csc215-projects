// Main C++ file

//! first cin character just straight up is ignored
//TODO: tell user how many questions they got right and left in test results and constantly on their screen while test taking (you can do this by making a function that checks how many question are correct so far)
//TODO: automatically fail the test once they can no longer pass (maybe have functions return something?)
//TODO: add achievments (like the "tell me i'm not the most valuable member of this team" thing from that one scp movie)
//TODO: make terminal colored
//TODO: make introduction not have to be repeated after failing the quiz
//TODO: make one of the questions with an askii image art



// Imports
#include <iostream>
using namespace std;


// Global Variables
int achievements, totalAchievments = 1;
int correctAnswers = 0, totalQuestions = 4;
bool willRetakeTest = false;
string firstName, lastName;


// Function Declarations
void introduction(); void question1(); void question2(); void question3(); void question4(); void testResultsAndRetry();


int main()
{
    cout << "Hello! This project is a fictional job interview process for the fictional SCP organization. \nIf you're already aware of what it is, you'll be able to express your SCP trivia knowledge. If not, you'll find out everything you need to know about them in the wiki: https://scp-wiki.wikidot.com/about-the-scp-foundation" << endl;

    cout << "Are you ready? (y/n)\n";
    char agreement;
    cin.ignore();
    cin >> agreement;
    do
    {
        // main 'quiz taking state' of the loop lives here
        if (agreement == 'y')
        {
            cout << "Then let's begin.\n\n\n";
            introduction();
            question1();
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
    cin.ignore();
    cin >> firstName;

    cout << "Last Name: ";
    cin.ignore();
    cin >> lastName;


    cout << "\nHello " << firstName << ", Welcome to the SCP Foundation's hiring process.\n";


    cout << "Do to the secrecy of this organization, we will access how prepared you came to this interview with some trivia about us.\n\n";
}


void question1()
{
    string s, c, p;

    cout << "What does the acronym SCP stand for?\n\n";

    cout << "The S stands for: ";
    cin.ignore();
    cin >> s;

    cout << "The C stands for: ";
    cin.ignore();
    cin >> c;

    cout << "The P stands for: ";
    cin.ignore();
    cin >> p;

    if ((s == "secure" ||  s == "Secure") && (c == "contain" || c == "Contain") && (p == "protect" || p == "Protect"))
    {
        cout << "\nCorrect.";
        correctAnswers++;
    }
    else
    {
        cout << "\nIncorrect. SCP stands for Secure, Contain, and Protect";
    }
}


void question2()
{
    char answer;

    cout << "\n\n\nThe 'Safe' object class means the SCP in question does not pose a threat\n";
    cout << "True or False? (enter 't' for true or 'f' for false): ";
    cin.ignore();
    cin >> answer;

    if (answer == 'f' || answer == 'F')
    {
        cout << "\nCorrect.";
        correctAnswers++;
    }
    else
    {
        cout << "\nIncorrect. The 'Safe' SCP object class designation only means that the SCP is relatively easy to contain. It has nothing to do with how much of a threat the SCP poses";
    }
}


void question3()
{
    char answer;

    // Question 3
    cout << "\n\n\nWhich of the following object class designations best describes an SCP that is used to contain another SCP?\n\n";

    cout << "A) Thaumiel\n";
    cout << "B) Apollyon\n";
    cout << "C) Archon\n";
    cout << "D) Ticonderoga\n\n";

    cout << "Enter the corresponding multi-choice letter: ";
    cin.ignore();
    cin >> answer;

    if (answer == 'A' || answer == 'a')
    {
        cout << "\nCorrect.";
        correctAnswers++;
    }
    else
    {
        cout << "\nIncorrect. The correct answer was Thaumiel.";
    }
}


void question4()
{
    int answer;

    cout << "What's the secret password?";
    cin.ignore();
    cin >> answer;

    if (answer == 1234)
    {
        cout << "\nCorrect. Achievement unlocked! 'Tell me I'm not the most valuable member of this team.'";
        correctAnswers++;
    }
    else
    {
        cout << "\nIncorrect. Don't worry, that question was extra credit. I won't count it against you";
    }
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
    else
    {
        cout << "\n\n\nYou have not passed the test. Would you like to try again? (y/n";
        cin.ignore();
        cin >> tempRetry;


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
}

