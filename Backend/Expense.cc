#include "Expense.h"

Expense::Expense(const float& amt, const string& cat, const time_t d, const string& n){
	amount = amt;//cap at 10k, can't be negative
	category = cat;//no numbers, no symbols, 3-15 characters
	date = d;//make sure it's today's date, or before
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
	out << "amount: " << right.amount << " category:" << right.category << " date: " << right.date << " note: " << right.note << " id: " << right.id;
	return out;
}

bool operator<(const int& left, const Expense& right){
	return (float(left) < right.getAmount());
}
