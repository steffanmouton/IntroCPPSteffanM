#include <iostream>
#include <string>

int main()
{
	std::string MyName = "Steffan Mouton";
	std::string MyID = "s188045";
	std::cout << "Name: " << MyName << std::endl;
	std::cout << "ID: " << MyID << std::endl;

	int ValueOne = 1;
	int ValueTwo = 2;
	std::cout << ValueOne + ValueTwo << std::endl;

	std::string FirstName;
	std::string LastName;

	std::cout << "Please Enter your First Name:" << std::endl;
	std::cin >> FirstName;
	std::cout << "Please Enter your Last Name:" << std::endl;
	std::cin >> LastName;

	std::cout << "Greetings, " + FirstName + " " + LastName << std::endl;

	system("pause");
}