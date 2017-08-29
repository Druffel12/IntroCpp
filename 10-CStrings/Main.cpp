#include <iostream>
#include <cstring>


struct Player
{
	char name[80];
};


void addStrings(char dst[], int size, char src1[], char src2[])
{
	// copies data from src1 into the dst buffer
	strcpy_s(dst, size, src1);
	// convatenates data from src2 into the dst buffer
	strcat_s(dst, size, src2);

	//result should be src1+src2
}


void main()
{
	//definition
	char buffer[80];

	//instatiate
	char cstring[] = "Dinosaurs are cool";
	char buffer2[80] = { 0 };

	//assignment
	strcpy_s(buffer, "String");


	//length
	int length = strlen(buffer);

	//concatenation
	strcat_s(buffer, cstring);

	//-1, 0, 1
	int result = strcmp(buffer, cstring);

	//1.
	char buffer1[] = "Hello";
	
	char cstring1[] = "Terry";

	strcat_s(buffer1, cstring1);

	std::cout << buffer1;
	
	char Input;

	std::cin >> Input;

	std::cout << Input;

	//2.
	char Latin[22] = { '\0' };
	std::cout << "Please input a word: ";
	std::cin >> Latin;
	if (Latin[0] = (char = 41, 45, 49, 4F, 55);
	{

	}

	
	// dino
	// inod ay
	
	//dreary
	//earydr ay
	
	//challenge
	char Org[] = "Sneaky";
	 
	Org[1] + 3;
	Org[2] + 3;
	Org[3] + 3;
	Org[4] - 3;
	Org[5] + 3;
	Org[6] + 3;

	std::cout << Org;

	while (true);
}
