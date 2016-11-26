#include "Expense.h"

Expense::Expense(const float& amt, const string& cat, const time_t d, const string& n){
	if(amt > 10000 || amt < 0)
		cout << "invalid expense amount!" << endl;
	else
		amount = amt;//cap at 10k, can't be negative
	if(cat.length() < 3 || cat.length() > 15)//add check for non numeric or symbol
		cout << "invalid category name!" << endl;
	else
		category = cat;//no numbers, no symbols, 3-15 characters
	if(difftime(d, time(0)) > 0)
		cout << "invalid date!" << endl;
	else
		date = d;//make sure it's today's date, or before
	if(n.length() > 50)
		cout << "invalid note!" << endl;
	else
		note = n;//max 50 characters
	static int temp_id = 0;
	id = temp_id;
	temp_id++;
}

float Expense::getAmount() const{ return amount; }
string Expense::getCategory() const{ return category; }
time_t Expense::getDate() const{ return date; }
string Expense::getNote() const{ return note; }
int Expense::getID() const{ return id; }

ostream& operator<<(ostream& out, const Expense& right) {
	out << "amount: " << right.amount << " category:" << right.category << " date: " << ctime(&right.date) << " note: " << right.note << " id: " << right.id;
	return out;
}

bool operator<(const int& left, const Expense& right){
	return (float(left) < right.getAmount());
}
