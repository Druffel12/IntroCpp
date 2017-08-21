#include <iostream>

int main()
{
	//while
	/*int iter = 0;
	while (iter < 11)
	{
		std::cout << iter << std::endl;
		iter++;
	}*/

	//for
	// - init
	// - cond
	// - expr (at the end of an interaction
	/*for (int i = 0; i < 11; ++i)
	{
		std::cout << i << std::endl;
	}*/

	//do-while
	/*int j = 0;
	do
	{
		std::cout << j << std::endl;
		++j;
	} while (j < 11);*/

	// simple input validation
	/*int userInput = -1;
	do
	{
		std::cout << "Give me a number between 1 and 5" << std::endl; // 4
		std::cin >> userInput;
	} while (userInput < 1 || userInput > 5);

	std::cout << "yay\n";*/ 

	//1. 
	/*for (int y = 0; y < 101; ++y)
	{
		std::cout << y << std::endl;
	}*/

	//2.
	/*for (int z = 100; z > 0; --z)
	{
		std::cout << z << std::endl;
	}*/

	//3.
	/*int year = 1995;
	do
	{
		std::cout << year << std::endl;
		++year;
	} while (year < 2018);*/

	//4.
	/*int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	std::cout << "plase insert 3 positive numbers whats your first choice" << std::endl;
	std::cin >> num1;
	
	do
	{
		if (num1 < 0)
		{
			std::cout << "Hey! that's negative thinking try again" << std::endl;
			std::cin >> num1;

		}
	} while (num1 < 0);



	std::cout << "Your first choice was " << num1 << " good choice now next number" << std::endl;
	std::cin >> num2;
	
	do
	{
		if (num2 < 0)
		{
			std::cout << "Hey! that's negative thinking try again" << std::endl;
			std::cin >> num2;
		}

	} while (num2 < 0);

	std::cout << "Your second choice was " << num1 << " thats cool i guess" << std::endl;
	std::cin >> num3;


	do
	{
		if (num3 < 0)
		{
			std::cout << "Hey! that's negative thinking try again" << std::endl;
			std::cin >> num3;
		}

	} while (num3 < 0);

	std::cout << "ok your favorite numbers are " << num1 << ", " << num2 << ", and " << num3;
	std::cout << " congrats you like numbers you nerd" << std::endl;*/

	//open
	//1.
	int a;
	int b;
	std::cout << "Input  a range of numbers" << std::endl;
	std::cin >> a;
	std::cin >> b;
	
	while (a <= b)
	{
		std::cout << a << std::endl;
		++a;
	}

	if (b < a)
	{
		while (b <= a)
		{
			std::cout << b << std::endl;
			++b;
		}
	}
	//2.
	int x = 0;
	int y = 0;
	int z = 0;
	std::cout << "Please insert 3 numbers" << std::endl;
	
		do
		{
			std::cin >> x;
			x + y;
			x = 0;
			++z;

		} while (z < 3);

		std::cout << y << std::endl;

  


	system("pause");
}