#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include <string>
#include <fstream>
#include <cctype>
#include <iomanip>


enum TYPE {CHECKING, SAVING};

class Account
{
private:
	u_int32_t acctNum;
	std::string name;
	int depositAmount;
	TYPE acctType;
	
public:
	Account(std::string _name, TYPE _type, int _amount): 
	name(_name), acctType(_type), depositAmount(_amount)
	{}
	
	Account* createAccount(std::string name, TYPE type, int amount) const;
	bool doCheck(u_int32_t accountNumber, std::string name);
	void showAccountData(u_int32_t accountNumber, std::string name) const;
	int deposit(int amount, u_int32_t accountNumber, std::string name);
	int withdraw(int amount, u_int32_t accountNumber, std::string name);
	int displayAmount() const;
	TYPE displayAccountType() const;
	
};

#endif // ACCOUNT_H
