#pragma once

#include <string>
#include <ctime>
#include <iostream>
#include <map>
#include <vector>

#include "Expense.h"
#include "Category.h"

using namespace std;

class Budget
{
public:
	Budget(float amt, const time_t& sDate, const time_t& eDate, vector<Category>& cats);
	~Budget();
	float getTotalAmount() const;
	pair<time_t,time_t> getDateRange() const;
	vector<Category> getCategories() const;
	map<string, vector<Expense> > getAllExpenses() const;
	vector<Expense> getExpenses(const string& cat) const;
	void changeTotalAmount(const float& newAmt);
	void changeCategories(vector<Category> cats);
	void deleteExpenses(vector<int> ids);
	void addExpenses(const vector<Expense>& exp);

private:
	float totalAmount;
	time_t startDate;
	time_t endDate;
	map<string, Category>* categories;//heap
	map<string, vector<Expense> >* expenses;//heap
	map<int, int>* id_map;//map<int index, int id> //always empty until getCategories is called, holds the mapping between getExpenses vector and the expense ids
};






