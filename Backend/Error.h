#pragma once

#include <string>

using namespace std;

class Error
{
public:
    Error();
    string getMessage() const;

private:
    bool isErr;
    string message;


    friend Error& operator+=(Error& err, string msg);
};
