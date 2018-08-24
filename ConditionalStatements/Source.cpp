#include <iostream>

int main()
{


	//Grading with If and Else If
	{
		int grade;
		char gradeLetter;

		std::cout << "Input a grade value:\n";
		std::cin >> grade;

		if (grade >= 90)
			gradeLetter = 'A';
		else if (grade >= 80 && grade < 90)
			gradeLetter = 'B';
		else if (grade >= 70 && grade < 80)
			gradeLetter = 'C';
		else if (grade >= 60 && grade < 70)
			gradeLetter = 'D';
		else
			gradeLetter = 'F';

		std::cout << gradeLetter << std::endl;

	}

	//FizzBuzz Multiples
	{
		int input = 0;
		std::cout << "Enter a number:\n";
		std::cin >> input;

		if (input % 3 == 0 && input % 5 == 0)
		{
			std::cout << "FizzBuzz\n";
		}
		else if (input % 3 == 0)
		{
			std::cout << "Fizz\n";
		}
		else if (input % 5 == 0)
		{
			std::cout << "Buzz\n";
		}

	}

	//Simple Calculator
	{
		float num1, num2;
		char op;

		std::cout << "Enter two numbers: \n";
		std::cin >> num1 >> num2;
		std::cout << "Do you want to Add(+) or Subtract(-)?\n";
		std::cin >> op;

		switch (op)
		{
		case '+':
			std::cout << num1 + num2 << std::endl;
			break;
		case '-':
			std::cout << num1 - num2 << std::endl;
			break;
		default:
			std::cout << "Invalid input, need + or -";
			break;
		}

	}

	//Is the Player Alive?
	{
		int hp;

		std::cout << "Input current hp value:\n";
		std::cin >> hp;

		if (hp > 0)
		{
			std::cout << "You are alive.\n";

			if (hp < 25 && hp > 0)
			{
				std::cout << "You are in critical condition!\n";
			}

			std::cout << "You have " << hp << " health remaining.\n";
		}
		else
		{
			std::cout << "You are dead.\n";
		}

		system("pause");
	}

	// HOMEWORK 22AUGUST

	// 1 
	{
		int x, y;
		std::cin >> x, y;

		if (y == 0)
		{
			x = 100;
		}
	}

	// 2
	{
		int x, y;
		std::cout << "Enter two numbers: \n";
		std::cin >> x >> y;

		if (x > y)
		{
			std::cout << x;
		}
		else
		{
			std::cout << y;
		}

	}

	// 3
	{

	}

	// 4 Convert to switch
	{
		int choice;
		std::cin >> choice;

		switch (choice)
		{

		case 1:
		{
			std::cout << "1";
			break;
		}
		case 2:
		{
			std::cout << "2 or 3";
			break;
		}
		case 3:
		{
			std::cout << "2 or 3";
			break;
		}
		case 4:
		{
			std::cout << "4";
			break;
		}
		default:
		{
			std::cout << "Invalid";
			break;
		}

		}
	}

	// 5 Convert to Ternary
	{
		int x, y;
		std::cout << "Enter two numbers: \n";
		std::cin >> x >> y;

		int y = (x == 0) ? 0 : (10 / x);
	}

	// 6 Calculator

	// 7 Month

	// 8 Declarations

	// 9 Evaluate
	// testing









}