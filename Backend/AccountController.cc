// Account Controller cpp file.
#include "AccountController.h"

Account* AccountController::account = nullptr;

AccountController::AccountController() :
		loggedIn(false) {
	//TODO
}

void AccountController::attemptLogin(Error& err, const string& usr,
		const string& pass) {
	//TODO
	FileIOController fioc;
	vector<Budget> passedBudget;
	fioc.login(err, usr, pass, passedBudget);
	if (err.getMessage() != "") {
		cout << err.getMessage() << endl;
		return;
	} else {
		cout << "Login Successful!\n" << endl;
		account = new Account(usr, passedBudget);
	}
}

bool AccountController::getLoggedIn() const {
	return this->loggedIn;
} //Done

void AccountController::createAccount(Error& err, const string& usr,
		const string& pass1, const string& pass2) {
	string inputs =
			"QWERTYUIOPASDFGHJKLZXCVBNMqwertyuiopasdfghjklzxcvbnm1234567890";
	FileIOController fioc;
	if (pass1 != pass2) {
		err += "Two password inputs are not identical, try again!\n";
	} else {
		if (usr.length() < 3 || usr.length() > 15)
			err += "Username length must be between 3 and 15 characters!";
		else {
			for (char a : usr) {
				if (inputs.find(a) != std::string::npos) {
				} else
					err += "Username can only contain letters and numbers";
				break;
			}
		}
	}
	if (err.getMessage() == "") {
		Account newAccount(usr);
		fioc.addUser(err, usr, pass1);
		cout << "Account created successfully." << endl;
	} else {
		cout << err.getMessage() << endl;
	}
}

void AccountController::attemptLogout(Error& err) {
	FileIOController fioc;
	fioc.saveSession(this->account->getUsername(),
			this->account->getPeriods().back());
	account = nullptr;
	loggedIn = false;
	cout << "Logout successful." << endl;
}

vector<string> AccountController::getCategories() const {
	vector<string> ret;
	vector<Category> dummy = account->getPeriods().back().getCategories();
	if (dummy.size()) {
		for (Category c : dummy) {
			ret.push_back(c.getName());
		}
		return ret;
	} else {
		return ret;
	}
}

Account* AccountController::getAccount() {
	return account;
}
