#include <iostream>
using namespace std;

void leapYear()
{
	int year;
	int fourRem;
	int hundredRem;
	int fourHunrem;

	cout << "Enter the year: " << endl;
	cin >> year;

	fourRem = year % 4;
	hundredRem = year % 100;
	fourHunrem = year % 400;

	if ((fourRem == 0 && hundredRem != 0) || (hundredRem == 0 && fourHunrem == 0))
	{
		cout << "The year is a leap year" << endl;
	}

	else
	{
		cout << "The year is not a leap year" << endl;
	}

}

void worksheetTaskSelect()
{
	char task;
	do
	{
		cout << "Which task would you like to run?" << endl;
		cout << "1)\tCalculate if a given year is a leap year" << endl;
		cout << "Q)\tQuit" << endl;
		cin >> task;
		switch (task)
		{
			case '1':
				leapYear();
				break;
			case 'q':
			case 'Q':
				break;
			default:
				cout << "Invalid Input. Please try again." << endl;
				break;
		}
	} while (task != 'Q' && task != 'q');
}

int main()
{
	worksheetTaskSelect();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
