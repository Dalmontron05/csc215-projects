 //Assignment 2.1: JUMANJI: Welcome to the Jungle with I/O kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk



#include <iostream>
using namespace std;

int main()
{
	int time;
	cout << "Time?" << endl;
	cin >> time;

	if (time < 10)
	{
		cout << "Good moring.";
	}
	else if (time < 20)
	{
		cout << "Good day.";
	}
	else
	{
		cout << "Good evening.";
	}
}

