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

void oddsAndPrimes()
{
	int size;
	cout << "How big do you want the final array to be?" << endl;
	cin >> size;
	int array[100];

	int oddArray[100];
	int oddArrayCurrentSize = 0;

	int primeArray[100];
	int primeArrayCurrentSize = 0;

	for (int i = 0; i < size; i++)
	{
		cout << "Enter a value for the array: " << endl;
		cin >> array[i];

		if (array[i] % 2 == 1)
		{
			oddArray[oddArrayCurrentSize] = array[i];
			oddArrayCurrentSize++;
		}

		if (array[i] != 0 && array[i] != 1)
		{
			if (array[i] == 2)
			{
				primeArray[primeArrayCurrentSize] = array[i];
				primeArrayCurrentSize++;
			}
			else
			{
				bool isPrime = true;

				for (int j = 2; j <= array[i] / 2; j++)
				{
					if (array[i] % j == 0)
					{
						isPrime = false;
						break;
					}
				}

				if (isPrime == true)
				{
					primeArray[primeArrayCurrentSize] = array[i];
					primeArrayCurrentSize++;
				}
			}
		}
	}

	system("cls");

	cout << "The odd numbers in the array are: " << endl;
	for (int i = 0; i < oddArrayCurrentSize; i++)
	{
		cout << oddArray[i] << ", ";
	}
	cout << endl;

	cout << "The prime numbers in the array are: " << endl;
	for (int i = 0; i < primeArrayCurrentSize; i++)
	{
		cout << primeArray[i] << ", ";
	}
	cout << endl;
}

void catDoor()
{
	bool innerDoor;
	bool outerDoor;

	bool validInnerInput = false;
	bool validOuterInput = false;
	
	do
	{
		cout << "Is the inner door closed? (Y/N)" << endl;
		
		char choice;
		cin >> choice;
		switch (choice)
		{
			case 'y':
			case 'Y':
				innerDoor = true;
				validInnerInput = true;
				break;
			case 'n':
			case 'N':
				innerDoor = false;
				validInnerInput = true;
				break;
			default:
				cout << "Invalid Input. please try again." << endl;
		}

	} while (validInnerInput == false);

	do
	{
		cout << "Is the outer door closed? (Y/N)" << endl;

		char choice;
		cin >> choice;
		switch (choice)
		{
		case 'y':
		case 'Y':
			outerDoor = true;
			validOuterInput = true;
			break;
		case 'n':
		case 'N':
			outerDoor = false;
			validOuterInput = true;
			break;
		default:
			cout << "Invalid Input. please try again." << endl;
		}

	} while (validOuterInput == false);

	if (outerDoor == false && innerDoor == false)
	{
		cout << "The cat has escaped!" << endl;
	}
	else
	{
		cout << "The cat is still inside." << endl;
	}
}

void fizzBuzz()
{
	int value;
	int threeMod;
	int fiveMod;

	cout << "Enter a number: " << endl;
	cin >> value;

	threeMod = value % 3;
	fiveMod = value % 5;

	system("cls");

	if (threeMod == 0 && fiveMod == 0)
	{
		cout << "Fizz buzz" << endl;
	}
	else
	{
		if (threeMod == 0)
		{
			cout << "Fizz" << endl;
		}
		else if (fiveMod == 0)
		{
			cout << "Buzz" << endl;
		}
		else
		{
			cout << value << endl;
		}
	}
}

void computeGrade()
{
	int score = 0;
	int failedModules = 0;
	
	for (int i = 0; i < 6; i++)
	{
		cout << "Enter the student's score for this module: " << endl;
		int moduleScore;
		cin >> moduleScore;
		if (moduleScore < 40)
		{
			failedModules++;
		}
		score += moduleScore;
	}
	
	score /= 6;
	cout << "The students average score is " << score << "%" << endl;
	
	if (score >= 85)
	{
		cout << "The students average grade is an A*" << endl;
	}
	 else if (score >= 70 && score <= 84)
	{
		cout << "The students average grade is an A" << endl;
	}
	else if (score >= 60 && score <= 69)
	{
		cout << "The students average grade is a B" << endl;
	}
	else if (score >= 50 && score <= 59)
	{
		cout << "The students average grade is a C" << endl;
	}
	else if (score >= 40 && score <= 49)
	{
		cout << "The students average grade is a D" << endl;
	}
	else if (score >= 39 && score <= 30)
	{
		cout << "The students average grade is an E" << endl;
	}
	else if (score <= 29)
	{
			cout << "The students average grade is a F" << endl;
	}

	if (failedModules == 0)
	{
		cout << "The student has not failed any modules and has passed the year" << endl;
	}
	else
	{
		cout << "The student has failed " << failedModules << " modules and has not passed the year" << endl;
	}
}

void userInput()
{
	int value1;
	int value2;
	char choice;

	cout << "Enter the first value:" << endl;
	cin >> value1;

	cout << "Enter the second value:" << endl;
	cin >> value2;

	do
	{
		cout << "What do you want to do with the values" << endl;
		cout << "1 - Add them" << endl;
		cout << "2 - Multiply them" << endl;
		cout << "3 - Divide them" << endl;
		cout << "Q - Exit" << endl;

		cin >> choice;
		system("cls");
		int total;
		switch (choice)
		{
		case 'q':
		case 'Q':
			break;
		case '1':
			total = value1 + value2;
			cout << value1 << " + " << value2 << " = " << total << endl;
			break;
		case '2':
			total = value1 * value2;
			cout << value1 << " * " << value2 << " = " << total << endl;
			break;
		case '3':
			total = value1 / value2;
			cout << value1 << " / " << value2 << " = " << total << endl;
			break;
		default:
			cout << "That is not a valid option" << endl;
			break;
		}

	} while (choice != 'Q' && choice != 'q');

	cout << "You have quit the program" << endl;
}

void worksheetTaskSelect()
{
	char task;
	do
	{
		cout << "Which task would you like to run?" << endl;
		cout << "1)\tCalculate if a given year is a leap year" << endl;
		cout << "2)\tGive a list of numbers and return odd and prime numbers from the list" << endl;
		cout << "3)\tCat Door" << endl;
		cout << "4)\tFizz Buzz" << endl;
		cout << "5)\tCalculate a students grade based on a total of 6 modules" << endl;
		cout << "6)\tTake an input of 2 numbers and perform a calculation of the user's choice" << endl;
		cout << "Q)\tQuit" << endl;
		cin >> task;
		system("cls");
		switch (task)
		{
			case '1':
				leapYear();
				break;
			case '2':
				oddsAndPrimes();
				break;
			case '3':
				catDoor();
				break;
			case '4':
				fizzBuzz();
				break;
			case '5':
				computeGrade();
				break;
			case '6':
				userInput();
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
