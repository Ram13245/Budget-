//NOTE: this is very unfinished, stuff that does not compile is commented out

//To do:
//decide on format for id_map,
//addExpenses debug, read comments!
//changecategories debug
//getexpenses debug
//deleteExpenses
//~Budget
//finish the constructor, you need to populate the categories and expenses
//test it all on windows!

#include "Budget.h"

using namespace std;

Budget::Budget(float amt, const time_t& sDate, const time_t& eDate, vector<Category>& cats)// : totalAmount(0), startDate(0), endDate(0)
{//put them on the heap
	//TODO
	categories = new map<string, Category>();//you need to populate it with expenses
	expenses = new map<string, vector<Expense>>();
	id_map = new map<int, int>();
	totalAmount = amt;
	startDate = sDate;
	endDate = eDate;
}

Budget::~Budget() {
//	for (map<string, Category>::iterator it = categories.begin(); it != categories.end(); ++it)
//	   ~Category();
//		delete it->second;
//	for ( int i = 0; i < categories.size(); i++)
//	{
//	    delete categories;
//	}
//	delete[] categories;

	//iterate through all heap elements setting inside out elements to null pointers
	delete this;
}

float Budget::getTotalAmount() const{
	return totalAmount;
}

pair<time_t,time_t> Budget::getDateRange() const{
	//TODO
	return make_pair(startDate, endDate);
}

vector<Category> Budget::getCategories() const{//returns the categories in a vector without keys associated with them
//	map<int index, int id>;
	//TODO
    vector<Category> ret;
    for(auto const& cur_cat : *categories) {
    	ret.push_back(cur_cat.second);
      }
    return ret;
    }

map<string, vector<Expense> > Budget::getAllExpenses() const{
	return *expenses;
}

vector<Expense> Budget::getExpenses(const string& cat) const{
	//TODO
//	vector<Expense> returnable;
	//fill the id_map
	return expenses->find(cat)->second;

	//trying to implement the id_map in this below
//	vector<Expense> cat_expenses = expenses->find(cat)->second;
//	for(int i = 0; i < cat_expenses.size(); i++){
//		*id_map[i] = cat_expenses[i].getID();//not sure about the index value though, should it be category maybe? maybe it should be like get categories, where it returns a flattened version of all of the expenses
//	}
}

void Budget::changeTotalAmount(const float& newAmt){
	//TODO
	totalAmount = newAmt;
}

void Budget::changeCategories(vector<Category> cats){//needs testing
	//go through each category, see if names are already in there.
	//swap category objects in old one if they exist in both,
	//delete any old ones that are not in the new one,
	//add new ones that are not in the old one
	//TODO

	//	map<string, Category> categories_copy = *categories;

	//get array of names that are present in the categories
	vector<string> original_cat_names;
	vector<string> new_cat_names;
	int i;

	for(auto const& iter : *categories) {
		original_cat_names.push_back(iter.second.getName());
	}

	for(i = 0; i <  cats.size(); i++){
		new_cat_names.push_back(cats[i].getName());
	}


	//you need to remove the categories that are not in the new one
		for(i = 0; i < original_cat_names.size(); i++){
			//if (!(find(new_cat_names.begin(), new_cat_names.end(), original_cat_names[i]) != new_cat_names.end()))
			//{
			//	categories->erase(original_cat_names[i]);//check this one out
			//}
			}
		//you need to find replace the existing categories
		//you need to add all of the new ones
		for(i = 0; i < new_cat_names.size(); i++){
			//next line is not working
//			*categories[new_cat_names[i]] = cats[i];
		}
	};

void Budget::deleteExpenses(vector<int> ids){//again, I think that category needs to be specified, though the ids should be unique
	//TODO

	//flatten expenses into a vector
	//pair each index with an id in a map
	//iterate through ids, deleting any map element with an id match

	//iterate through all expenses in all categories
	//if id matches, delete it
	//looks in the map note declared at bottom of the budget header for the expense that is associated with that id
};

void Budget::addExpenses(const vector<Expense>& exp){//I think that category needs to be specified
	//TODO
	for(Expense e : exp){
		string cat = e.getCategory();
		if(expenses->count(cat) == 1){
			expenses->at(cat).push_back(e);
		}
		else{
			vector<Expense> new_category;
			new_category.push_back(e);
			expenses->insert(map<string, vector<Expense>>::value_type(cat, new_category));
//			expensesinsert(cat,new_category);
//			expenses[cat] = new_category;

		}
	}
	//for each expense in the vector
	//call the getCate
};
