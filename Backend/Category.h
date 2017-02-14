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
    void changeName(string new_name);
//    ostream& operator<<(ostream&, const Category& right) const;

private:
    string name;
    float percentage;

friend ostream& operator<<(ostream& out, const Category& right);

};

