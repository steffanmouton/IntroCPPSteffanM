#include <iostream>

void ReverseArray(int* ptr, int size) //first and last variable, increment pointer
{
	int* first;
	int* last;
	int temp;

	first = ptr;
	last = ptr + (size - 1);

	for (int i = 0; i < size / 2; i++)
	{
		temp = *first;
		*first++ = *last;
		*last-- = temp;
	}
}

//hwk6a - I had trouble making this one work...
void RevString(char* array)
{
   /* char* first;
    char* last;
    
    first = array;
    
    int count = 0;
    
    while(array != '\0')
    {
        count++;
        array++;
    }    
    
    last = count;
    
    for (int i = 0; i < count / 2; i++)
	{
		temp = *first;
		*first++ = *last;
		*last-- = temp;
	}*/
    
}

//hwk6b
int CountEven(int* array, int array_len)
{
	int evenCount = 0;

    for(int i = 0; i < array_len; i++)
    {
        if (*array % 2 == 0)
        {
            evenCount++;
			array++;
        }
        else
        {
			array++;
            continue;   
        }
        
    }    

    return evenCount;
}   

//hwk6c - Couldnt figure out how to return nullptr. Found "DBL_MIN" function online.
double Maximum(double* maxArray,int array_size)
{
	double max = DBL_MIN;
	for (int i = 0; i < array_size; i++)
	{
		if (*maxArray > max)
		{
			max = *maxArray;
			maxArray++;
		}
		else
		{
			maxArray++;
			continue;
		}
	}
	
	return max;
}

//hwk6d
bool Contains(char* array, char search_value)
{
	while (array == '\0')
	{
		if (*array == search_value)
		{
			return true;
			array++;
		}
		else
		{
			array++;
		}
	}
	return false;
}


int main()
{
	// Exercise 1  int nums[6]; use pointer to initialize the array with 1
	/*int nums[6];
	int* ptr = &nums[0];

	for (int i = 0; i < 6; i++)
	{
	*ptr = 1;
	ptr++;
	}*/

	//Exercise 2 void ReverseArray(int* ptr). 
	//Reverse the elements that ptr points to

	int nums[4] = { 2, 4, 6, 8 };
	int* ptr_nums = &nums[0];

	ReverseArray(ptr_nums, 4);
	//expected nums = {6, 4, 2}

	// H O M E W O R K 
	// #6
	//a - write a function RevString that reverses array. Returns nothing.

	char forwardArray[] = { 'h','e','l','l','o' };
	char* ptrArray = &forwardArray[0];
	RevString(ptrArray);
	
	//b - write a function CountEven(int* array, int array_len) that returns even numbers in the array.
	
	int evenArray[] = { 1, 2, 3, 4, 5, 6 };
	int array_len = 6;
	int* pntrArray = &evenArray[0];
	
	CountEven(pntrArray, array_len);
	
	//c - Write a function called Maximum (double* array, int array_size) that returns a pointer to the maximum value. If the array is empty, return nullptr.
	
	double maxArray[] = { 1, 2, 6, 3, 4 };
	int array_size = 5;
	
	Maximum(maxArray, array_size);
	
}
