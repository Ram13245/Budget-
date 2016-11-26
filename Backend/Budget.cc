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
	categories = new map<string, Category>();//you need to populate it
	for(int i = 0; i < cats.size(); i++)
		categories->insert(pair<string, Category>(cats[i].getName(),cats[i]));
	expenses = new map<string, vector<Expense>>();
	totalAmount = amt;
	startDate = sDate;
	endDate = eDate;
}

Budget::~Budget() {
	//delete categories
	categories->clear();
	//delete expenses
	for(map<string, vector<Expense>>::iterator it = expenses->begin(); it != expenses->end(); it++){
		it->second.clear();
	}
	expenses->clear();
	//delete the budget
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
	return expenses->find(cat)->second;
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

	//get array of names that are present in the categories
	vector<string> original_cat_names;
	vector<string> new_cat_names;
	int i;
	map<string, Category>::iterator iter;

	for(iter = categories->begin(); iter != categories->end(); iter++){
		original_cat_names.push_back(iter->second.getName());
	}

	for(i = 0; i <  cats.size(); i++){
		new_cat_names.push_back(cats[i].getName());
	}


	//you need to remove the categories that are not in the new one
		for(i = 0; i < original_cat_names.size(); i++){
			if (!(find(new_cat_names.begin(), new_cat_names.end(), original_cat_names[i]) != new_cat_names.end()))
			{
				categories->erase(original_cat_names[i]);
			}
			}
		//you need to find replace the existing categories
		//you need to add all of the new ones
		for(i = 0; i < new_cat_names.size(); i++){
			categories->insert(pair<string, Category>(new_cat_names[i], cats[i]));
		}
	};

void Budget::deleteExpenses(vector<int> ids){//again, I think that category needs to be specified, though the ids should be unique
	//TODO
	int i;
	//iterate through expenses map
	for(map<string, vector<Expense>>::iterator it = expenses->begin(); it != expenses->end(); it++){
		//iterate through expenses vector in each
		i = 0;
		while (i < it->second.size()){
			if (find(ids.begin(), ids.end(), it->second[i].getID()) != ids.end()){
				it->second.erase(it->second.begin() + i);
			} else {
				++i;
			}
		}
	}
};

void Budget::addExpenses(const vector<Expense>& exp){
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
		}
	}
};
