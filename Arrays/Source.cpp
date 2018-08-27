#include <iostream>

int main()
{
	{
		int i;
		char myFirstName[] = { 'S', 'T', 'E', 'F', 'F', 'A', 'N' };

		for (i = 0; i < 7; i++)
		{
			std::cout << myFirstName[i] << std::endl;
		}
	}

	std::cout << std::endl;

	{
		int i;
		char myFirstName[] = { 'S', 'T', 'E', 'F', 'F', 'A', 'N' };
		int myFirstNumber[7];

		for (i = 0; i < 7; i++)
		{
			myFirstNumber[i] = (int)myFirstName[i];
			std::cout << myFirstName[i]<< " " << myFirstNumber[i] << std::endl;
		}
	}

	// sort an array of 5 numbers in ascending order
	// 1. Create myArray of size 5 with : 12, 21, 3, 7, 13
	// 2. Iterate over the array
	// 3. Compare each value to every other value to see if > or < other value
	// 4. If greater, swap
	{
		int myArray[5] = { 12, 21, 3, 7, 13 };

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

		}
	
	}

	//create an array of type int with size 10
	//create a for loop that will assign the array
	//all even numbers between 0 and 20 (exclusive of 20)

	{
		int myArray[10];
		int count = 0;
		
		for (int i = 0; i < 20; i+=2)
		{
			myArray[count++] = i;
		}

	}

	//initialize a 3x3 2d Array with values 1-9 then print them to console

	{
		int myArray[3][3] = { {1,2,3},{4,5,6},{7,8,9} };

		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				std::cout << myArray[i][j] << " ";
			}
		}
	}




}