#include <iostream>

int main()
{
	/*bool ishappy = true;

	if (ishappy)
	{
		std::cout << "I am totes happy " << std::endl;
	}
	else

	std::cout << "How Happy are you?" << std::endl;
	int happiness = 0;
	std::cin >> happiness;

	int happiness = 0;

	if (happiness > 75)
	{
		std::cout << "you are happy" << std::endl;
	}
	else if (happiness > 30)
	{
		std::cout << "your good dude" << std::endl;
	}
	else
	{
		std::cout << "You depressed dawg" << std::endl;
	}*/

	/*std::cout << "insert a value between 1 and 100" << std::endl;
	int Num = 0;
	std::cin >> Num;

	if (Num > 50)
	{
		std::cout << "That is a large number" << std::endl;
	}
	else if (Num == 50)
	{
		std::cout << "That is a Balanced number" << std::endl;
	}
	else 
	{
		std::cout << "Thats is a small number" << std::endl;
	}*/

	/*std::cout << "input your age" << std::endl;
	int age = 0;
	std::cin >> age;

	
	if (age < 18)
	{
		std::cout << "you are a minor ya little kid" << std::endl;
	}
	else if (age >= 65)
	{
		std::cout << "Retire ya old coot" << std::endl;
	}
	else if (age >= 50)
	{
		std::cout << "Congrats you are eligible for AARP" << std::endl;
	}
	else if (age >= 18)
	{
		std::cout << "Ayyy your an adult " << std::endl;
	}*/
	
	/*std::cout << "Input 3 numbers" << std::endl;
	int num1; 
	int num2; 
	int num3;
	std::cin >> num1;
	std::cin >> num2;
	std::cin >> num3;
	
	if (num1 > num2)
	{
		if (num2 < num3)
		{
			std::cout << num2;
		}
		else
		{
			std::cout << num3;
		}
	}
	else if (num1 > num3)
	{
		std::cout << num3;
	}
	else
	{
		std::cout << "the lowest number is " << num1 << std::endl;
	}*/
	
	/*int x = 0;
	int y = 0;

	// what is the value of true?   1
	// what is the value of false?  0
	//
	//

	std::cin >> x;
	y = x;
	if(x % 2 == 0) // 0, 1
	{
		std::cout << "that is an even number " << std::endl;
	}
	else
	{
		std::cout << "that is an odd number " << std::endl;
	}*/

	/*
	5 % 2 = 1
	4 % 2 = 0
	3 % 2 = 1
	2 % 2 = 0
	1 % 2 = 1
	0 % 2 = 0
	
	*/


	// 4 % 3 = 1
	// 3 % 4 = 0

	// 4 / 2 = 2
	// 4 % 2 = 0

	// 3 % 2 = 1
	// 3 / 2 = 1

	
	std::cout << "Input a range of numbers then a random number" << std::endl;
	int c = 0;
	int d = 0;
	int e = 0;
	std::cin >> e;
	std::cin >> d;
	std::cin >> c;
	if (c < d)
	{
		c = d;
		std::cout << c << std::endl;
	}
	if (c > e)
	{
		c = e;
		std::cout << c << std::endl;
	}
	else 
	std::cout << c << std::endl;


	system("pause");
}