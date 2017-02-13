#include <iostream>
#include <string>
#include <fstream>
#include <cctype>
#include <iomanip>

#include "Account.h"

Account* Account::createAccount(std::string name, TYPE type, int amount){
	Account *acct = new Account(name, type, amount);
	return acct;
}

bool Account::doCheck(u_int32_t num, std::string name){
	if (this->acctNum == num and this->name == name) {
		return true;
	}
	return false;
}

void Account::showAccountData(u_int32_t num, std::string name) const {
	
}

int Account::deposit(int amount, u_int32_t num, std::string name) {
	if doCheck(num, name) {
		this->depositAmount += amount;
		return this->depositAmount;
	}
	else {
		throw "ACCESS DENIED";
		return -1;
	}
}

int Account::withdraw(int amount, u_int32_t num, std::string name) {
	if doCheck(num, name) {
		this->depositAmount -= amount;
		return this->depositAmount;
	}
	else {
		throw "ACCESS DENIED";
		return -1;
	}
}


//to be implemented.
int Account::displayAmount() const {
	return this->depositAmount;
}

TYPE Account::displayAccountType() const {
	std::cout << this->acctType << std::endl;
	return this->acctType;
}
