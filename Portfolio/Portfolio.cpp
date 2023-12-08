#include <iostream>
using namespace std;

void leapYear()
{
	//Initialise variables
	int year;
	int fourRem;
	int hundredRem;
	int fourHunrem;

	//Take the user's input
	cout << "Enter the year: " << endl;
	cin >> year;

	//Perform necessary calculations
	fourRem = year % 4;
	hundredRem = year % 100;
	fourHunrem = year % 400;

	//Check if the year is a leap year
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
	//Initialise arrays
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
		//Take the user's input
		cout << "Enter a value for the array: " << endl;
		cin >> array[i];

		//Check if the user's input is odd
		if (array[i] % 2 == 1)
		{
			oddArray[oddArrayCurrentSize] = array[i];
			oddArrayCurrentSize++;
		}

		//Check if the user's input is a prime number
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

	//Output odd numbers and prime numbers
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
	//Initialise variables
	bool innerDoor;
	bool outerDoor;

	bool validInnerInput = false;
	bool validOuterInput = false;
	
	//Validate input for the innerDoor's state
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

	//Validate input for the outerDoor's state
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

	//Output the correct response
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
	//Initialise variables
	int value;
	int threeMod;
	int fiveMod;

	//Take the user's input
	cout << "Enter a number: " << endl;
	cin >> value;

	//Perform calcultions
	threeMod = value % 3;
	fiveMod = value % 5;

	system("cls");

	//Print the correct response
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
	//initialise variables
	int score = 0;
	int failedModules = 0;
	
	//Input the student's scores
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
	
	//Calculate the mean score
	score /= 6;
	cout << "The students average score is " << score << "%" << endl;
	
	//Calculate the student's grade
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

	//Check if the student has passed
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
	//Initialise variables
	int value1;
	int value2;
	char choice;

	//Take the user's inputs
	cout << "Enter the first value:" << endl;
	cin >> value1;

	cout << "Enter the second value:" << endl;
	cin >> value2;

	do
	{
		//Output the menu
		cout << "What do you want to do with the values" << endl;
		cout << "1 - Add them" << endl;
		cout << "2 - Multiply them" << endl;
		cout << "3 - Divide them" << endl;
		cout << "Q - Exit" << endl;

		//Take the user's input and perform the correct calculation
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

void typeSize()
{
	//Output the size of each data type
	cout << "The size of an int is: " << sizeof(int) << endl;

	cout << "The size of a char is: " << sizeof(char) << endl;

	cout << "The size of an unsigned int is: " << sizeof(unsigned) << endl;

	cout << "The size of a float is: " << sizeof(float) << endl;

	cout << "The size of a double is: " << sizeof(double) << endl;

	cout << "The size of a bool is: " << sizeof(bool) << endl;

	cout << "The size of a char* is: " << sizeof(char*) << endl;

	cout << "The size of an int* is: " << sizeof(int*) << endl;
}

void distanceBetweenPoints()
{
	int x1;
	int y1;

	int x2;
	int y2;

	int xDif;
	int yDif;

	cout << "Enter the first x coordinate: " << endl;
	cin >> x1;

	cout << "Enter the first y coordinate: " << endl;
	cin >> y1;

	cout << "Enter the second x coordinate: " << endl;
	cin >> x2;

	cout << "Enter the second y coordinate: " << endl;
	cin >> y2;

	xDif = x2 - x1;
	yDif = y2 - y1;

	float distance = sqrt(pow(xDif, 2) + pow(yDif, 2));

	cout << "The distance between the two points is " << distance << endl;
}

void reference()
{
	int a = 20;

	cout << "The memory address of a is " << &a << endl;
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
		cout << "7)\tPrint the size of each data type" << endl;
		cout << "8)\tCalculate the distance between 2 coordinates" << endl;
		cout << "9)\tCreate a variable and output its memory address" << endl;
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
			case '7':
				typeSize();
				break;
			case '8':
				distanceBetweenPoints();
				break;
			case '9':
				reference();
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
