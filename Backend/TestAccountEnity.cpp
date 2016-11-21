/*
 * TestAccountEnity.cpp
 *
 *  Created on: 2016Äê11ÔÂ21ÈÕ
 *      Author: Kerwi
 */

#include "Account.h"

int main(){
	cout << "-------------TEST 1 -------------------------------" << endl;
	Account* test1 = new Account("eniac123");
	cout << test1->getUsername() << endl;
	cout << "-------------TEST 2 -------------------------------" << endl;
	Account* test2 = new Account("123456789123456789");
	cout << "-------------TEST 3 -------------------------------" << endl;
	Account* test3 = new Account("1");
	// Account* test4 = new Account(1234);
	cout << "-------------TEST 4 -------------------------------" << endl;
	Account* test4 = new Account("Eniac$");

	return 0;
}
