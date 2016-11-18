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
	float getTotalAmount() const;
	pair<time_t,time_t> getDateRange() const;
	vector<Category> getCategories() const;
	map<string, vector<Expense> > getAllExpenses() const;
	vector<Expense> getExpenses(const string& cat) const;
	void changeTotalAmount(const float& newAmt);
	void changeCategories(vector<Category> cats);
	void deleteExpenses(vector<int> ids);
	void addExpenses(vector<Expense> expenses);

private:
	float totalAmount;
	time_t startDate;
	time_t endDate;
	map<string, Category> categories;
	map<string, vector<Expense> > expenses; 
};






