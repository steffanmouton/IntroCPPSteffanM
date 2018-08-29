#include <iostream>

int main()
{
	int guess = 10;
	char start = ' ';

	std::cout << "Think of a number between 1 and 20\n Type 'S' when ready to start.\n";
	std::cin >> start;

	while (start == 'S')
	{
		char input;
		

		std::cout << "Is your number '>', '<', or '=' to " << guess << "?\n Input 'E' at any time to exit. \n";
		std::cin >> input;

		switch (input)
		{
		case '>':
			guess+= 1;
			break;
		case '<':
			guess-= 1;
			break;
		case '=':
			std::cout << "The number you chose was " << guess << ".\n";
			system("pause");
			return 0;
		case 'E':
			return 0;
		}

	}
}