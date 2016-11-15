// Account entity header file.
#ifndef ACCOUNT_H_
#define ACCOUNT_H_

#include <string>
#include <vector>

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

#endif
