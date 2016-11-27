// Account entity header file.
#pragma once

#include <string>
#include <vector>

#include "Error.h"
#include "Budget.h"

using namespace std;

class Account{
public:
	Account(string usr);
	Account(string usr, const vector<Budget>&);
	string getUsername() const;
	vector<Budget> getPeriods() const;
	void startNextPeriod();
	~Account(); // Destructor
	Account(const Account& right);	// Copy constructor
	Account& operator=(const Account& right);
private:
	string username;
	vector<Budget>* period;	// Storing historical budget on heap.
};

