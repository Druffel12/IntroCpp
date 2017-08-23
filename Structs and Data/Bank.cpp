#include "Bank.h"

float calcBankNotes(Bank bank)
{
	int bankNotes = 0;
	
	bankNotes = bank.oneDollar + (bank.twoDollar * 2) + (bank.fiveDollar * 5);
	return bankNotes;
}

float calcBankCoins(Bank bank)
{
	int bankCoins = 0;

	bankCoins = (bank.quarters * .25) + (bank.dimes * .10) + (bank.nickeles * .05) + (bank.pennies * .01);
	return bankCoins;
}

float calcBankTotal(Bank bank)
{
	float bankTotal = 0;

	bankTotal = calcBankNotes(bank) + calcBankCoins(bank);

	return bankTotal;
}