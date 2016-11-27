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
	Budget(float amt, const time_t& sDate, const time_t& eDate, vector<Category>& cats);//tested
	~Budget();
	float getTotalAmount() const;//tested
	pair<time_t,time_t> getDateRange() const;//tested
	vector<Category> getCategories() const;//tested
	map<string, vector<Expense> > getAllExpenses() const;//tested
	vector<Expense> getExpenses(const string& cat) const;//tested
	void changeTotalAmount(const float& newAmt);//tested
	void changeCategories(vector<Category> cats);//tested
	void deleteExpenses(vector<int> ids);
	void addExpenses(const vector<Expense>& exp);//tested

private:
	float totalAmount;
	time_t startDate;
	time_t endDate;
	map<string, Category>* categories;//heap
	map<string, vector<Expense> >* expenses;//heap
};
