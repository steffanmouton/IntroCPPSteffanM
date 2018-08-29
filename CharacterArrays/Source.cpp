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
		char nameOne[] = "Steffan";
		char nameTwo[] = "Steffan";
		int lenOne = 0;
		int lenTwo = 0;

		//is length the same?
		bool sameLen = true;
		while (sameLen)
		{
			while (nameOne[lenOne] != '\0')
			{
				lenOne++;
			}
			while (nameTwo[lenTwo] != '\0')
			{
				lenTwo++;
			}

			if (lenOne != lenTwo)
			{
				std::cout << "String length is not the same.\n";
				sameLen = false;
			}
			else
			{
				//are values the same?
				int strCmp = 0;
				for (int i = 0; i < lenOne; i++)

				{
					if (nameOne[i] == nameTwo[i])
					{
						strCmp = 0;
						continue;
					
					}
					else if (nameOne[i] < nameTwo[i])
					{
						strCmp = -1;
						break;
					
					}
					else
					{
						strCmp = 1;
						break;
						
					}
				} 
				std::cout << strCmp << std::endl;
				sameLen = false;
			}
		}
		system("pause");
	}
}