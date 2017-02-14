#include "ExpenseController.h"
#include <algorithm>
// don't need to create controller, blank constructor
ExpenseController::ExpenseController() { }

//takes the necessary parameters for creating a new Expense object & calls functions to add it to the data
void ExpenseController::addExpense(Error& err, const float& amt, const string& cat, time_t date, const string& note){
	Account* user = AccountController::getAccount();
	if(amt<0){
		err+= "Amount must be positive";
		return;
	}
	Budget budget = user->getPeriods().back();
	vector<Category> cats = budget.getCategories();
	bool validCat = false;
	for(int i = 0; i<cats.size();i++){
		if(cat.compare((cats[i].getName())) == 0){
			validCat = true;
		}
	}
	if(!validCat){
		err+= "Not a recognized category for this budget period";
		return;
	}
	pair<time_t,time_t> range = budget.getDateRange();
	if(date < range.first || date > range.second){
		err+= "Date is out of bounds for this budget period";
		return;
	}
	//creates new expense object
	Expense newExpense(amt, cat, date, note);
	vector<Expense> expenseVector;
	expenseVector.push_back(newExpense);
	budget.addExpenses(expenseVector);
}

//takes the index of an expense to be deleted and performs the necessary actions to delete it
void ExpenseController::deleteExpense(Error& err, int idx){
	Account* user = AccountController::getAccount();
	Budget budget = user->getPeriods().back();
    vector<int> toDelete;
    toDelete.push_back(idx);

}

//fills references to vectors of tuples with with the info from expenses in the current period and historical expenses
void ExpenseController::populateExpenses(Error& err, vector<tuple<int,float,time_t,string,string> >& current, vector<tuple<int,float,time_t,string,string> >& historical){
	Account* user = AccountController::getAccount();
	vector<Budget> budgets = user->getPeriods();
	Budget currentBudget = budgets.back();

	map<string, vector<Expense>> currentExpenses_byCat = currentBudget.getAllExpenses();
	vector<Expense> currentExpenses_byDate;
	for (auto const& cat : currentExpenses_byCat){ //loop through all categories of expenses
		for(unsigned int i = 0; i < cat.second.size(); i++){ //loop through each expense for specific category
			currentExpenses_byDate.push_back(cat.second[i]);
		}
	}
	sort(currentExpenses_byDate.begin(),currentExpenses_byDate.end());
	//populates the current vector with the expenses from the current period
	for(unsigned int i =0; i<currentExpenses_byDate.size(); i++){
		int tempID = currentExpenses_byDate[i].getID();
		float tempAmount = currentExpenses_byDate[i].getAmount();
		time_t tempDate = currentExpenses_byDate[i].getDate();
		string tempCat = currentExpenses_byDate[i].getCategory();
		string tempNote = currentExpenses_byDate[i].getNote();
		//keeps track of the id of the expense at a particular index
		indx_to_id_Map.insert(pair<int,int>(i,tempID));
		current.push_back(tuple<int,float,time_t,string,string>(tempID,tempAmount,tempDate,tempCat,tempNote));
	}

	vector<Expense> historicalExpenses_byDate;
	for(unsigned int i =0; i<budgets.size()-1; i++){
		Budget tempBudget = budgets[i];
		map<string,vector<Expense>> historicalExpensePeriod_byCat = tempBudget.getAllExpenses();
		for (auto const& cat : historicalExpensePeriod_byCat){
			for(unsigned int i = 0; i < cat.second.size(); i++){
				historicalExpenses_byDate.push_back(cat.second[i]);
			}
		}
	}
	sort(historicalExpenses_byDate.begin(),historicalExpenses_byDate.end());
	//for the temp budget, puts the relevant attributes into the historical vector
	for(unsigned int j = 0; j<historicalExpenses_byDate.size(); j++){
		int tempID = historicalExpenses_byDate[j].getID();
		float tempAmount = historicalExpenses_byDate[j].getAmount();
		time_t tempDate = historicalExpenses_byDate[j].getDate();
		string tempCat = historicalExpenses_byDate[j].getCategory();
		string tempNote = historicalExpenses_byDate[j].getNote();
		historical.push_back(tuple<int,float,time_t,string,string>(tempID,tempAmount,tempDate,tempCat,tempNote));
		}
}

