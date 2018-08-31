#include <iostream>
#include <time.h>

int main()
{
	srand(time(NULL));

	{
		/*int i;
		char myFirstName[] = { 'S', 'T', 'E', 'F', 'F', 'A', 'N' };

		for (i = 0; i < 7; i++)
		{
			std::cout << myFirstName[i] << std::endl;
		}*/
	}

	//std::cout << std::endl;

	{
		/*int i;
		char myFirstName[] = { 'S', 'T', 'E', 'F', 'F', 'A', 'N' };
		int myFirstNumber[7];

		for (i = 0; i < 7; i++)
		{
			myFirstNumber[i] = (int)myFirstName[i];
			std::cout << myFirstName[i]<< " " << myFirstNumber[i] << std::endl;
		}*/
	}

	// sort an array of 5 numbers in ascending order
	// 1. Create myArray of size 5 with : 12, 21, 3, 7, 13
	// 2. Iterate over the array
	// 3. Compare each value to every other value to see if > or < other value
	// 4. If greater, swap
	{
		/*int myArray[5] = { 12, 21, 3, 7, 13 };

		for (int i = 0; i < 5; i++)
		{

			for (int j = 0; j < 5; j++)
			{
				if (myArray[i] < myArray[j])
				{
					int temp = myArray[i];
					myArray[i] = myArray[j];
					myArray[j] = temp;
				}
			}

		}*/

	}

	//create an array of type int with size 10
	//create a for loop that will assign the array
	//all even numbers between 0 and 20 (exclusive of 20)

	{
		/*	int myArray[10];
			int count = 0;

			for (int i = 0; i < 20; i+=2)
			{
				myArray[count++] = i;
			}*/

	}

	//initialize a 3x3 2d Array with values 1-9 then print them to console

	{
		/*int myArray[3][3] = { {1,2,3},{4,5,6},{7,8,9} };

		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				std::cout << myArray[i][j] << " ";
			}
		}*/
	}

	//Homework 1
	/*a) Valid
	b) Invalid - Out of Bounds
	c) Invalid - Improper syntax "("
	d) Valid
	e) Valid
	f) Invalid - Space in memory not declared
	g) Invalid - Cant have negative amount of space in memory
	h) Invalid - Syntax, no brackets*/

	//Homework 2
	/*a) 10
	b) 6
	c) 6
	d) 14
	e) Invalid Out of Bounds*/

	//Homework 3 Write a for loop to initialize the following array (int data[10]) with the values 10, 9, 8… (Etc)
	{
		//int data[10];
		//int count = 0;
		//
		//for (int i = 10; i > 0; i--)
		//{
		//	data[count++] = i;
		//}
	}

	//Homework 4 Create a program that asks for 5 numbers from the user, and store them in an array. Print
	//out the numbers in reverse order.
	{
		/*int data[5];
		int a, b, c, d, e;

		std::cout << "\nPlease input 5 numbers:\n";
		std::cin >> a >> b >> c >> d >> e;

		data[0] = a;
		data[1] = b;
		data[2] = c;
		data[3] = d;
		data[4] = e;

		for (int i = 4; i >= 0; i--)
		{
			std::cout << data[i] << " ";
		}

		std::cout << std::endl;*/
	}

	//Homework 5 Write a program that lets the user enter 10 values into an array. The program should then
	//display the largest and smallest values stored in the array.

	{
				//int data[10];

				//std::cout << "\nPlease input 10 numbers:\n";

				//for (int i = 0; i < 10; i++)
				//{
				//	std::cin >> data[i];
				//}
				//int largest = data[0];
				//int smallest = data[0];
				//for (int i = 0; i < 10; i++)
				//{
				//	if (data[i] > largest)
				//	{
				//		largest = data[i];
				//	}
				//	else if (data[i] < smallest)
				//	{
				//		smallest = data[i];
				//	}

				//	//if value is larger than largetst
				//	//	largetst = value
				//	//if smaller than smallest
				//	//	smallest = value;
				//}

				//std::cout << "Smallest: " << smallest << std::endl;
				//std::cout << "Largest: \n" << largest << std::endl;
	}

	//Homework 6 Create a program that creates a small 3x3 array of integers. Use a nested for loop to initialise
	//the numbers 1 - 9. Output the numbers in a grid format

	{
				/*int arr[3][3];
				int count = 1;

				for (int i = 0; i < 3; i++)
				{
					for (int j = 0; j < 3; j++)
					{
						arr[i][j] = count;
						std::cout << arr[i][j] << " ";
						count++;
					}
					std::cout << std::endl;*/
			}
		


	//Homework 7 An application uses a two dimensional array defined as follows:
	//int days[29][5];
	//Write code that sums each row in the array and displays the results.
	//Write code that sums each column in the array and displays the results.
	{
		//int days[29][5];

		////Sums of Rows
		//int sumRow = 0;

		//std::cout << "Sums of Rows: \n";
		//for (int i = 0; i < 29; i++)
		//{
		//	for (int j = 0; j < 5; j++)
		//	{
		//		sumRow += days[i][j];
		//	}
		//	std::cout << sumRow << " ";
		//}

		//std::cout << std::endl;

		//std::cout << "Sums of Columns: \n";
		//for (int i = 0; i < 5; i++)
		//{
		//	for (int j = 0; j < 29; j++)
		//	{
		//		sumRow += days[i][j];
		//	}
		//	std::cout << sumRow << " ";
		//}

	}

	//Homework 8 
	{
		int hp[5] = { 100, 100, 100, 100, 100 };
		int character;
		int val = 0;

		std::cout << "\nAll characters are at full hp.";

		for (int i = 0; i < 5; i++)
		{
			std::cout << "\nChoose a character to attack (0-4):";
			std::cin >> character;
			if (hp[character] <= 0)
			{
				std::cout << "That character is dead, choose another.";
				i--;
				continue;
			}
			else
			{
				val = rand() % (50 - 10 + 1) + 10;
				hp[character] -= val;
			}
		}

		for (int j = 0; j < 5; j++)
		{

			std::cout << hp[j] << " ";
		}
	}

	//Homework 9
	{
		int dragons[3][7];
	}







	system("pause");


}