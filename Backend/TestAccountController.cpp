///*
// * TestAccountController.cpp
// *
// *  Created on: 2016Äê11ÔÂ26ÈÕ
// *      Author: Kerwi
// */
//
//#include "AccountController.h"
//
//int main(){
//	cout << "====================TEST ACCOUNT CONTROLLER====================\n" << endl;
//
//	cout << "Creating a new account controller..." << endl;
//	AccountController* acntCon = new AccountController();
//	cout << "Account controller created." << endl;
//
//	cout << "\nCreating a new error object..." << endl;
//	Error err;
//	cout << "Error object created." << endl;
//
//	cout << "\nTest create new accounts with illegal usernames." << endl;
//	acntCon->createAccount(err, "6128740743732839482907312456235434364512", "thispassword", "thispassword");
//	acntCon->createAccount(err, "a", "thispassword", "thispassword");
//	acntCon->createAccount(err, "!@$#$%", "thispassword", "thispassword");
//
//	cout << "\nTest create new account with two different password input." << endl;
//	acntCon->createAccount(err, "Eniac", "thispassword", "thispassword1");
//
//	cout << "Test create a legal account." << endl;
//	Error e;
//	//acntCon->createAccount(e, "Eniac", "thispassword", "thispassword");
//
//	cout << "\nTest attempt log in." << endl;
//	Error a;
//	acntCon->attemptLogin(a, "Eniac", "thispassword");
//
//	cout << "\nTest accessor." << endl;
//	cout << "Should be true: " << acntCon->getLoggedIn() << endl;
//	cout << "Should be Eniac: " << acntCon->getAccount()->getUsername() << endl;
////	cout << "Should be 0: " << acntCon->getCategories().size() << endl;
//
//	cout << "\nTest attempt logout." << endl;
//	Error b;
//	acntCon->attemptLogout(b);
//
//
//	cout << "====================TEST ACCOUNT CONTROLLER ENDS====================\n" << endl;
//
//	return 0;
//}
