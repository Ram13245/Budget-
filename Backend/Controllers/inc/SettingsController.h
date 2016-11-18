//Settings Controller Header File
#pragma once

#include <string>
#include "../../Entity/inc/Account.h"
#include "../../Entity/inc/Error.h"

using namespace std;

class SettingsController{
	public:
	void addCategory(string name, double perc);
	void changeCategory(string name, double perc);
	void removeCategory(string name);
};
