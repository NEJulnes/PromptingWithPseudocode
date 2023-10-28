#ifndef FAKEDATABASE_H
#define FAKEDATABASE_H

#include <iostream>
#include <string>
#include <vector>
#include <optional>

#include "account.h"

class FakeDatabase
{
    public:
        /** Default constructor */
        FakeDatabase()
        {
            //ctor
        }
        /** Default destructor */
        virtual ~FakeDatabase()
        {
            //dtor
        }
        std::vector<Account> accounts;
        int FindUser(const std::string& username, const std::string& password) const {
            int index = -1;
            for (size_t i = 0; i < accounts.size(); ++i) {
                if (accounts[i].username == username && accounts[i].password == password) {
                        index = i;
                }
            }
            return index;
        }
    protected:

    private:
};

#endif // FAKEDATABASE_H
