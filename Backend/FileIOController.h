#pragma once

#include <tuple>

#include "Account.h"
#include "Error.h"

#define __cplusplus 201303L

using namespace std;

class FileIOController
{
public:
    FileIOController();
    FileIOController(const FileIOController& other);
    ~FileIOController();
    void addUser(Error& err, const string& user, const string& pass);
    void login(Error& err, const string& usr, const string& pass, vector<Budget>& data);
    void parseExpenses(const string& file, vector<tuple<float, time_t, string> >& data);
    void saveSession(const string& user, const Budget& data);
    void exportExpenses(const string& file, vector<tuple<int, float, time_t, string, string> >& current, vector<tuple<int, float, time_t, string, string> >& historical);
    FileIOController& operator=(const FileIOController& other);

private:

};
