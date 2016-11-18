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
	return false;
}

void AccountController::createAccount(Error& err, const string& usr, const string& pass1, const string& pass2)
{
	//TODO
}

void AccountController::attemptLogout(Error& err)
{
	//TODO
}

vector<string> AccountController::getCategories() const
{
	//TODO
	vector<string> ret;
	return ret;
}

