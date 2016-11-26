#include "Category.h"

Category::Category(string nm, float pct)
{
	//TODO
	name = nm;//make sure it's 3-15 characters
	percentage = pct;//0-100
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
	//TODO
	percentage = pct;
}

void Category::changeName(string new_name){
	name = new_name;
}

ostream& operator<<(ostream& out, const Category& right) {
	out << "Category: " << right.name << " percentage" << right.percentage << endl;
	return out;
}
