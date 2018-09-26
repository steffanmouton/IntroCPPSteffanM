#include <iostream>

int SumTo(int n)
{
	int sum = 0;

	for (int i = 0; i <= n; i++)
	{
		sum += i;
	}

	return sum;
}

int SumToPower(int n)
{
	int sum = 0;

	for (int i = 0; i <= n; i++)
	{
		sum += (-1 * (pow(-2, i - 1)));
	}

	return sum;
}

int main()
{
	SumTo(10);
	SumToPower(4);
	//Expected Return of 55
}