//Settings Controller Header File
#pragma once

#include <string>
#include "AccountController.h"
#include "Error.h"

using namespace std;

class SettingsController{
public:
	void changeCategoryWeights(Error&, const map<string,float>&);
	void changeCategoryName(Error&, string, string);
	void addCategory(Error&, string);
	void removeCategory(Error&, string);
	void changeTotalAmount(Error&, const float&);
};
