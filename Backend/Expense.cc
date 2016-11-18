#include "Expense.h"

Expense::Expense(const float& amt, const string& cat, const time_t d, const string& n){
	//TODO
	amount = amt;
	category = cat;
	date = d;
	note = n;
	id = 0;
}

float Expense::getAmount() const{ return amount; }
string Expense::getCategory() const{ return category; }
time_t Expense::getDate() const{ return date; }
string Expense::getNote() const{ return note; }

ostream& Expense::operator<<(ostream& out) {
	out << "amount: " << amount << "category:" << category << "date: " << date << "note: " << note << "id: " << id;
	return out;
}


