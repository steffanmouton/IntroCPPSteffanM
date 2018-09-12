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

//hwk6a
void RevString(char* array)
{

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
	//a

	char forwardArray[] = { 'h','e','l','l','o' };