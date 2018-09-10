#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>


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
float Half(float number)
{
	float half = number / 2;
	return half;
}	

//HWK 5
void CoinToss(int flips)
{
	int randValue;
	
	for (int i=0; i < flips; i++)
	{
		randValue = rand();
		if (randValue % 2 == 0)
		{
			std::cout << "heads\n";	
		}
		else
		{
			std::cout << "tails\n";
		}
	}	
	system("pause");
}

//HWK 7
int SumTo(int N)
{
	int sum = 0;
	for (int i = 0; i <= N; i++)
	{
		sum += i;
	}
	return sum;
}

//HWK 8
int SumArray(int arr[], int size)
{
	int sum = 0;
	
	for (int i = 0; i <size; i++)
	{
		sum += arr[i];
	}
	return sum;
}

//HWK 9
int MinInArray(int arr[], int size)
{
	int min = arr[0];
	
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	
	return min;
}

//HWK 10
void MultiplyByIndex(int input[], int output[], int size)
{
	for (int i = 0; i < size; i++)
	{
		output[i] = input[i] * i;
	}
}

//HWK 15
int PowerOf(int x, int y)
{
	int power = x;

	for (int i = 0; i < y; i++)
	{
		power = power * x;
	}

	return power;
}

//HWK 16
void LnS(int array[], int size)
{
	int count = 1;
	int position = 0;
	
	for (int i = 0; i < size; i++)
	{
		if (array[i] == array[i + 1])
		{
			count++;
			continue;
		}
		else
		{
			std::cout << count << "," << array[i] <<",";
			count = 1;
		}
	}

}

//HWK 17
int CompThrow()
{
	return (rand() % 3) + 1;
}

void PrintPlayer(int choice)
{
	if (choice == 1)
	{
		std::cout << "You Chose Rock!\n";
	}
	if (choice == 2)
	{
		std::cout << "You Chose Paper!\n";
	}
	if (choice == 3)
	{
		std::cout << "You Chose Scissors!\n";
	}
}

void PrintComp(int choice)
{
	if (choice == 1)
	{
		std::cout << "Computer Chose Rock!\n";
	}
	if (choice == 2)
	{
		std::cout << "Computer Chose Paper!\n";
	}
	if (choice == 3)
	{
		std::cout << "Computer Chose Scissors!\n";
	}
}

bool CheckVictory(int comp, int player)
{
	if (comp == player)
	{
		std::cout << "Tie Game, Play Again!\n";
		return false;
	}
	else if (comp == 1)
	{
		if (player == 2)
		{
			std::cout << "Player wins!\n";
			return true;
		}
		else if (player = 3)
		{
			std::cout << "Computer wins!\n";
			return true;
		}
	}
	else if (comp == 2)
	{
		if (player == 1)
		{
			std::cout << "Computer wins!\n";
			return true;
		}
		else if (player = 3)
		{
			std::cout << "Player wins!\n";
			return true;
		}
	}
	else if (comp == 3)
	{
		if (player == 1)
		{
			std::cout << "Player wins!\n";
			return true;
		}
		else if (player = 2)
		{
			std::cout << "Computer wins!\n";
			return true;
		}
	}
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

	//   H O M E W O R K  E X E R C I S E S (DO 5, 10, 15, 16, 17)

	//1 What is the output of the problem?  112321

	//2 Write a function that returns the smaller of two floats that are passed to it

	/*float floatA;
	float floatB;

	std::cout << "Please input two values to find the smaller:\n";
	std::cin >> floatA >> floatB;
	std::cout << "The smaller number is: " << smallerOfTwo(floatA, floatB);*/

	//3 Same as Hwk2, but with three floats. Called Function Overloading
	{/*
		float floatA;
		float floatB;
		float floatC;

		std::cout << "Please input three values to find the smallest:\n";
		std::cin >> floatA >> floatB >> floatC;
		std::cout << "The smallest number is: " << smallest(floatA, floatB, floatC) << std::endl;*/
	}
	
	//4 Write a function called Half. It returns half the value of the argument
	
	{
		//float number = 16.721f;
		//float result = Half(number); // result is 8.3605
		
	}	
	
	// 5 write a function named CoinToss that simulates it using rand() and outputs heads or tails
	{
		/*int flips = 0;
		
		std::cout << "How many times would you like to flip the coin?\n";
		std::cin >> flips;
		
		CoinToss(flips);*/
	}
	
	//6 Find the error in each
	//a Does not return a value, return type is not void so it needs one
	//b All paths must return a value. Else path does not.
	//c function should be before the main()?.
	
	//7 Write a function called SumTo that accepts integer paramater N and returns the sum of all integers from 1 to N, including N.
	{
		//int result = SumTo(3); // result = 1 + 2 + 3 = 6
		//std::cout << result << std::endl;
		//
		//result = SumTo(15); // result should be 120
		//std::cout << result << std::endl;
	}
	
	//8 Write a function that takes as parameters an array of integers and the size of the array, returning the sum of the array.
	{
		//int integer_array[5] = {7, 3, 2, 4, 9};
		//int result = SumArray(integer_array, 5); // result = 25
		//std::cout << result << std::endl;
		
	}
	
	//9 Write a function that takes an array of integers and its size, returning the minimum value in the array.
	{
		//int integer_array[7] = {10, 15, 7, 4, 13, 19, 8};
		//int result = MinInArray(integer_array, 7); // result =4
		//std::cout << result << std::endl;
	}
	
	//10 Write a function that takes an array called input_array, the array size, and a second array of the same size called output_array
	//Fill each element in the second array to be the value of input_array multiplied by the index in the array.
	{
		//int integer_array[7] = {10, 15, 7, 4, 13, 19, 8};
		//int output_array[7] = {};
		//MultiplyByIndex(integer_array, output_array, 7); //Output_array should be 0, 15, 14, 12, 52, 95, 48
		//return 0;
	}
	
	//15 Write a function that calculates x^y
	{
	/*	int x = 5;
		int y = 3;

		PowerOf(x, y);*/
	}

	//16 Look and Say
	{
		/*int array[] = { 1,2,2,1,5,1,1,7,7,7,7,1,1,1,1,1,1,1,1 };

		LnS(array, 19);

		system("pause");*/

	}

	//17 RPS
	{
		// 1 = Rock, 2 = Paper, 3 = Scissors
		int comp;
		int player;
		bool victory = false;
		
		while (victory == false)
		{
			comp = CompThrow();
			std::cout << "Please choose 1 for Rock, 2 for Paper, 3 for Scissors\n";
			std::cin >> player;
		
			PrintPlayer(player);
		
			PrintComp(comp);

			victory = CheckVictory(comp, player);
		} 
		

		system("pause");
	}


}
