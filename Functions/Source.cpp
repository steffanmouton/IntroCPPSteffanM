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
		std::cout << i << " ";
	}

	std::cout << std::endl;
}

void printValuesBetween(int low, int high)
{
	for (int i = low + 1; i < high; i++)
	{
		std::cout << i << " ";
	}

	std::cout << std::endl;
}

int arraySum(int arr[], int size)
{
	int sum = 0;

	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	return sum;
}

void revArray(int arr[], int size)
{
	int temp = 0;
	int last = size - 1;

	for (int i = 0; i <= size / 2; i++)
	{
		temp = arr[i];
		arr[i] = arr[last];
		arr[last] = temp;
		last--;
	}

}

//HWK 2
float smallerOfTwo(float a, float b)
{
	float smaller = a;

	if (b < a)
	{
		smaller = b;
	}

	return smaller;
}

int main()
{

	/*std::cout << multThree(3) << std::endl;

	printValuesToTen();

	printValuesBetween(10, 15);*/

	/*int array1[] = { 1, 2, 3 };
	int expected = 6;

	if (expected == arraySum(array1, 3))
	{
	std::cout << "You win!\n";
	}*/

	//create a function that will reverse the values in an array
	//you will need to pass in an array and the size of the array as arguments
	//cannot use a second array

	/*int arrayReverse[] = { 1, 2, 3, 4, 5, 6, 7};
	revArray(arrayReverse, 7);

	for (int i = 0; i < 7; i++)
	{
	std::cout << arrayReverse[i] << " ";
	}

	system("pause");*/

	//   H O M E W O R K  E X E R C I S E S

	//1 What is the output of the problem?  112321

	//2 Write a function that returns the smaller of two floats that are passed to it:
	/*float floatA;
	float floatB;

	std::cout << "Please input two values to find the smaller:\n";
	std::cin >> floatA >> floatB;
	std::cout << "The smaller number is: " << smallerOfTwo(floatA, floatB);*/

	//3 dfdsgfa
	{

	}

}