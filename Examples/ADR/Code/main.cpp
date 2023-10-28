#include <iostream>

#include "action.h"
#include "fakedatabase.h"
#include "accounttype.h"

using namespace std;

int main()
{
    Action action;
    FakeDatabase db;
    db.accounts.push_back(Account("Admin", "password", Admin));
    db.accounts.push_back(Account("User", "userpass", User));
    db.accounts.push_back(Account("Hello", "world!", User));
    action.login(db);
    return 0;
}
