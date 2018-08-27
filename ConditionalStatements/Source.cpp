#include <iostream>

int main()
{


	////Grading with If and Else If
	//{
	//	int grade;
	//	char gradeLetter;

	//	std::cout << "Input a grade value:\n";
	//	std::cin >> grade;

	//	if (grade >= 90)
	//		gradeLetter = 'A';
	//	else if (grade >= 80 && grade < 90)
	//		gradeLetter = 'B';
	//	else if (grade >= 70 && grade < 80)
	//		gradeLetter = 'C';
	//	else if (grade >= 60 && grade < 70)
	//		gradeLetter = 'D';
	//	else
	//		gradeLetter = 'F';

	//	std::cout << gradeLetter << std::endl;

	//}

	////FizzBuzz Multiples
	//{
	//	int input = 0;
	//	std::cout << "Fizzbuzz -- Enter a number:\n";
	//	std::cin >> input;

	//	if (input % 3 == 0 && input % 5 == 0)
	//	{
	//		std::cout << "FizzBuzz\n";
	//	}
	//	else if (input % 3 == 0)
	//	{
	//		std::cout << "Fizz\n";
	//	}
	//	else if (input % 5 == 0)
	//	{
	//		std::cout << "Buzz\n";
	//	}

	//}

	////Simple Calculator
	//{
	//	float num1, num2;
	//	char op;

	//	std::cout << "Enter two numbers: \n";
	//	std::cin >> num1 >> num2;
	//	std::cout << "Do you want to Add(+) or Subtract(-)?\n";
	//	std::cin >> op;

	//	switch (op)
	//	{
	//	case '+':
	//		std::cout << num1 + num2 << std::endl;
	//		break;
	//	case '-':
	//		std::cout << num1 - num2 << std::endl;
	//		break;
	//	default:
	//		std::cout << "Invalid input, need + or -";
	//		break;
	//	}

	//}

	////Is the Player Alive?
	//{
	//	int hp;

	//	std::cout << "Input current hp value:\n";
	//	std::cin >> hp;

	//	if (hp > 0)
	//	{
	//		std::cout << "You are alive.\n";

	//		if (hp < 25 && hp > 0)
	//		{
	//			std::cout << "You are in critical condition!\n";
	//		}

	//		std::cout << "You have " << hp << " health remaining.\n";
	//	}
	//	else
	//	{
	//		std::cout << "You are dead.\n";
	//	}

	//}

	// HOMEWORK 22AUGUST

	// 1 
	{
		int x, y;
		std::cin >> x >> y;

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
		int a, b, c, d, e;
		
		std::cout << "Please input 5 numbers:\n";
		std::cin >> a >> b >> c >> d >> e;
		
		if (a + b + c + d + e == 0)
		{
			std::cout << a << " " << b << " " << c << " " << d << " " << e;
		}

		if (a + b + c + d + e > 0)
		{
			if (a > b && a > c && a > d && a > e && b > c && b > d && b > e && c > d && c > e && d > e)
			{
				std::cout << a << " " << b << " " << c << " " << d << " " << e;
			}

			if (b > a && b > c && b > d && b > e && a > c && a > d && a > e && c > d && c > e && d > e)
			{
				std::cout << b << " " << a << " " << c << " " << d << " " << e;
			}
		}
	}

	// 4 Convert to switch
	{
		/*int choice;
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

		}*/
	}

	// 5 Convert to Ternary
	/*{
		int x, y;
		std::cout << "Enter two numbers: \n";
		std::cin >> x >> y;

		y = (x == 0) ? 0 : (10 / x);
	}*/

	// 6 Calculator

	{
		float num1, num2;
		char op;

		std::cout << "Enter two numbers: \n";
		std::cin >> num1 >> num2;
		std::cout << "Do you want to Add(+), Subtract(-), Divide (/) or Multiply(*)?\n";
		std::cin >> op;

		switch (op)
		{
		case '+':
			std::cout << num1 + num2 << std::endl;
			break;
		case '-':
			std::cout << num1 - num2 << std::endl;
			break;
		case '/':
			std::cout << num1 / num2 << std::endl;
			break;
		case '*':
			std::cout << num1 * num2 << std::endl;
			break;
		default:
			std::cout << "Invalid input, need +  , - , / , * \n";
			break;
		}
	}
	// 7 Month
	{
		int month;

		std::cout << "Enter a number for the month (1-12)";
		std::cin >> month;

		switch (month)
		{
		case 1:
			std::cout << "January has 31 days";
			break;
		case 2:
			std::cout << "February has 28 days, or 29 in a leap year";
			break;
		case 3:
			std::cout << "March has 31 days";
			break;
		case 4:
			std::cout << "April has 30 days";
			break;
		case 5:
			std::cout << "May has 31 days";
			break;
		case 6:
			std::cout << "June has 30 days";
			break;
		case 7:
			std::cout << "July has 31 days";
			break;
		case 8:
			std::cout << "August has 31 days";
			break;
		case 9:
			std::cout << "September has 30 days";
			break;
		case 10:
			std::cout << "October has 31 days";
			break;
		case 11:
			std::cout << "November has 30 days";
			break;
		case 12:
			std::cout << "December has 31 days";
			break;
		default:
			std::cout << "That is not a valid month";
				break;
		}

	}

	// 8 Declarations
	/*
	bool flag = true;
	int numPos = 35, numNeg = -55;
	char frstChar = 'J', scndChar = 'O';
	double frstPrice = 5.60;
	
	a. numPos > numNeg	-- True
	b. frstChar > scndChar -- False
	c. !(numPos + numNeg)  -- False
	d. (numPos == -30) || (numNeg == -55)  -- True
	e. (frstPrice >= 4.1) && (frstPrice <= 9.9)  -- True
	f. !flag &&(scndChar <= �R�)  -- False
	g. (numPos < 66) || (flag && numPos > 35) -- True
	h. ++numPos == 36  -- True
	i. numPos++ == 36  -- False
	j. (frstChar == �j�) || (frstChar == �J�)  -- True
	*/

	// 9 Evaluate
	/*
	a. (a || b) || (a && b)
			1		0
				1
	b. !((!a) && (a)) || (a && b)
		!((0) && (1))		0
		!(0)				0
		1					0
					1
	c. !((5 || a) || (!b)) && (!(a) && b)
		!((1) || (1)) && (0 && 0)
		0			&&      0
					0
	d. a || b && a
	   1 || 0
	      1

	e. !a&&b
		0
	
	a) True  b) True  c) False  d) True  e) False
	*/


	//Problem from in class, Count to Ten
/*
	{
	
		for (int countToTen = 1; countToTen < 11; countToTen++)
		{
			std::cout << countToTen;
		}


	}*/




	system("pause");


}