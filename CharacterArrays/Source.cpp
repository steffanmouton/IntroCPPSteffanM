#include <iostream>

int main()
{
	//My name as ASCII integers
	{
		/*int i = 0;
		char name[] = "Steffan";
		int ascii[7];

		for (i = 0; i < 7; i++)
		{
			ascii[i] = int(name[i]);
			std::cout << ascii[i] << " ";
		}
		system("pause");*/
	}
	
	// Create character array with the value "AIEUS". 
	// Using a while loop, determine
	// the number of characters in the array.
	{
		/*int count = 0;
		char array[] = "AIEUS";
		
		while (array[count] != '\0')
		{
			count++;
		}

		std::cout << count << std::endl;
		system("pause");*/
	}

	//Create String Compare Function

	{
		//char nameOne[] = "Steffan";
		//char nameTwo[] = "Steffan";
		//int lenOne = 0;
		//int lenTwo = 0;

		////is length the same?
		//bool sameLen = true;
		//while (sameLen)
		//{
		//	while (nameOne[lenOne] != '\0')
		//	{
		//		lenOne++;
		//	}
		//	while (nameTwo[lenTwo] != '\0')
		//	{
		//		lenTwo++;
		//	}

		//	if (lenOne != lenTwo)
		//	{
		//		std::cout << "String length is not the same.\n";
		//		sameLen = false;
		//	}
		//	else
		//	{
		//		//are values the same?
		//		int strCmp = 0;
		//		for (int i = 0; i < lenOne; i++)

		//		{
		//			if (nameOne[i] == nameTwo[i])
		//			{
		//				strCmp = 0;
		//				continue;
		//			
		//			}
		//			else if (nameOne[i] < nameTwo[i])
		//			{
		//				strCmp = -1;
		//				break;
		//			
		//			}
		//			else
		//			{
		//				strCmp = 1;
		//				break;
		//				
		//			}
		//		} 
		//		std::cout << strCmp << std::endl;
		//		sameLen = false;
		//	}
		//}
		//system("pause");
	}

	// Exercises

	//1
	{
		char name[255];

		std::cout << "Please input your First and Last Name\n" << std::endl;
		std::cin.getline(name, 255);

		std::cout << name << std::endl;

	}

	//2
	{
		char name[255];
		int nameLen = 0;
		int i = 0;

		std::cout << "Please input your First and Last Name\n" << std::endl;
		std::cin.getline(name, 255);

		while (name[nameLen] != '\0')
		{ 
			nameLen++;
		}

		for (i = nameLen -1; i >= 0; i--)
		{
			std::cout << name[i];
		}
		std::cout << std::endl;
	}

	//3
	{
		char names[5][255];
		int nameLen = 0;
		int i = 0;
	}

	//4 - '\a'

	//5
	{

	}

	//6
	{

	}
	system("pause");
}