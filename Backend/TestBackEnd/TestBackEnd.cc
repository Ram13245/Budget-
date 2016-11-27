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
	Expense test_expense(100, "burger", time_test, "it was tasty");
	cout << test_expense.getAmount() << endl;
	cout << test_expense.getCategory() << endl;
	cout << test_expense.getDate() << endl;
	cout << test_expense.getNote() << endl;
	Expense test_expense2(500, "rent", time_test, "this is a note...2!");
	cout << test_expense << endl;
	cout << test_expense2 << endl;

	cout << "testing the category entity" << endl;
	Category test_category("food", 0.99);
	cout << test_category.getName() << endl;
	cout << test_category.getPercentage() << endl;
	cout << test_category;
	cout << "changing the percentage and name" << endl;
	test_category.changePercentage(0.33);
	test_category.changeName("not food");
	cout << test_category;

	cout << "testing the budget entity" << endl;
	//test constructor
	time_t budget_start;
	time_t budget_end;
	vector<Category> budget_categories;
	Category test_category1("food", 0.25);
	budget_categories.push_back(test_category1);
	Category test_category2("rent", 0.45);
	budget_categories.push_back(test_category2);
	Category test_category3("other", 0.30);
	budget_categories.push_back(test_category3);
	Budget test_budget(1000, budget_start, budget_end + 1, budget_categories);

	//testing getTotalAmount
	cout << test_budget.getTotalAmount() << endl;
	//testing getDateRange
	cout << test_budget.getDateRange().first << " "
			<< test_budget.getDateRange().first << endl;
	//testing getCategories
	vector<Category> budget_categories_test = test_budget.getCategories();
	for (auto &cati : budget_categories_test)
		cout << cati;
	//testing addExpenses
	vector<Expense> test_add_expenses;
	test_add_expenses.push_back(test_expense);
	test_add_expenses.push_back(test_expense2);
	test_budget.addExpenses(test_add_expenses);
	//testing getAllExpenses
	map<string, vector<Expense> > budget_all_expenses_test =
			test_budget.getAllExpenses();
	for (auto &b : budget_all_expenses_test) {
		for (auto &e : b.second)
			cout << e << endl;
	}
	//testing getExpenses
	try {
		vector<Expense> test_get_expenses = test_budget.getExpenses(
				"shouldn't do anything"); //("burger");
		if (test_get_expenses.size() > 0) {
			for (int i = 0; i < test_get_expenses.size(); i++) {
				cout << test_get_expenses[i] << endl;
			}
		}
	} catch (const std::length_error& e) {
		cout << "no expenses found" << endl;
	}
	try {
		vector<Expense> test_get_expenses = test_budget.getExpenses("burger"); //("burger");
		if (test_get_expenses.size() > 0) {
			for (int i = 0; i < test_get_expenses.size(); i++) {
				cout << test_get_expenses[i] << endl;
			}
		}
	} catch (const std::length_error& e) {
		cout << "no expenses found" << endl;
	}

	//testing changeTotalAmount
	test_budget.changeTotalAmount(300);
	cout << test_budget.getTotalAmount() << endl;

	//testing changeCategories
	vector<Category> test_change_categories;
		Category test_category4("food", 0.45);
		test_change_categories.push_back(test_category4);
		Category test_category5("school", 0.05);
		test_change_categories.push_back(test_category5);
		Category test_category6("misc", 0.50);
		test_change_categories.push_back(test_category6);
	test_budget.changeCategories(test_change_categories);
	vector<Category> budget_changed_categories_test = test_budget.getCategories();
		for (auto &cati : budget_changed_categories_test)
			cout << cati;

	//testing deleteExpenses
		vector<Expense> test_add_expenses2;
		Expense test_expense3(6, "textbook", time_test, "this is a note...2!");
		Expense test_expense4(23, "television", time_test, "this is cool!");
		Expense test_expense5(326, "beer", time_test, "this is a note...2!");
		test_add_expenses2.push_back(test_expense3);
		test_add_expenses2.push_back(test_expense4);
		test_add_expenses2.push_back(test_expense5);
		test_budget.addExpenses(test_add_expenses2);

	cout << "\nbefore deletions" << endl;
	map<string, vector<Expense> > budget_delete_expenses_test = test_budget.getAllExpenses();
		for (auto &b : budget_delete_expenses_test) {
			for (auto &e : b.second)
				cout << e << endl;
		}

	cout << "\nafter deleting id 0" << endl;
	vector<int> to_be_deleted_0;
	to_be_deleted_0.push_back(0);
	test_budget.deleteExpenses(to_be_deleted_0);
	map<string, vector<Expense> > budget_delete_expenses_test2 = test_budget.getAllExpenses();
			for (auto &b : budget_delete_expenses_test2) {
				for (auto &e : b.second)
					cout << e << endl;
			}

	cout << "\nafter deleting id 1" << endl;
		vector<int> to_be_deleted_1;
		to_be_deleted_1.push_back(1);
		test_budget.deleteExpenses(to_be_deleted_1);
		map<string, vector<Expense> > budget_delete_expenses_test3 = test_budget.getAllExpenses();
		for (auto &b : budget_delete_expenses_test3) {
					for (auto &e : b.second)
						cout << e << endl;
				}
	test_budget.~Budget();
}

//time_t test_stime;
//time_t test_etime;
//
//Budget test_budget(100, test_stime, test_etime,);
