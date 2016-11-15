// Account entity header file.
#ifndef ACCOUNT_H_
#define ACCOUNT_H_

#include <string>
#include <vector>

using namespace std;

class account{
public:
	account(string usr);
	string getUsername() const;
	vector<Budget> getPeriods() const;
	void startNextPeriod();
private:
	string username;
	vector<Budget> period;
};

#endif
