#include <iostream>

int main()
{
	//Exercise #1
	//a - f
	int integer = 10;
	std::cout << "integer: " << integer << std::endl;

	int& referenceToInteger = integer;

	std::cout << "reference to integer: " << referenceToInteger << std::endl;

	integer = 20;
	std::cout << "integer: " << integer << std::endl;

	referenceToInteger = 30;
	std::cout << "integer: " << integer << std::endl;

	//g
	int& anotherReferenceToInteger = integer;
	std::cout << "reference to integer: " << referenceToInteger << std::endl;
	std::cout << "another reference to integer: " << anotherReferenceToInteger
		<< std::endl;

	//h 
	/*int& referenceToNothing;
	float a = 10.5f;
	int& = a;*/

}