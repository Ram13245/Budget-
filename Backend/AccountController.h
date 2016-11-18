#pragma once

#include "ChartController.h"
#include "ExpenseController.h"
#include "SettingsController.h"

class AccountController
{
public:
    AccountController();
    void attemptLogin(Error& err, const string& usr, const string& pass);
    bool getLoggedIn() const;
    void createAccount(Error& err, const string& usr, const string& pass1, const string& pass2);
    void attemptLogout(Error& err);
    vector<string> getCategories() const;

private:
    bool m_loggedIn;    // state flag
};

