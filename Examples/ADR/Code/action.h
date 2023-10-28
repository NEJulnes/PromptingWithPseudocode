#ifndef ACTION_H
#define ACTION_H

#include <iostream>
#include <string>
#include "domain.h"
#include "responder.h"

class Action
{
    public:
        /** Default constructor */
        Action()
        {
            //ctor
        }
        /** Default destructor */
        virtual ~Action()
        {
            //dtor
        }
        void login(const FakeDatabase& db) {
            std::string username, password;
            std::cout << "Enter username: ";
            std::cin >> username;
            std::cout << "Enter password: ";
            std::cin >> password;

            Domain domain;
            bool authenticated = domain.authenticate(db, username, password);

            Responder responder;
            responder.sendPage(domain.accountType);
        }
    protected:

    private:
};

#endif // ACTION_H
