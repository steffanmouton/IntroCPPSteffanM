#include <iostream>
//2
void ChangeValue(Structure type)
{
	type.a += 2;
	type.b += 2;
}

//3
struct Structure
{
	const int a = 0;
	const int b = 1;
	const int c = 2;
	const int d = 3;
};

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

	//2
	{
		int a = 10;
		int b = 12;
		struct stuff;
		std::cout << stuff.a << std::endl;
		ChangeValue(&stuff);
		std::cout << stuff << std::endl;
	}

	//5
	//a - It takes up far less memory to pass in the address of the struct than it does
	// to pass in the entire struct.

	//b - No, they take up the the same amount of memory. The advantage in passing in the const 
	// reference would be that the value could not be changed, always keeping the same value.

}