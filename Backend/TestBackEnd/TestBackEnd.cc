//#include "../AccountController.h"

//int main() {
//    cout << "Hello world!" << endl;
//    return 0;
//}

#include "../Budget.h"
#include <iostream>
#include <string>
#include "time.h"

int main() {
	cout << "Testing expense entity" << endl;
	time_t time_test;
	time_test = time(NULL);
	Expense test_expense(100, "food", time_test, "this is a note!");
	cout << test_expense.getAmount() << endl;
	cout << test_expense.getCategory() << endl;
	cout << test_expense.getDate() << endl;
	cout << test_expense.getNote() << endl;
	Expense test_expense2(500, "rent", time_test, "this is a note...2!");
	cout << test_expense << endl;
	cout << test_expense2 << endl;

	cout << "testing the budget entity" << endl;


}

//time_t test_stime;
//time_t test_etime;
//
//Budget test_budget(100, test_stime, test_etime,);
