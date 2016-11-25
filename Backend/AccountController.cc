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
	//TODO
	return this->loggedIn;
}//Done

void AccountController::createAccount(Error& err, const string& usr, const string& pass1, const string& pass2)
{
	//TODO
	//check if pass1==pass2
	FileIOController* fioc = new FileIOController();
	//Try create account with usr/pass1; catch error from account entity.
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
	//store account info through file I/O
}

void AccountController::attemptLogout(Error& err)
{
	//TODO
	FileIOController* fioc = new FileIOController();
	//Save all account entity changes
	//fioc->saveSession(this->account->getUsername(), );
	//which budget object are we saving here?

	//Try logout; catch error from file I/O...?

	//Why this is called attempt logout?
}

vector<string> AccountController::getCategories() const
{
	//TODO
	//Check loggedIn flag first...?
	vector<string> ret;
	vector<Category> dummy = account->getPeriods().back().getCategories();
	for (Category c : dummy){
		ret.push_back(c.getName());
	}
	return ret;
}

