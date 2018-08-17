#include <iostream>

int main()
{
	//Creating and Assigning to Variables
	{
		int number;
		number = 23;
		std::cout << number << std::endl;
		number = 30;
		std::cout << number << std::endl;
		number = -12;
		std::cout << number << std::endl;
		number++;
		std::cout << number << std::endl;
		number = 10;
		std::cout << number << std::endl;
		std::cout << std::endl;
	}

	//Arithmetic Operators on Integer Variables
	{
		int numA;
		int numB;
		int sum;
		numA = 20;
		numB = 30;
		sum = numA + numB;
		std::cout << sum << std::endl;
		std::cout << std::endl;
	}

	//Aristhmetic Operators on Floating-Point Variables
	{
		float numC, numD, sumCD;
		numC = 13.12f;
		numD = 27.52f;
		sumCD = numC + numD;
		std::cout << sumCD << std::endl;
		std::cout << std::endl;
	}

	//Storing User Input in Integer Values
	{
		int userInput;
		std::cout << "Input a whole number: " << std::endl;
		std::cin >> userInput;
		std::cout << "You entered: " << userInput << std::endl;
	}

	//My Final Form
	//Exercise Guesses are commented out: 
	// A) 14
	{
		int numberA = 5;

		numberA = 9;
		numberA = 11;
		numberA = 14;

		std::cout << "A) " << numberA << std::endl;
	}
	// B) 9
	{
		int numberB = 10;
		numberB = 9;
		int thingB = 55;
		thingB = 22;
		std::cout << "B) " << numberB << std::endl;
	}
	// C) 21
	{
		int numberC = 3;
		numberC = 7;
		numberC = 1;
		int somethingC = 23;
		somethingC = 21;
		numberC = somethingC;
		std::cout << "C) " << numberC << std::endl;
	}
	// D) 3
	{
		int numberD = 1;
		int somethingD = 3;
		numberD = somethingD;
		std::cout << "D) " << somethingD << std::endl;
	}
	// E) 6
	{
		int x = 13;
		x = x / 2;
		std::cout << "E) " << x << std::endl;
	}
	// F) 6
	{
		float y = 13;
		y /= 2;
		std::cout << "F)" << y << std::endl;
		// Answer is 6.5, thought 
	}

	// Celsius to Fahrenheit)
	{
		float degCelsius = 78.0f;
		float degFahrenheit = 0.0f; // Modify this variable below.

		std::cout << "Input a temperature in degrees Celsius: " << std::endl;
		std::cin >> degCelsius;
		std::cout << "You inputted " << degCelsius << " degrees Celsius" << std::endl;

		degFahrenheit = (degCelsius * 1.8) + 32;
		std::cout << "That is equal to " << degFahrenheit << " degrees Fahrenheit" << std::endl;
		std::cout << "\n";

		std::cout << "Celsius to Fahrenheit)" << std::endl;
		std::cout << "Celsius: " << degCelsius << std::endl;
		std::cout << "Fahrenheit: " << degFahrenheit << std::endl;
	}

	// Area of a Rectangle)
	{
		float rectWidth = 0.0f; // Modify this variable below.
		float rectHeight = 0.0f; // Modify this variable below.
		float rectArea = 0.0f; // Modify this variable below.

		std::cout << "Input Width of Rectangle: \n";
		std::cin >> rectWidth;
		std::cout << "Input Height of Rectangle: \n";
		std::cin >> rectHeight;
		rectArea = rectWidth * rectHeight;

		std::cout << "Area of a Rectangle)" << std::endl;
		std::cout << "H: " << rectHeight << " , W: " << rectWidth << std::endl;
		std::cout << "Area: " << rectArea << std::endl;
	}

	// Average of Five)
	{
		float a, b, c, d, e; // Modify these variables below.
		float avg; // Modify this variable below.
		avg = a = b = c = d = e = 0.0f; // Initialize all to zero.
										// <Your work goes here>
		std::cout << "Input Value a \n";
		std::cin >> a;
		std::cout << "Input Value b \n";
		std::cin >> b;
		std::cout << "Input Value c \n";
		std::cin >> c;
		std::cout << "Input Value d \n";
		std::cin >> d;
		std::cout << "Input Value e \n";
		std::cin >> e;
		avg = (a + b + c + d + e) / 5;

		std::cout << "Average of Five)" << std::endl;
		std::cout << a << "," << b << "," << c << "," << d << "," << e << std::endl;
		std::cout << "avg: " << avg << std::endl;
	}


	// Number Swap)
	{
		int x = 13;
		int y = 24;
		// <Your work goes here>
		std::cout << "Input a Value for X\n" << std::endl;
		std::cin >> x;
		std::cout << "For X you chose " << x << std::endl;
		std::cout << "Input a Value for Y\n" << std::endl;
		std::cin >> y;
		std::cout << "For Y you chose " << y << std::endl;


		x = x + y; 
		y = x - y; 
		x = x - y; 

		std::cout << "Number Swap)" << std::endl;
		std::cout << "x is " << x << std::endl;
		std::cout << "y is " << y << std::endl;
	}

	// Fun Facts for Your Age)
	{
		int age = 0;
		int ageMonths = age * 12;
		float ageDecades = age / 10;
		int lifeJapan = 84 - age;
		int lifeUS = 79 - age;
		int lifeSierra = 50 - age;

		std::cout << "Howdy! You are " << age << " years old!\n";
		std::cout << "That's at least " << ageMonths << " months!\n";
		std::cout << "And " << ageDecades << " decades!\n";
		std::cout << "If you live in Japan, you can expect to live " << lifeJapan << " more years.";
		std::cout << "If you live in The United States, you can expect to live " << lifeUS << " more years.";
		std::cout << "If you live in Sierra Leone, you can expect to live " << lifeSierra << " more years.";
	}

	// Conforming to Conventions)
	{
		//From camel case to lower snake:
		int age;
		int bullet_count;
		float dog_years;
		int qty;
		float shield_value;
		float defense_matrix_cooldown;
		int red_armor_value;
		float red_armor_ratio;
		int happiness;
		int gandhi_aggression;
	}

	// The Right Tool for the Job)
	{
		int num; // integer
		float num2; // single precision floating point
		long num3;
		short num4;
		bool lightsOn;
		double num5;
		unsigned int num6;
		signed int num7;
		char a;
		long double ten;
	}

	system("pause");
}