#pragma once

#include <tuple>

#include "FileIOController.h"
#include "Account.h"
#include "Budget.h"
#include "AccountController.h"

class ExpenseController
{
	ExpenseController();
private:
    void addExpense(Error& err, const float& amt, const string& cat, time_t date, const string& note = "");
    void deleteExpense(Error& err, int idx);
    void populateExpenses(Error& err, vector<tuple<int,float,time_t,string,string> >& current, vector<tuple<int,float,time_t,string,string> >& historical);
    map<int,int> indx_to_id_Map;
};
