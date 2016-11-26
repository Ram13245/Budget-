#include "ChartController.h"
#include <algorithm>

using namespace std;

ChartController::ChartController() { }

void ChartController::getBudgetPie(Error& err, map<string, float>& data){
	//Account user = somehow get current account;
	Account* user = AccountController::getAccount();


	if (user->getPeriods().size() == 0) {
		err += "Empty period vector";
		return;
	}

	Budget budget = user->getPeriods().back();

	vector<Category> cats = budget.getCategories();

	for(unsigned int i = 0; i < cats.size(); i++){
		data[cats[i].getName()] = cats[i].getPercentage();
	}



}
void ChartController::getBurndown(Error& err, vector<pair<time_t,float> >& exp){
	//Account user = somehow get current account;
	Account* user = AccountController::getAccount();
	Budget budget = user->getPeriods().back(); //current budget

	map<string, vector<Expense>> allExpenses = budget.getAllExpenses();

	for (auto const& cat : allExpenses){ //loop through all categories of expenses
		for(unsigned int i = 0; i < cat.second.size(); i++){ //loop through each expense for specific category
			pair <time_t,float> temp (cat.second[i].getDate(), cat.second[i].getAmount());
			exp.push_back(temp);
		}
	}
	sort(exp.begin(),exp.end()); //sort exp by date (checked in tester, works)
}


void ChartController::getHabitPie(Error& err, map<string, float>& data){
	//TODO



}

void ChartController::getBudgetBar(Error& err, map<string, float>& data){
	//TODO
}
