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
}

void SettingsController::removeCategory(Error&, string){

}

void SettingsController::changeTotalAmount(Error&, const float& newAmount){

}
