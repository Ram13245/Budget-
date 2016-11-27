// This is account entity cpp file.
#include "Account.h"

Account::Account(string usr) {
	string inputs = "QWERTYUIOPASDFGHJKLZXCVBNMqwertyuiopasdfghjklzxcvbnm1234567890";
	this->period = nullptr;
	if(usr.length() < 3 || usr.length() > 15)
		cout << "Username length must be between 3 and 15 characters!" << endl;
	else{
	for (char& a : usr){
		if(inputs.find(a) != std::string::npos){
			this->username = usr;
		}
		else
			cout << "Username can only contain letters and numbers" << endl;
		break;
		}
	}
}

Account::Account(string usr, vector<Budget>* budgets){
	string inputs = "QWERTYUIOPASDFGHJKLZXCVBNMqwertyuiopasdfghjklzxcvbnm1234567890";
		this->period = budgets;
		if(usr.length() < 3 || usr.length() > 15)
			cout << "Username length must be between 3 and 15 characters!" << endl;
		else{
		for (char& a : usr){
			if(inputs.find(a) != std::string::npos){
				this->username = usr;
			}
			else
				cout << "Username can only contain letters and numbers" << endl;
			break;
			}
		}
}

string Account::getUsername() const{
	return this->username;
}

vector<Budget> Account::getPeriods() const{
	//TODO
	if (this->period == nullptr){
		vector<Budget> test;
		return test;
	}
	vector<Budget>* sameperiod = new vector<Budget>;
	sameperiod = period;
	return *sameperiod;
}

void Account::startNextPeriod(){
	//TODO
	time_t timer = time(NULL);
	float dum = 0.00;
	vector<Category> dummy;
	Budget a(dum, timer, timer, dummy);
	period->push_back(a);
}

//Destructor
Account::~Account(){
	//TODO
	period->clear();
	delete period;
	period = nullptr;
}	//Done

Account::Account(const Account& right) : username("") {
	//TODO
	this->username = right.getUsername();
	this->period = nullptr;
	if (right.getPeriods().size()){
		this->period = new vector<Budget>;
		for (Budget b: right.getPeriods()){
			period->push_back(b);
		}
	}
}	//Done

Account& Account::operator=(const Account& right){
	//TODO
	if (this != &right){
		period->clear();
		delete period;
		this->username = right.getUsername();
		for (Budget b: right.getPeriods()){
			period->push_back(b);
		}
	}
    return *this;
}	//Done
