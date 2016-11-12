class ExpenseController
{
     private:
          void addExpense(Error& err, const float& amt, const string& cat, time_t date, const string& note = "");
	  void deleteExpense(Error& err, int idx);
	  void populateExpenses(cont string& file, vecotr<tuple<>>& current, vector<tuple>>&historical);
}
