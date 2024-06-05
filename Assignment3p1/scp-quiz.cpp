/*
    Daljeet Singh
    Assignment 3.1: Loops
*/
// For this assignment, the user will roleplay as a job interviewee for the fictional SCP Foundation. Answer enough questions right, and you're hired.


//TODO: assignment 3.1 reqs
//TODO: tell user how many questions they got right in test results
//TODO: automatically fail the test once they can no longer pass



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
    cout << "------#+------+###----------------------------------###+------#+------            WELCOME POTENTIAL FUTURE" << endl;
    cout << "------#+------+###----------------------------------###+------#+------         SCP FONDATION FACUALTY MEMBER" << endl;
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

    question2();
}


void question2()
{
    char answer;

    // Question 2 https://scp-wiki.wikidot.com/object-classes
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

    question3();
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

