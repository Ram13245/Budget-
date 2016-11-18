#pragma once

//#include <tuple>
#include <utility>

#include "../../Entity/inc/Account.h"
#include "../../Entity/inc/Error.h"

using namespace std;

class FileIOController
{
public:
    FileIOController();
    FileIOController(const FileIOController& other);
    ~FileIOController();
    void addUser(Error& err, const string& user, const string& pass);
    void login(Error& err, const string& usr, const string& pass, vector<Budget>& data);
    void parseExpenses(const string& file, vector<pair<float, time_t> >& data);
    //void parseExpenses(const string& file, vector<tuple<float, time_t, string> >& data);
    void saveSession(const string& user, const Budget& data);
    void exportExpenses(const string& file, vector<pair<int, float> >& current, vector<pair<int, float> >& historical);
    //void exportExpenses(const string& file, vector<tuple<int, float, time_t, string, string> >& current, vector<tuple<int, float, time_t, string, string> >& historical);
    FileIOController& operator=(const FileIOController& other);

private:

};
