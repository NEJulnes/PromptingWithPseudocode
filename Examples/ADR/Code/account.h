#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>

#include "accounttype.h"

class Account
{
    public:
        std::string username;
        std::string password;
        AccountType type;
        /** Default constructor */
        Account(const std::string& username, const std::string& password, const AccountType type)
        : username(username), password(password), type(type)
        {
            //ctor
        }
        /** Default destructor */
        virtual ~Account()
        {
            //dtor
        }
    protected:

    private:
};

#endif // ACCOUNT_H
