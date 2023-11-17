#include <iostream>
using namespace std;

void worksheetTaskSelect()
{
	char task;
	do
	{
		cout << "Which task would you like to run?" << endl;
	} while (task != 'Q');
}

void week1()
{
	int task = 10;

	do
	{
		cout << "Which task would you like to run:" << endl;
		cout << "0)\tQuit" << endl;
		cout << "1)\tHello world" << endl;
		cout << "2)\tUser Input" << endl;
		cin >> task;
		switch (task)
		{
			case 0:
				break;
			case 1:
				break;
			case 2:
				break;
		}
	} while (task != 0);
}

void weekSelect()
{
	char week;
	do
	{
		cout << "Which week would you like to choose from:" << endl;
		cout << "1)\tWeek 1" << endl;
		cout << "2)\tWeek 2" << endl;
		cout << "3)\tWeek 3" << endl;
		cout << "Q)\tQuit" << endl;
		cin >> week;

		switch (week)
		{
			case '1':
				week1();
				break;
			case '2':
				break;
			case '3':
				break;
			case 'q':
			case 'Q':
				break;
			default:
				cout << "Invalid input. Please try again.";
				break;
		}

	} while (week != 'Q' && week != 'q');
}

int main()
{
	weekSelect();
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
