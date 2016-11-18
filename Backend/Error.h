#pragma once

#include <string>

using namespace std;

class Error
{
public:
    Error();
    string getMessage() const;

private:
    bool m_isErr;
    string m_message;


    friend Error& operator+=(Error& err, string msg);
};
