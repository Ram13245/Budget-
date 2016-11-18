#include "Budget.h"

using namespace std;

Budget::Budget(const float& amt, const time_t& sDate, const time_t& eDate, vector<Category>& cats){
	totalAmount = amt;
	startDate = sDate;
	endDate = eDate;
	categories = cats;
}

float Budget::getTotalAmount() const{
	return totalAmount;}

pair<time_t,time_t> Budget::getDateRange() const{
	return (sDate, eDate);}

vector<Category> Budget::getCategories() const{
	return categories;}

map<string, vector<Expense>> Budget::getAllExpenses() const{ 
	return expenses;}

vector<Expense> Budget::getExpenses(const string& cat) const{ 
	return expenses[cat];}

void Budget::changeTotalAmount(const float& newAmt){
	totalAmount = newAmt;}

Budget Budget::getBudget(){
	return this->Budget;
}

void Budget::changeCategories(vector<Category> cats){};
void Budget::deleteExpenses(vector<int> ids){};
void Budget::addExpenses(vector<Expense> expenses){};
