#include <string>
#include "time.h"
#include <iostream>

using namespace std;

class Expense
{
public:
	Expense(const float& amt, const string& cat, const time_t d, const string& note = "");
	float getAmount() const;
	string getCategory() const;
	time_t getDate() const;
	string getNote() const;

private:
	float amount;
	string category;
	time_t date;
	string note;
	int id;
	
	friend ostream &operator<<(ostream &out, const Expense &E);
};
