#include "Budget.h"

using namespace std;

Budget::Budget(float amt, const time_t& sDate, const time_t& eDate, vector<Category>& cats) : totalAmount(0), startDate(0), endDate(0)
{
	//TODO
	//totalAmount = amt;
	//startDate = sDate;
	//endDate = eDate;
	//categories = cats;
}

float Budget::getTotalAmount() const{
	return totalAmount;
}

pair<time_t,time_t> Budget::getDateRange() const{
	//TODO
	//return (sDate, eDate);
    pair<time_t,time_t> ret;
    return ret;
}

vector<Category> Budget::getCategories() const{
	//TODO
	//return categories;
    vector<Category> ret;
    return ret;
}

map<string, vector<Expense> > Budget::getAllExpenses() const{
	//TODO
	return expenses;
}

vector<Expense> Budget::getExpenses(const string& cat) const{
	//TODO
	//return expenses[cat];
    vector<Expense> ret;
    return ret;
}

void Budget::changeTotalAmount(const float& newAmt){
	//TODO
	totalAmount = newAmt;
}

void Budget::changeCategories(vector<Category> cats){
	//TODO
};

void Budget::deleteExpenses(vector<int> ids){
	//TODO
};

void Budget::addExpenses(vector<Expense> expenses){
	//TODO
};
