#include "expense.h"

Expense::Expense(const float& amt, const string& cat, const time_t d, const string& n = ""){
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

ostream& operator<<(ostream& out, Expense &E) {
	out << "amount: " << E.amount << "category:" << E.category << "date: " << E.date << "note: " << E.note << "id: " << E.id;
	return out;
}


