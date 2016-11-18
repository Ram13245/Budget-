// This is account entity cpp file.

#include "../inc/Account.h"

Account::Account(string usr){
	username = usr;
}

string Account::getUsername() const{
	return username;
}

vector<Budget> Account::getPeriods() const{
	//return period;
    vector<Budget> ret;
    return ret;
}

void Account::startNextPeriod(){
}

//Destructor
Account::~Account(){
	//for (Budget b: *period) {
	//	delete b;
	//}
	//delete[] period;
}

Account::Account(const Account& right){
}

Account& Account::operator=(const Account& right){
    return *this;
}
