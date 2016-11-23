// Account Controller cpp file.
#include "AccountController.h"

AccountController::AccountController() : loggedIn(false), account(nullptr)
{
	//TODO
}

void AccountController::attemptLogin(Error& err, const string& usr, const string& pass)
{
	//TODO

}

bool AccountController::getLoggedIn() const
{
	//TODO
	return this->loggedIn;
}

void AccountController::createAccount(Error& err, const string& usr, const string& pass1, const string& pass2)
{
	//TODO
	//check if pass1==pass2
	//Try create account with usr/pass1; catch error from account entity.
	//store account info through file I/O
}

void AccountController::attemptLogout(Error& err)
{
	//TODO
	//Save all account entity changes
	//Try logout; catch error from file I/O...?

	//Why called attempt?
}

vector<string> AccountController::getCategories() const
{
	//TODO
	//Check loggedIn flag first...?
	//Access current account->current period.getCategories().getName()
	vector<string> ret;
//	vector<Category> dummy = this->account->period->pop_back().getCategories();
//	for (Category c : dummy){
//		ret.push_back(c.getName());
//	}
//
	return ret;
}

