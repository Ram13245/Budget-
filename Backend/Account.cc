// This is account entity cpp file.

#include "Account.h"

Account::Account(string usr) : username(usr), period(nullptr) {
}

string Account::getUsername() const{
	return username;
}

vector<Budget> Account::getPeriods() const{
	//return period;
	//TODO
    vector<Budget> ret;
    return ret;
}

void Account::startNextPeriod(){
	//TODO
}

//Destructor
Account::~Account(){
	//TODO
	//for (Budget b: *period) {
	//	delete b;
	//}
	//delete[] period;
}

Account::Account(const Account& right) : username("") {
	//TODO
	period = nullptr;
}

Account& Account::operator=(const Account& right){
	//TODO
    return *this;
}
