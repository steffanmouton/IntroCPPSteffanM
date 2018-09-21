#include <iostream>

class Stack
{
	private:

		int values[20];

		int count;

	public:
		Stack()
		{
			for (int& item : values)
			{
				item = -1;
			}

			count = 0;
		}

		bool isEmpty()
		{
			if (count <= 0)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		

		int Top()
		{
			return values[count - 1];
		}

		void Push(int value)
		{
			values[count++] = value;
		}

		void Pop()
		{
			values[count--] = -1;
		}

		void PrintInfo()
		{
			std::cout << std::endl;

			for (int item : values)
			{
				std::cout << item << " ";
			}
			
			std::cout << std::endl;
		}

};

//Takes input char, typecasts to int, checks ascii value to determine operation.
void InputCheck(int input, Stack &stack)
{
	// 0 - 9 on input
	if (input >= 48 && input <= 57)
	{
		stack.Push(input - 48);
	}
	// + on input
	if (input == 43)
	{
		int a;
		int b;
		a = stack.Top();
		stack.Pop();
		b = stack.Top();
		stack.Pop();
		stack.Push(a + b);
	}
	// - on input
	if (input == 45)
	{
		int a;
		int b;
		a = stack.Top();
		stack.Pop();
		b = stack.Top();
		stack.Pop();
		stack.Push(a - b);
	}
}




int main()
{
	Stack stack;
	char input;
	bool stackIsEmpty = false;

	//TEST CODE FOR STACK
	/*stack.Push(20);
	std::cout << stack.Top() << std::endl;
	stack.Push(10);
	std::cout << stack.Top() << std::endl;
	stack.Pop();
	std::cout << stack.Top() << std::endl;*/

	std::cout << "Reverse Polish Notation Calculator\n" << std::endl;

	// test for array
	/*for (int i = 0; i < 20; i++)
		stack.Push(i);

	while (!stack.isEmpty())
	{
		stack.Pop();
		stack.PrintInfo();
		system("pause");
		system("cls");
	}*/


		
	while (stackIsEmpty == false)
	{
		std::cout << "Please input a value (0-9) or operation (+ or -):\n";
		std::cin >> input;

		InputCheck(input, stack);

		stack.PrintInfo();

		stackIsEmpty = stack.isEmpty();

	} 

	//program crashes when stack is empty instead of just exiting. Push Function tries to grab from number before first 
	//index in array, which is impossible. Not sure how to work around...


	return 0;

}