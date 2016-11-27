#include "Category.h"

Category::Category(string nm, float pct)
{
	if(nm.length() < 3 || nm.length() > 15){
		cout<<"invalid category name!" << endl;
	}
	else{
		name = nm;//make sure it's 3-15 characters
	}
	if(pct < 0.0 || pct > 1.0){
		cout<<"invalid category percentage!" << endl;
	}
	else{
		percentage = pct;//0-100
	}
}

Category::~Category(){}//intentionally empty

string Category::getName() const
{
    return name;
}

float Category::getPercentage() const
{
    return percentage;
}

void Category::changePercentage(float pct)//does this require changing other percentages as a result?
{
	percentage = pct;
}

void Category::changeName(string new_name){
	name = new_name;
}

ostream& operator<<(ostream& out, const Category& right) {
	out << "Category: " << right.name << " percentage " << right.percentage << endl;
	return out;
}
