#pragma once

#include <string>
#include <iostream>

using namespace std;

class Category
{
public:
    Category(string name, float pct);
    ~Category();

    string getName() const;
    float getPercentage() const;
    void changePercentage(float pct);
    ostream& operator<<(ostream&) const;

private:
    string name;
    float percentage;

};

