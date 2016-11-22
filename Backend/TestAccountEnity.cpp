/*
 * TestAccountEnity.cpp
 *
 *  Created on: 2016Äê11ÔÂ21ÈÕ
 *      Author: Kerwi
 */

#include "Account.h"

int main(){
	Account* test1 = new Account("Eniac123");
	cout << test1->getUsername() << endl;
	Account* test2 = new Account("123456789123456789");
	Account* test3 = new Account("1");
	// Account* test4 = new Account(1234);
	Account* test4 = new Account("Eniac$");

	return 0;
}
