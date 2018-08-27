#include <iostream>

int main()
{
	//While loop counting 1 to 10 with commas
	/*{


		int i = 1;
		while (i <= 10)
		{
			std::cout << i;
			i++;

			if (i <= 10)
			{
				std::cout << ", ";
			}

			if (i > 10)
			{
				std::cout << std::endl;
				break;
			}


		}

		system("pause");

	}*/

	//using do while loop, Print Game is Running as long as user does not input q or Q

	/*{
		char input;

		do
		{
			std::cout << "Press Q or q to exit application\n";
			std::cin >> input;
		} 
		while (input != 'q' && input != 'Q');
	}*/

	//For loop, printing even numbers
	/*{
		int i;
		for (i = 0; i <= 10; i += 2)
		{
			std::cout << i;

			if (i <= 10)
			{
				std::cout << ", ";
			}

			if (i > 10)
			{
				std::cout << std::endl;
				break;
			}
		}




	}*/

	// Loops Hwk
	// Exercise 1


	{
		int i;
		for (i = 100; i > 0; i--)
		{
			std::cout << i << " ";
		}
		std::cout << std::endl;
	}

	{
		int i;
		for (i = 100; i >= 0; i--)
		{
			std::cout << i << " ";
		}
		std::cout << std::endl;
	}

	{
		int i;
		for (i = 99; i >= 0; i--)
		{
			std::cout << i << " ";
		}
		std::cout << std::endl;
	}

	{
		int i;
		for (i = 100; i > 0; i--)
		{
			std::cout << i << " ";
		}
		std::cout << std::endl;
	}

	{
		int i;
		for (i = 100; i >= 0; i-=2)
		{
			std::cout << i << " ";
		}
		std::cout << std::endl;
	}

	// Exercise 2

	{
		int i = 0;
		for (i = 0; i <= 100; i++)
		{
			if (i % 3 == 0 && i % 5 == 0)
			{
				std::cout << "FizzBuzz ";
			}
			else if (i % 3 == 0 )
			{
				std::cout << "Fizz ";
			}
			else if (i % 5 == 0)
			{
				std::cout << "Buzz ";
			}
			else
			{
				std::cout << i << " ";
			}
		}

		std::cout << std::endl;
	}


	// Exercise 3
	{
		int i = 0;
		int sum = 0;
		for (i = 0; i <= 1000; i++)
		{
			if (i % 3 == 0 || i % 5 == 0)
			{
				sum = sum + i;
			}
		}
		std::cout << "The sum of all multiples of 3 and 5 from 0 to 1000 is " << sum << ". \n";
	}

	//Exercise 4
	{
		int i = 100;
		while (i >= 0)
		{
			std::cout << i << " ";
			i--;


			if (i < 0)
			{
				std::cout << std::endl;
				break;
			}
		}
	}

	{
		int i = 99;
		while (i >= 0)
		{
			std::cout << i << " ";
			i--;


			if (i < 0)
			{
				std::cout << std::endl;
				break;
			}
		}
	}

	{
		int i = 100;
		while (i > 0)
		{
			std::cout << i << " ";
			i--;


			if (i > 0)
			{
				std::cout << std::endl;
				break;
			}
		}
	}

	{
		int i = 100;
		while (i >= 0)
		{
			std::cout << i << " ";
			i-=2;


			if (i < 0)
			{
				std::cout << std::endl;
				break;
			}
		}
	}

	{
		int i = 0;
		while (i <= 100)
		{
			if (i % 3 == 0 && i % 5 == 0)
			{
				std::cout << "FizzBuzz ";
			}
			else if (i % 3 == 0)
			{
				std::cout << "Fizz ";
			}
			else if (i % 5 == 0)
			{
				std::cout << "Buzz ";
			}
			else
			{
				std::cout << i << " ";
			}

			if (i > 100)
			{
				std::cout << std::endl;
				break;
			}

			i++;
		}
	}
	 // I have no clue why this outputs to 0.
	{
		int i = 0;
		int sum = 0;
		while (i <= 1000)
		{
			i++;

			if (i % 3 == 0 || i % 5 == 0)
			{
				sum = sum + i;
			}

			if (i == 1000)
			{
				std::cout << "\nThe sum of all multiples of 3 and 5 from 0 to 1000 is " << sum << ". \n";
				break;
			}

		
		}

	}
	system("pause");
}
