#include "FileIOController.h"

FileIOController::FileIOController()
{
	//TODO
}

FileIOController::FileIOController(const FileIOController& other)
{
	//TODO
}

FileIOController::~FileIOController()
{
	//TODO
}

void FileIOController::addUser(Error& err, const string& user, const string& pass)
{
	//TODO
}

void FileIOController::login( Error& err, const string& usr, const string& pass, vector<Budget>& data)
{
	//TODO
}

void FileIOController::parseExpenses(const string& file, vector<pair<float, time_t> >& data)
//void FileIOController::parseExpenses(const string& file, vector<tuple<float, time_t, string>>& data)
{
	//TODO
}

void FileIOController::saveSession(const string& user, const Budget& data)
{
	//TODO
}

void FileIOController::exportExpenses(const string& file, vector<pair<int, float> >& current, vector<pair<int, float> >& historical)
//void FileIOController::exportExpenses(const string& file, vector<tuple<int, float, time_t, string, string>>& current, vector<tuple<int, float, time_t, string, string>>& historical)
{
	//TODO
}

FileIOController& FileIOController::operator=(const FileIOController& other)
{
	//TODO
    return *this;
}
