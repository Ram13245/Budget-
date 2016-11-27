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
	Account* user = AccountController::getAccount();
	Budget curBudget = user->getPeriods().back();

	vector<int> catVals;
	vector<string> catNames;
	float budgetVal;
	float sumBudgetTotals = 0;

	for(unsigned int i = 0; i < curBudget.getCategories().size(); i++){
		catNames.push_back(curBudget.getCategories()[i].getName());
		catVals.push_back(0);
	}

	for(unsigned int i = 0; i < user->getPeriods().size(); i++){
		Budget budget = user->getPeriods()[i];
		budgetVal = budget.getTotalAmount();
		sumBudgetTotals += budgetVal;
		for(unsigned int j = 0; j < budget.getCategories().size(); j++){
			Category curCat = budget.getCategories()[j];
			if(find(catNames.begin(), catNames.end(), curCat.getName()) != catNames.end()) {
				catVals[j] += curCat.getPercentage() * budgetVal;
			}
		}
	}
	for(unsigned int i = 0; i < catNames.size(); i++){
			data[catNames[i]] = catVals[i]/sumBudgetTotals;
		}
}

void ChartController::getBudgetBar(Error& err, map<string, float>& data){
	Account* user = AccountController::getAccount();
	Budget budget = user->getPeriods().back();
	map<string, vector<Expense>> allExpenses = budget.getAllExpenses();
	float totalAmount = budget.getTotalAmount();
	float curCatSpent = 0;
	float curCatAmount;

	for (auto const& cat : allExpenses){ //loop through all categories of expenses
		for(unsigned int i = 0; i < cat.second.size(); i++){ //loop through all expenses for category
			curCatSpent += cat.second[i].getAmount(); //sum all the expenses for the category
		}

		for(unsigned int j = 0; j < budget.getCategories().size(); j++){ //find category with name
			if(budget.getCategories()[j].getName() == cat.first){ //check name
				curCatAmount = budget.getCategories()[j].getPercentage() * totalAmount; //find total $ allocated for category
				data[cat.first] = curCatSpent/curCatAmount;
			}
		}
		curCatSpent = 0;
	}

}
