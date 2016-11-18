#include "../inc/Category.h"

Category::Category(string name, float pct) : m_name(name), m_percentage(pct)
{
}

Category::~Category()
{
}

string Category::getName() const
{
    return m_name;
}

float Category::getPercentage() const
{
    return m_percentage;
}

void Category::changePercentage(float pct)
{
}

ostream& Category::operator<<(ostream& out) const
{
    return out;
}

