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
			return count <= 0;
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
			for (int item : values)
				std::cout << item << " ";
		}

};

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
	int input;
	bool stackIsEmpty = false;

	//TEST CODE FOR STACK
	/*stack.Push(20);
	std::cout << stack.Top() << std::endl;
	stack.Push(10);
	std::cout << stack.Top() << std::endl;
	stack.Pop();
	std::cout << stack.Top() << std::endl;*/

	std::cout << "Reverse Polish Notation Calculator\n" << std::endl;
	for (int i = 0; i < 20; i++)
		stack.Push(i);

	while (!stack.isEmpty())
	{
		stack.Pop();
		stack.PrintInfo();
		system("pause");
		system("cls");
	}


		
	do
	{
		std::cout << "Please input a value (0-9) or operation (+ or -):\n";
		std::cin >> input;

		InputCheck(input, stack);

	} while (stack.isEmpty()== false);

}