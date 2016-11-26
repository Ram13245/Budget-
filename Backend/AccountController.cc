// Account Controller cpp file.
#include "AccountController.h"

Account* AccountController::account = nullptr;

AccountController::AccountController() : loggedIn(false)
{
	//TODO
}

void AccountController::attemptLogin(Error& err, const string& usr, const string& pass)
{
	//TODO
	FileIOController* fioc = new FileIOController();
	vector<Budget> dummy;
	fioc->login(err, usr, pass, dummy);
	if (err.getMessage()!="") {
		cout << err.getMessage() << endl;
		return;
	}

	cout << "Login Successful!\n" << endl;
	account = new Account(usr);
}

bool AccountController::getLoggedIn() const
{
	return this->loggedIn;
}//Done

void AccountController::createAccount(Error& err, const string& usr, const string& pass1, const string& pass2)
{
	FileIOController* fioc = new FileIOController();
	if (pass1!=pass2){
			err += "Two password inputs are not identical, try again!\n";
			cout << err.getMessage() << endl;
		}
		else{
			Account newAccount(usr);
			if (err.getMessage()==""){
				fioc->addUser(err, usr, pass1);
			}
			else{
				cout << err.getMessage() << endl;
			}
		}
}

void AccountController::attemptLogout(Error& err)
{
	FileIOController* fioc = new FileIOController();
		fioc->saveSession(this->account->getUsername(), this->account->getPeriods().back());
		account = nullptr;
		loggedIn = false;
}

vector<string> AccountController::getCategories() const
{
	vector<string> ret;
	vector<Category> dummy = account->getPeriods().back().getCategories();
	for (Category c : dummy){
		ret.push_back(c.getName());
	}
	return ret;
}

Account* AccountController::getAccount()
{
	return account;
}
