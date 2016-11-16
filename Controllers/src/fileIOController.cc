#include "FileIOController.h"

FileIOController::FileIOController(const AccountController& acct)
{
}

FileIOController::FileIOController(const FileIOController& other)
{
}

FileIOController::~FileIOController()
{
}

void FileIOController::addUser(Error& err, const string& user, const string& pass)
{
}

void FileIOController::login( Error& err, const string& usr, const string& pass, vector<Budget>& data)
{
}

void FileIOController::parseExpenses(const string& file, vector<tuple<float, time_t, string>>& data)
{
}

void FileIOController::saveSession(const string& user, const Budget& data)
{
}

void FileIOController::exportExpenses(const string& file, vector<tuple<int, float, time_t, string, string>>& current, vector<tuple<int, float, time_t, string, string>>& historical)
{
}

FileIOController& FileIOController::FileIOController& operator=(const FileIOController& other)
{
}
