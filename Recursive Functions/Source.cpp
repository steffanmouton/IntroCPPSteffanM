#include <iostream>

//HWK 1 My attempt at Fib. Got frustrated and gave up. Managed to make it exit in my requested number of loops though.
//int Fib(int times)
//{
//	int current = 1;
//	std::cout << current;
//
//	if (times == 0)
//		return 0;
//
//	current = current + Fib(times - 1);
//	
//}

//HWK 2. I struggled, went to stack overflow after getting frustrated.
int power(int num, int pow)
{
	if (pow > 0)
	{
		return (num * power(num, pow - 1));
	}
	else
	{
		return 1;
	}
}

int main()
{

	//HWK1 Fibonacci
	//Fib(5);

	//system("pause");

	//HWK 2 Power
	int x = 5;
	int y = 3;

	std::cout << power(x, y);

	system("pause");

	

}