#include <iostream>

void HF()
{
	std::cout << "Hello Functions" << std::endl;
}
void square()
{
	/*int x = 0;
	int y = 0;
	std::cout << "Input a number to square it" << std::endl;
	std::cin >> x;
	y = x * x;
	std::cout << y << std::endl;*/
}
void Decimal()
{
	//declares x and y as eithe numerator and denominator 
	//multiplies denominator to make it a factor of 10 then uses that number to multiply the numerator
	//outputs the vaiable
}
void largest()
{
	// asks for 3 numbers
	//minuses each number by each other 
	//find the highest value 
	//returns which 2 numbers it came from
}
void Printout()
{
	/*int a = 0;
	int b = 0;
	std::cout << "Input 2 numbers" << std::endl;
	std::cin >> a;
	std::cin >> b;
	std::cout << a << "," << b;*/
}
void add()
{
	/*int num1;
	int num2;
	int num3;
	int t;

	std::cout << "input 3 numbers to get th sum" << std::endl;

	std::cin >> num1;
	std::cin >> num2;
	std::cin >> num3;

	t = num1 + num2 + num3;
	std::cout << t << std::endl;*/
}
void lesser()
{
	/*int x = 0;
	int y = 0;
	std::cout << "declare 2 numbers" << std::endl;
	std::cin >> x;
	std::cin >> y;

	if (x > y)
	{
		std::cout << y << std::endl;
	}
	else
	{
		std::cout << x << std::endl;
	}*/
}
void more()
{
	/*int x = 0;
	int y = 0;
	std::cout << "declare 2 numbers" << std::endl;
	std::cin >> x;
	std::cin >> y;

	if (x > y)
	{
		std::cout << x << std::endl;
	}
	else
	{
		std::cout << y << std::endl;
	}*/
}
void clamp()
{

}

int main()
{
	HF();

	square();
	
	Decimal();

	Printout();

	add();

	lesser();

	more();

	system("pause");
}