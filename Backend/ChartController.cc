#include "ChartController.h"
#include <algorithm>

using namespace std;

ChartController::ChartController() { }

void ChartController::getBudgetPie(Error& err, map<string, float>& data){
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
	vector<Category> cats = budget.getCategories();

	vector<Expense> catExpenses;
	for(unsigned int i = 0; i < cats.size(); i++){
		catExpenses = budget.getExpenses(cats[i].getName()); //when we create categories, are expenses made? will this error? (should be handled in Budget, right?)

		for(unsigned int j = 0; j < catExpenses.size(); j++){
			pair <time_t,float> temp (catExpenses[j].getDate(),catExpenses[j].getAmount());
			exp.push_back(temp);
		}
	}

	sort(exp.begin(),exp.end());
	//sort exp by date
}


void ChartController::getHabitPie(Error& err, map<string, float>& data){
	//TODO



}

void ChartController::getBudgetBar(Error& err, map<string, float>& data){
	//TODO
}
