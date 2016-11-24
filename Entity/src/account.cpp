// This is account entity cpp file.

#include "account.h"

account::account(string usr){
	this->username = usr;
}

string account::getUsername() const{
	return this->username;
}

vector<Budget> account::getPeriods(){
	return this->period;
}

void account::startNextPeriod(){

}
