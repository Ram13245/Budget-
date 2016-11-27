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
    // - Open file
    // - Check if user already outlined
    // - Hash password
    // - Create new file for account
    // - Save user, pass, file name to master
//    ifstream inputFile;
//    inputFile.open(masterAccountsFile);
//
//    if (inputFile.fail()) {
//        err += "Could not open file: " + masterAccounts.txt;
//        return;
//    }
}

void FileIOController::login( Error& err, const string& usr, const string& pass, vector<Budget>& data)
{
	//TODO
}

//void FileIOController::parseExpenses(const string& file, vector<tuple<float, time_t, string>>& data)
//{
//	//TODO
//}

void FileIOController::saveSession(const string& user, const Budget& data)
{
	//TODO
}

//void FileIOController::exportExpenses(const string& file, vector<tuple<int, float, time_t, string, string>>& current, vector<tuple<int, float, time_t, string, string>>& historical)
//{
//	//TODO
//}

FileIOController& FileIOController::operator=(const FileIOController& other)
{
	//TODO
    return *this;
}

string FileIOController::encryptDecrypt(const string& oldString) const
{
    string output = oldString;

    for (int i = 0; i < oldString.size(); ++i) {
        output[i] = oldString[i] ^ key;
    }

    return output;
}

//void FileIOController::parseJsonEntry(Error& err, const string& entry, map<string,pair<string,string> >& userMap)
//{
//    string username;
//    string password;
//    string filename;
//    string element;
//
//    size_t elementStart = entry.find_first_of('"');
//    size_t elementEnd = entry.find_first_of(',');
//
//    if (elementStart == string::npos || elementEnd == string::npos) {
//        err += "Could not find element start or end position: " + entry;
//        return;
//    }
//
//    element = entry.substr(elementStart, elementEnd - elementStart);
//
//    if (element.empty()) {
//        err += "Could not find 'user': " + entry;
//        return;
//    }
//
//    username = parseToken(element);
//
//    elementStart = entry.find_first_of('"', elementEnd + 1);
//    elementEnd = entry.find_first_of(',', elementStart + 1);
//
//    if (elementStart == string::npos || elementEnd == string::npos) {
//        err += "Could not find element start or end position: " + entry;
//        return;
//    }
//
//    element = entry.substr(elementStart, elementEnd - elementStart);
//
//    if (element.empty()) {
//        err += "Could not find 'user': " + entry;
//        return;
//    }
//
//    password = parseToken(element);
//
//    elementStart = entry.find_first_of('"', elementEnd + 1);
//    elementEnd = entry.find_first_of(',', elementStart + 1);
//
//    if (elementStart == string::npos || elementEnd == string::npos) {
//        err += "Could not find element start or end position: " + entry;
//        return;
//    }
//
//    element = entry.substr(elementStart, elementEnd - elementStart);
//
//    if (element.empty()) {
//        err += "Could not find 'user': " + entry;
//        return;
//    }
//
//    filename = parseToken(element);
//
//    if (username.empty() || password.empty() || filename.empty()) {
//        err += "Failed to parse the master file.";
//        return;
//    }
//
//    pair<string,string> valPair(password, filename);
//    userMap.insert(pair<string,pair<string,string> >(username, valPair));
//}

//string FileIOController::parseToken(Error& err, const string& element) const
//{
//    size_t tokenEnd = element.find_last_of('"');
//    size_t tokenStart = element.find_last_of('"', tokenEnd - 1);
//    string token;
//
//    if (tokenStart == string::npos || tokenEnd == string::npos) {
//        err += "Invalid JSON string: " + element;
//        return "";
//    }
//
//    token = element.substr(tokenStart + 1, tokenEnd - tokenStart - 1);
//
//    if (token.empty()) {
//        err += "Empty JSON element: " + element;
//        return "";
//    }
//
//    return token;
//}

