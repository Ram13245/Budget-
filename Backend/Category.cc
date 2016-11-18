#include "Category.h"

Category::Category(string name, float pct) : name(name), percentage(pct)
{
	//TODO
}

Category::~Category()
{
	//TODO
}

string Category::getName() const
{
    return name;
}

float Category::getPercentage() const
{
    return percentage;
}

void Category::changePercentage(float pct)
{
	//TODO
}

ostream& Category::operator<<(ostream& out) const
{
	//TODO
    return out;
}

