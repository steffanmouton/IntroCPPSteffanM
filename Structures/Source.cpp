#include <iostream>
#include <string>

// HOMEWORK #6 - Create an RPG shop

struct Item //defining Item structure
{
	std::string name;
	int cost;
	int quantity;
};

struct Shop
{

};

void DisplayStock(Item arr[], int gold) //Displays current stock and 
										//merchant funds
{
	std::cout << std::endl;

	for (int i = 0; i < 3; i++)
	{
		std::cout << i << ". " << arr[i].name << " " << arr[i].cost
			<< "g x" << arr[i].quantity << std::endl;
	}
	std::cout << "\nMerchant has " << gold << " gold.\n";

}

int MerchantSpeaks() //Merchant instructions
{
	int choice;
	std::cout << "\nWelcome to Da Boyz Shop! Whacha wanna do?"
		<< "\n1. Change Price of an item"
		<< "\n2. Spend Gold to add Stock"
		<< "\n3. Sell Stock for Gold"
		<< "\n4. Leave Shop\n";
	std::cin >> choice;

	return choice;
}

void ChangePrice(Item &item, int newPrice) //Change Price Function
{
	item.cost = newPrice;
}

void AddStock(Item &item, int &number, int &gold) //Add Stock Function
{
	gold -= item.cost * number;
	item.quantity += number;
}

void SellStock(Item &item, int &number, int &gold) //Sell Stock Function
{
	gold += item.cost * number;
	item.quantity -= number;
}

int main()
{
	bool play = true;

	//initialize items with name, cost, quantity
	Item sword = { "Choppa", 300, 2 };
	Item potion = { "Heelz", 50, 8 };
	Item boots = { "Stompas", 100, 4 };

	Item stock[] = { sword, potion, boots };
	int curGold = 1000; //Merchant starting gold

	while (play == true) //Runs function while true
	{
		int input;

		DisplayStock(stock, curGold);

		input = MerchantSpeaks();

		if (input == 1) //Change Price
		{
			std::cout << "Choose item to change price, and a new price.\n";
			int choice;
			int price;

			DisplayStock(stock, curGold);

			std::cin >> choice >> price;

			ChangePrice(stock[choice], price);
		}

		if (input == 2) //Buy Stock
		{
			std::cout << "Choose item to buy stock, and how many.\n";
			int choice;
			int number;

			DisplayStock(stock, curGold);

			std::cin >> choice >> number;

			AddStock(stock[choice], number, curGold);
		}

		if (input == 3) //Sell Stock
		{
			std::cout << "Choose item to sell stock, and how many.\n";
			int choice;
			int number;

			DisplayStock(stock, curGold);

			std::cin >> choice >> number;

			SellStock(stock[choice], number, curGold);
		}

		if (input == 4) //Leave Shop and quit program
		{
			play = false;
			break;
		}
	}
}