// Account entity header file.
#pragma once

#include <string>
#include <vector>

#include "Budget.h"

using namespace std;

class Account{
public:
	Account(string usr);
	string getUsername() const;
	vector<Budget> getPeriods() const;
	void startNextPeriod();
	~Account(); //Destructor
	Account(const Account& right);
	Account& operator=(const Account& right);
private:
	string username;
	vector<Budget>* period;
};

