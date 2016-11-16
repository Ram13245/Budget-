//Settings Controller Header File
#ifndef SETTINGS_H_
#define SETTINGS_H_

#include <string>

using namespace std;

class SettingsController{
	public:
	void addCategory(string name, double perc);
	Category changeCategory(string name, double perc);
	void removeCategory(string name);
};