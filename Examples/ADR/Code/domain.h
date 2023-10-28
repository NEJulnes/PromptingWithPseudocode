#ifndef DOMAIN_H
#define DOMAIN_H

#include <string>
#include "fakedatabase.h"
#include "accounttype.h"

class Domain
{
    public:
        /** Default constructor */
        Domain()
        {
            //ctor
        }
        /** Default destructor */
        virtual ~Domain()
        {
            //dtor
        }
        AccountType accountType;
        //bool authenticate(const FakeDatabase& db, const std::string& username, const std::string& password);
        bool authenticate(const FakeDatabase& db, const std::string& username, const std::string& password) {
            int idx = db.FindUser(username, password);
            if (idx != -1) {
                accountType = db.accounts[idx].type;
                return true;
            }
            return false;
        }
    protected:

    private:
};

#endif // DOMAIN_H
