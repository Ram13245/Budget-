// This is account entity cpp file.

#include "Account.h"

Account::Account(string usr){
	this->username = usr;
}

string Account::getUsername(){
	return this->username;
}

vector<Budget> Account::getPeriods(){
	return this->period;
}

void Account::startNextPeriod(){
}

//Destructor
Account::~Account(){
	for (Budget b: period) {
		delete b;
	}
	delete[] period;
}

Account::Account(const Account& right){
}

Account& Account::operator=(const Account& right){

}
