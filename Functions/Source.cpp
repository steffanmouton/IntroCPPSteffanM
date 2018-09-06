#include <iostream>
#include <string>
#include <cstdlib>


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
float smallest(float a, float b)
{
	float smaller = a;

	if (b < a)
	{
		smaller = b;
	}

	return smaller;
}

//HWK 3
float smallest(float a, float b, float c)
{
	float smallest = a;

	if (b < smallest)
	{
		smallest = b;
	}
	if (c < smallest)
	{
		smallest = c;
	}	

	return smallest;
}

//HWK 4
float Half(number)
{
	half = number / 2;
	return half;
}	

//HWK 5
void CoinToss(flips)
{
	int randValue;
	
	for (int i=0; i < flips; i++)
	{
		randValue = rand();
		if (randvalue % 2 == 0)
		{
			std::cout << "heads\n";	
		}
		else
		{
			std::cout << "tails\n";
		}
	}	
	
}

//HWK 7
int SumTo(N)
{
	int sum = 0;
	for (int i = 0; i <= N; i++)
	{
		sum += i;
	}
	return sum;
}

//HWK 8
int SumArray(arr[], size)
{
	int sum = 0;
	
	for (int i = 0; i <size; i++)
	{
		sum += arr[i];
	}
	return sum;
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

	//2 Write a function that returns the smaller of two floats that are passed to it

	/*float floatA;
	float floatB;

	std::cout << "Please input two values to find the smaller:\n";
	std::cin >> floatA >> floatB;
	std::cout << "The smaller number is: " << smallerOfTwo(floatA, floatB);*/

	//3 Same as Hwk2, but with three floats. Called Function Overloading
	{
		float floatA;
		float floatB;
		float floatC;

		std::cout << "Please input three values to find the smallest:\n";
		std::cin >> floatA >> floatB >> floatC;
		std::cout << "The smaller number is: " << smallest(floatA, floatB);
	}
	
	//4 Write a function called Half. It returns half the value of the argument
	
	{
		float number = 16.721f;
		float result = Half(number); // result is 8.3605
		
	}	
	
	// 5 write a function named CoinToss that simulates it using rand() and outputs heads or tails
	{
		int flips = 0;
		
		std::cout << "How many times would you like to flip the coin?\n";
		std::cin >> flips;
		
		CoinToss(flips);
	}
	
	//6 Find the error in each
	//a Does not return a value, return type is not void so it needs one
	//b All paths must return a value. Else path does not.
	//c function should be before the main()?.
	
	//7 Write a function called SumTo that accepts integer paramater N and returns the sum of all integers from 1 to N, including N.
	{
		int result = SumTo(3); // result = 1 + 2 + 3 = 6
		std::cout << result << std::endl;
		
		result = SumTo(15); // result should be 120
		std::cout << result << std::endl;
	}
	
	//8 Write a function that takes as parameters an array of integers and the size of the array, returning the sum of the array.
	{
		int integer_array[5] = {7, 3, 2, 4, 9};
		int result = SumArray(integer_array, 5); // result = 25
		std::cout << result << std::endl;
		
	}
	
	
}
