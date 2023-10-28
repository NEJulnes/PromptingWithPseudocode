#ifndef RESPONDER_H
#define RESPONDER_H

#include <iostream>
#include <string>

#include "accounttype.h"

class Responder
{
    public:
        /** Default constructor */
        Responder()
        {
            //ctor
        }
        /** Default destructor */
        virtual ~Responder()
        {
            //dtor
        }
        void sendPage(const AccountType accountType) {
            if (accountType == Admin) {
                std::cout << "Welcome to the Admin page.\n";
            } else if (accountType == User) {
                std::cout << "Welcome to the User page.\n";
            } else {
                std::cout << "Authentication failed.\n";
            }
        }
    protected:

    private:
};

#endif // RESPONDER_H
