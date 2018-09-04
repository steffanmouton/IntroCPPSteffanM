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
	/*{
		char name[255];

		std::cout << "Please input your First and Last Name\n" << std::endl;
		std::cin.getline(name, 255);

		std::cout << name << std::endl;

	}*/

	//2
	/*{
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
	}*/

	//3
	{
		/*char names[5][255];
		int nameLen1 = 0, nameLen2 = 0, nameLen3 = 0, nameLen4 = 0, nameLen5 = 0;

		std::cout << "Please input five First and Last Names\n" << std::endl;
		std::cin.getline(names[0], 255);
		std::cin.getline(names[1], 255);
		std::cin.getline(names[2], 255);
		std::cin.getline(names[3], 255);
		std::cin.getline(names[4], 255);

		while (names[0][nameLen1] != '\0')
		{
			nameLen1++;
		}
		while (names[1][nameLen2] != '\0')
		{
			nameLen2++;
		}
		while (names[2][nameLen3] != '\0')
		{
			nameLen3++;
		}
		while (names[3][nameLen4] != '\0')
		{
			nameLen4++;
		}
		while (names[4][nameLen5] != '\0')
		{
			nameLen5++;
		}

		
		
			for (int j = nameLen1 - 1; j >= 0; j--)
			{
				std::cout << names[0][j];
			}
			std::cout << std::endl;
		
		
		
			for (int j = nameLen2 - 1; j >= 0; j--)
			{
				std::cout << names[1][j];
			}
			std::cout << std::endl;
		
		
		
			for (int j = nameLen3 - 1; j >= 0; j--)
			{
				std::cout << names[2][j];
			}
			std::cout << std::endl;
		
		
		
			for (int j = nameLen4 - 1; j >= 0; j--)
			{
				std::cout << names[3][j];
			}
			std::cout << std::endl;
		
		
		
			for (int j = nameLen5 - 1; j >= 0; j--)
			{
				std::cout << names[4][j];
			}
			std::cout << std::endl;*/
	
	}

	//4 - '\a'

	//5
	{
		/*char user[17];
		char pass[17];

		int passLen = 0;
		bool passMin = false;
		bool passCap = false;
		bool passSym = false;

		std::cout << "Please input a username. Max 16 characters.\n";
		std::cin.getline(user, 17);
		std::cout << "\nPlease input a password. Must contain at least one capital letter, one number, and one symbol (!,#,$,%,&,@). Minimum 8 characaters, Max 16 characters \n";
		std::cin.getline(pass, 17);

		//check capital
		for (int i = 0; i < 16; i++)
		{
			if (int(pass[passLen]) > 64 && int(pass[passLen]) < 91)
			{
				passCap = true;
			}
			else
			{
				passLen++;
				continue;
			}
		}

		//check symbol
		passLen = 0;
		for (int i = 0; i < 16; i++)
		{
			if (int(pass[passLen]) ==  33 || int(pass[passLen]) == 35 || int(pass[passLen]) == 36 || int(pass[passLen]) == 37 || int(pass[passLen]) == 38 || int(pass[passLen]) == 64)
			{
				passSym = true;
			}
			else
			{
				passLen++;
				continue;
			}
		}

		//check Minimum length
		passLen = 0;
		while (pass[passLen] != '\0')
		{
			passLen++;
		}

		if (passLen > 7)
		{
			passMin = true;
		}

		if (passCap == true && passSym == true && passMin == true)
		{
			std::cout << "Valid Password";
		}
		else
		{
			std::cout << "Invalid Password";
		}*/

	}

	//6
	/*{
		bool usr = false;
		char user[17];
		char pass[255];
		char password[] = {"Pa55w0rd"};
		char hyphen[] = { "-" };

		std::cout << "Please input a username. Max 16 characters\n";
		std::cin.getline(user, 17);

		for (int i = 0; i < 16; i++)
		{
			if (int(user[i]) == 117)
			{
				if (int(user[i+1]) == 115)
				{
					if (int(user[i+2]) == 114)
					{
						usr = true;
					}
					else
					{
						continue;
					}

				}
				else
				{
					continue;
				}
			}
			else
			{
				continue;
			}
		}

		if (usr = true)
		{
			std::cout << "Please enter a password. Use 'Pa55w0rd'.\n";
			std::cin.getline(pass, 255);

			if (strcmp(pass, password) == 0)
			{
				char id[255];
				strcpy_s(id, user);

				strcat_s(id, hyphen);

				strcat_s(id, pass);

				std::cout << id <<std::endl;

			}
		}
		else
		{
			std::cout << "Invalid Username";
		}

	}*/

	//7

	//a - Save John as a character array. Not enough space in the array. name[5] = "John"
	//b - Output character array "name". No data inputted, will return garbage. Need to either input or initialize with data.
	//c - Trying to concatenate surname to name array. Not enough space in name array. Set to name[255]
	//d - Trying yo add ! to the end of "Stop". The fifth index in the array is "\0" which we shouldn't override. Set errorMsg[6] or larger.

	//8

	//9


	//10 - Palindrome Checker
	{
		/*char word[255];
		int len = 0;
		int i = 0;
		int j;
		bool palindrome = true;

		std::cout << "Enter a word to check for palindrome:";
		std::cin >> word;

		while (word[len] != '\0')
		{
			len++;
		}

		j = len - 1;

		while (j > i)
		{
			if (word[i] != word[j])
			{
				palindrome = false;
			}
			i++;
			j--;
		}

		std::cout << palindrome;
		system("pause");*/
	}

	//11
	{
		//strlen
		/*char str[255];
		int count = 0;

		while (str[count] != '\0')
		{
			count++;
		}*/

		//strcmp
		/*int count = 0;
		int result = 0;
		bool running = true;
		char str1[255];
		char str2[255];

		while (running)
		{
			if (str1[count] == '\0' && str2[count] == '\0')
			{
				result = 0;
				break;
			}
			else if (str1[count] > str2[count])
			{
				result = 1;
				break;
			}
			else if (str1[count] < str2[count])
			{
				result = -1;
				break;
			}
			else
			{
				++count;
			}
		}

		std::cout << result;*/

		//strcpy
		/*int count = 0;
		char source[255];
		char destination[255];

		while (source[count] != '\0')
		{
			destination[count] = source[count];
			++count;
		}

		destination[count] = '\0';
		std::cout << destination;*/
		
		//strcat
		/*char destination[255];
		char source[255];
		int destinationCount = strlen(destination + 1);
		int sourceCount = 0;

		while (source[sourceCount] != '\0')
		{
			destination[destinationCount] = source[sourceCount];
			++destinationCount;
			++sourceCount;
		}

		destination[destinationCount] = '\0';
		std::cout << destination;*/
	}

	//12

	//13
	{
		char date[255];

		std::cout << "Please input a date in dd/mm/yyy format";
		std::cin >> date;


	}

	//14 - Whitespace remover
	{
	/*	int space = 0;
		int len=0;
		char sent[255];

		std::cout << "Input a sentence to have all whitespace removed:";
		std::cin.getline(sent, 255);
		
		while (sent[len] != '\0')
		{
			len++;
		}

		for (int i = 0; i < len; i++)
		{
			if (sent[i] != ' ')
			{
				sent[space] = sent[i];
				space++;
			}
		}

		sent[space] = '\0';

		std::cout << sent << std::endl;
		system("pause");*/
	}
	
	//15
	{
		
	}
}