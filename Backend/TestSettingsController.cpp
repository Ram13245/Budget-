/*
 * TestSettingsController.cpp
 *
 *  Created on: Nov 26, 2016
 *      Author: Kyle
 */

#include "SettingsController.h"

int main(){
	cout << "------Settings Controller Tests----" << endl;
	map<string, float> test1;
	test1.insert(pair<string, float>("food", 200.0));
	Error err;
	AccountController* acntCon = new AccountController();
	//acntCon->changeCategoryWeights(err, test1&);


	return 0;
}
