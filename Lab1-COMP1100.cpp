#include "stdafx.h"
#include <iostream>
using namespace std;

//   Lab ex#1: Intro to C++ 
//               Name: Ashley Bronzan
//   Purpose: Rearrange the cout statements below to print as requested 


int main()
{

	/*
		Had to change spacing of the first 8 lines or so or else the top half of the bear would look weird
	*/

	cout << "                      ,---.           ,---." << endl;
	cout << "                    / /\"`.\\.--\"\"\"--./,'\"\\ \\" << endl;
	cout << "                    \\ \\    _      _     / /" << endl;
	cout << "                     `./  / __   __ \\  \\,'" << endl;
	cout << "                      /    /_O)_(_O\\    \\" << endl;
	cout << "                     |  .-'  ___  `-.  |" << endl;
	cout << "                     --|       \\_/       |--." << endl;
	cout << "                ,'    \\   \\   |   /   /    `" << endl;
	cout << "                 /       `.  `--^--'  ,'       \\" << endl;
	cout << "             .-\"\"\"\"\"      `-- .___.--'    .-\"\"\"\"\"-." << endl;
	cout << ".-----------/         \\------------------/         \\--------------." << endl;
	cout << "| .---------\\         /----------------- \\         /------------. |" << endl;
	cout << "| |--------- `-`--`--'   ------====-----  `--'--'-' ------------| |" << endl;
	cout << "| |------------------------=============------------------------| |" << endl;
	cout << "| |--------------------====Lab Exercise#1===--------------------| |" << endl;
	cout << "| |-----------------------===============-----------------------| |" << endl;
	cout << "| |--------------------------========---------------------------| |" << endl;
	cout << "| |                                                             | |" << endl;
	cout << "| | Your task:                                                  | |" << endl;
	cout << "| | Help me. I am upside down. Please rearrange the cout        | |" << endl;
	cout << "| | statements to have my feet appear below and my head over    | |" << endl;
	cout << "| | top.  Don't change the cout statements, just copy and paste | |" << endl;
	cout << "| | them.                                                       | |" << endl;
	cout << "| | Show me your completed bear.                                | |" << endl;
	cout << "| |_____________________________________________________________| |" << endl;
	cout << "|_________________________________________________________________|" << endl;
	cout << "                    )__________|_ _|_________(" << endl;
	cout << "                   |            ||            |" << endl;
	cout << "                   |____________||____________|" << endl;
	cout << "                     ),-----.(      ),-----.(" << endl;
	cout << "                    ,'   ==.  \\    /  .==   `." << endl;
	cout << "                   (           )  (           )" << endl;
	cout << "                   `==========='  `==========='" << endl;
	cout << endl << endl;
	cout << "Try to make some artwork of your own.  Here's my kitten: ";
	cout << ".^=";
	cout << " =^.";
	cout << endl << endl;


	cout << "__________           ._____________    " << endl;
	cout << "\\______   \\ ____   __| _/\\______   \\ ____   ____  __ __   ____  " << endl;
	cout << " |       _// __ \\ / __ |  |       _//  _ \\ / ___\\|  |  \\_/ __ \\ " << endl;
	cout << " |    |   \\  ___// /_/ |  |    |   (  <_> ) /_/  >  |  /\\  ___/ " << endl;
	cout << " |____|_  /\\___  >____ |  |____|_  /\\____/\\___  /|____/  \\___  >" << endl;
	cout << "        \\/     \\/     \\/         \\/      /_____/             \\/ " << endl;
	cout << endl << endl;



	cout << "Hello" << endl;
	cout << "World" << endl;

	int i = 0;
	float f = 0;

	/*
		b. Build a program to   read an integer  from  the input console and store in an integer variable. Output the integer value
	*/
	cout << "Please enter an integer value: ";
	cin >> i;

	cout << "You entered: " << i << endl << endl;

	/*
		c.    Build a program to   read a  float  from the  input console and store in a float variable. Output the float value
	*/

	cout << "Please enter a float value: ";
	cin >> f;

	cout << "You entered: " << f << endl << endl;


	/*
		d.    Build a program to ask the user to input two float values and out put the sum, multiplication and subtraction  of the two values
	*/

	float f1 = 0;
	float f2 = 0;

	cout << "Please enter the first float value: ";
	cin >> f1;

	cout << "Please enter the second float value: ";
	cin >> f2;

	cout << f1 << " + " << f2 << " = " << (f1 + f2) << endl << endl;
	cout << f1 << " * " << f2 << " = " << (f1 * f2) << endl << endl;
	cout << f1 << " - " << f2 << " = " << (f1 - f2) << endl << endl;

	system("pause");
}