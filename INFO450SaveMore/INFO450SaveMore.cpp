// INFO450SaveMore.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
using namespace std;
#include <iostream>

class Bank{
	int accountNumber;
	int interestRate;
	double balance;
	double Withdrawal();
	void display();
	double Deposit();
public:
	Bank();
	char accountTyp;
	int tYear;
	double cdBal;
	void createAccount();
	double Savings();
	double Checking();
	double CD();
	double orderChecks();
	double cBalance;
	double cdBalance;
	double sBalance;
	double sDeposit = 10000;
	double cDeposit = 600;
	double cdDep;
	int tMonth;
};

double Bank::Savings() {
	//Interest is compounded monthly and added to the balance.

	if (sBalance < 10000)
		sBalance = sBalance * .01;
	else
	if (sBalance >= 10000)
		sBalance = sBalance * .02;
	//added to balance

	return 0.0;
}

double Bank::Checking() {
	if (cBalance < 500)
	   (cBalance = cBalance - 5.00);
	
	return 0.0;
}

double Bank::orderChecks(){ 
	cBalance = cBalance - 15;
	return 0.0;
}

double Bank::CD() {
	//If funds are withdrawn before the term is over, a 10 % fee on the entire pre - withdrawal balance is levied

	double cdBal;
	if (tYear == 5) {
		interestRate = .10;
	}else
	if (tYear < 5) {
		interestRate == .05;
	}else{
		double interest = ((interestRate * cdBal) / 12);
	}
	return 0.0;
}

Bank::Bank()
{
}

double Bank::Withdrawal()
{
	double balance = balance - 2;
	return 0.0;
}
void Bank::display()
{
}

double Bank::Deposit()
{
	return 0.0;
}

void Bank::createAccount() {
	cout << "What type of account do you want to create (checking, Savings or CD) " << endl;
	cin >> accountTyp;
	//gets_s(accountType);
	if (accountTyp == 'S') {
		cout << "Enter Deposit amount " << endl;
		cin >> sDeposit;
		Bank::Savings();
	}
	else 
	if (accountTyp == 'C') {
		cout << "Enter Deposit amount " << endl;
		cin >> cDeposit;
		Bank::Checking();
	}
	else 
		if (accountTyp == 'D') {
			cout << "Enter CD amount" << endl;
			cin >> cdDep;
			Bank::CD();
		}
		else {
			cout << "invalid value" << endl;
		}
	}
	int main()
	{
		Bank b;
		b.createAccount();
		return 0;
	}