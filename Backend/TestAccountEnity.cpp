///*
// * TestAccountEnity.cpp
// *
// *  Created on: 2016Äê11ÔÂ21ÈÕ
// *      Author: Kerwi
// */
//
//#include "Account.h"
//
//int main(){
//	cout << "====================TEST ACCOUNT ENTITY====================\n" << endl;
//
//	cout << "Test valid username" << endl;
//	cout << "Test1" << endl;
//	Account* test1 = new Account("Eniac123");
//	cout << test1->getUsername() << endl;
//
//	cout << "\nTest username too long." << endl;
//	Account* test2 = new Account("123456789123456789");
//
//	cout << "\nTest username too short." << endl;
//	Account* test3 = new Account("1");
//
//	cout << "\nTest special characters in username." << endl;
//	// Account* test4 = new Account(1234);
//	Account* test4 = new Account("Eniac$");
//
//	cout << "\nTest accessors" << endl;
//	string input = "Eniac";
//	Account* test5 = new Account(input);
//	if(test5->getUsername() == input)
//		cout << "Correct Accessor" << endl;
//	else
//		cout << "Incorrect Accessor" << endl;
//	Account* test6 = new Account("hello");
//	if (!test6->getPeriods().size())
//		cout << "Correct Accessor" << endl;
//	else
//		cout << "Incorrect Accessor" << endl;
//
//	cout << "\nTest copy constructor" << endl;
//	Account* test7 = new Account(*test6);
//	cout << "Should be hello here: " << test7->getUsername() << endl;
//
//	cout << "\nTest assignment operator" << endl;
//	Account* test8 = new Account("wrongname");
//	test8 = test7;
//	cout << "Should be hello here too: " << test8->getUsername() << endl;
//
//	cout << "\n====================TEST ACCOUNT ENTITY ENDS====================\n" << endl;
//
//	return 0;
//}
