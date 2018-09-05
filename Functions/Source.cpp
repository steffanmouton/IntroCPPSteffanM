#include <iostream>
#include <string>


//int print(std::string input)
//{
//	std::cout << input << std::endl;
//	return 0;
//}
//
//int main()
//{
//	print("Hello!");
//	system("pause");
//}


bool multThree(int value)
{
	if (value % 3 == 0)
		return 1;
	else
		return 0;
}

void printValuesToTen()
{
	int count = 0;
	for (int i = 0; i < 11; i++)
	{
		std::cout << i << ", ";
	}

}

int main()
{
	std::cout << multThree(3) << std::endl;

	printValuesToTen();

	system("pause");
}
