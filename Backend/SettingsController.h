//Settings Controller Header File
#pragma once

#include <string>
#include "Account.h"
#include "Error.h"

using namespace std;

class SettingsController{
public:
	SettingsController();
	void addCategory(string name, double perc);
	void changeCategory(string name, double perc);
	void removeCategory(string name);
};
