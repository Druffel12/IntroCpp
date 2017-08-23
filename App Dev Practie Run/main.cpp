#include <iostream>

#include <random>
#include "time.h"

void slot(int &playerCoins)
{

	int slot1 = rand() % 7 + 1;

	int slot2 = rand() % 7 + 1;

	int slot3 = rand() % 7 + 1;
	

	std::cout << "Here's those lucky numbers" << std::endl;
	std::cout << slot1 << slot2 << slot3 << std::endl;

	if ( slot1 + slot2 + slot3 == 21 )
	{
		std::cout << "Congrats you hit the jack pot, guess your not bad at this." << std::endl;
		playerCoins += 7;
		std::cout << "your new total is: " << playerCoins << std::endl;
	}
	// else if(slot1 == slot2 && slot2 == slot3 && slot3 == 6)
	else if (slot1 == slot2 && slot2 == slot3 && slot3 == 6)
	{
		std::cout << "OOOOOHHHH so close but no dice try again you know you want too ;)" << std::endl;
		playerCoins += 6;
		std::cout << "Your new total is: " << playerCoins << std::endl;
	}

	else if (slot1 == slot2 && slot2 == slot3 && slot3 == 5)
	{
		std::cout << "Man if this 1923 you could buy a gumball " << std::endl;
		playerCoins += 5;
		std::cout << "Your new total is: " << playerCoins;
	}

	else if (slot1 == slot2 && slot2 == slot3 && slot3 == 4)
	{
		std::cout << "Here's some of your money lol" << std::endl;
		playerCoins += 4;
		std::cout << "Your new total is: " << playerCoins;
	}

	else if (slot1 == slot2 && slot2 == slot3 && slot3 == 3)
	{
		std::cout << "you do realize your odds in this arnt great" << std::endl;
		playerCoins += 3;
		std::cout << "Your new total is: " << playerCoins;
	}

	else if (slot1 == slot2 && slot2 == slot3 && slot3 == 2)
	{
		std::cout << "It might be time to find a new game " << std::endl;
		playerCoins += 2;
		std::cout << "Your new total is: " << playerCoins;
	}

	else if (slot1 == slot2 && slot2 == slot3 && slot3 == 1)
	{
		std::cout << "congrats you hit the bare minimum i bet your mom's so proud " << std::endl;
		playerCoins += 1;
		std::cout << "Your new total is: " << playerCoins;
	}
	else
	{
		std::cout << "Yay more money for me" << std::endl;
	}
	playerCoins -= 1;
	std::cout << "your new total is: " << playerCoins << std::endl;

	
}


int main()
{
	int PlayerCoins = 30;
	bool gameOver = false;
	std::cout << "Welcome to Rude Dude's slots! :D " << std::endl;
	std::cout << "You have 30 coins lets see if you can surpass that." << std::endl;
	
	srand(time(NULL));
	
	// prewarm the random
	for (int i = 0; i < 100000; ++i)
	{
		rand() % 7 + 1;
	}

	while (gameOver == false)
	{
	system("pause");
	slot(PlayerCoins);

	if (PlayerCoins < 0)
	{
		// ask do you want ot play again?
		//Y-give the starting value for money
		// N-game over = true
	}

	}

	std::cout << "CONGRATS!!!! you're broke this is why you dont gamble kids." << std::endl;

	while (true);
}