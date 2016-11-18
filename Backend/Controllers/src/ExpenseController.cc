#include "ExpenseController.h"

// didn't include constructor, may not be applicable for ExpenseController class

//takes the necessary parameters for creating a new Expense object & calls functions to add it to the data
void ExpenseController::addExpense(Error& err, const float& amt, const string& cat, time_t date, const string& note){
     //TODO: write code for adding expenses
}

//takes the index of an expense to be deleted and preforms the necessary actions to delete it
void ExpenseController::deleteExpense(Error& err, int idx){
     //TODO: write code for deleting expenses
}

//fills references to vectors of tuples with with the info from expenses in the current period and histroical expenses
void ExpenseController::populateExpenses(Error& err, vector<pair<int,float> >& current, vector<pair<int,float> >& historical){
//void ExpenseController::populateExpenses(Error& err, vector<tuple<int,float,time_t,string,string> >& current, vector<tuple<int,float,time_t,string,string> >& historical){
     //TODO: write code for populating expense vector
}

