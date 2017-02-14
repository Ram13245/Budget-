//Settings Controller CPP File
#include "SettingsController.h"
//#include "inc/Account.h"
#include <string>

using namespace std;

void SettingsController::changeCategoryWeights(Error& err, const map<string,float>& newCatWeight){
	Account* currentAccount = AccountController::getAccount();
	vector<Budget> budgets = currentAccount->getPeriods();
	Budget currentBudget = budgets.back(); //Back gets last budget(current)
	vector<Category> currentCats = currentBudget.getCategories();
	for(Category cCat : currentCats) {
		float newVal = newCatWeight.at(cCat.getName());
		cCat.changePercentage(newVal);
	}
}

void SettingsController::changeCategoryName(Error&, string originalName, string newName){
	Account* currentAccount = AccountController::getAccount();
	vector<Budget> budgets = currentAccount->getPeriods();
	Budget currentBudget = budgets.back(); //Back gets last budget(current)
	vector<Category> currentCats = currentBudget.getCategories();
	for(Category cCat : currentCats) {
		if(cCat.getName() == originalName){
			cCat.changeName(newName);
		}
	}
}
void SettingsController::addCategory(Error&, string name){
	//Category::Category(name,0.0);
	Account* currentAccount = AccountController::getAccount();
	vector<Budget> budgets = currentAccount->getPeriods();
	Budget currentBudget = budgets.back(); //Back gets last budget(current)
	vector<Category> currentCats = currentBudget.getCategories();
	Category newCat = Category(name, 0);
	currentCats.push_back(newCat);
}

void SettingsController::removeCategory(Error&, string removeName){
	Account* currentAccount = AccountController::getAccount();
	vector<Budget> budgets = currentAccount->getPeriods();
	Budget currentBudget = budgets.back(); //Back gets last budget(current)
	vector<Category> currentCats = currentBudget.getCategories();
	for(int i = 0; i < currentCats.size(); i++) {
		if(currentCats[i].getName() == removeName){
			//May need to make a change
			//currentCats.erase(remove(currentCats.begin(),currentCats.end(), cCat),currentCats.end());
			currentCats.erase(currentCats.begin() +i );
			break;
		}
	}
}

void SettingsController::changeTotalAmount(Error&, const float& newAmount){
	Account* currentAccount = AccountController::getAccount();
	vector<Budget> budgets = currentAccount->getPeriods();
	Budget currentBudget = budgets.back(); //Back gets last budget(current)
	currentBudget.changeTotalAmount(newAmount);
}
