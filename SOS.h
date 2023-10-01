#ifndef SOS_H
#define SOS_H
#include <iostream>
#include <string>
#include "user.h"

class SOS : public User {
    public: 

    SOS(const std::string &parentName, const std::string &parentEmail) 
    : parentname(parentName), parentemail(parentEmail) {}

    //main.cpp detects when SOS is triggered based on key words
    void report() {
        std::cout << "Some of the words you've used indicate that it would be best if we got some more friends on board with us!\nYour guardian,  " << parentname << " will be contacted using the email you provided: " << parentemail << std::endl;
    }

    private:

    std::string parentname;
    std::string parentemail;
};



#endif