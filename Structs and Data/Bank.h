#pragma once

struct Bank
{
	int oneDollar;
	int twoDollar;
	int fiveDollar;
	
	int quarters;
	int dimes;
	int nickeles;
	int pennies;
};


	float calcBankNotes(Bank bank);
	float calcBankCoins(Bank bank);
	float calcBankTotal(Bank bank);



