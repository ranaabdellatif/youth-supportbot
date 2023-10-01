#ifndef USER_H
#define USER_H
#include <string>

class User {
    public:
    //default constructor
    User() {
        age = 0;
        firstname = "";
        parentname = "";
        parentemail = "";
        initial_answer = "";
        select = "";
        user_guess = 0;
        cpu_num = 0;
    }

    //constructor w/usernmae
    User(const std::string& username) {
        age = 0;
        firstname = username;
        parentname = "";
        parentemail = "";
        initial_answer = "";
        select = "";
        user_guess = 0;
        cpu_num = 0;
    }
            //declare variables under public to be inherited by derived classes
            int age;
            std::string firstname;
            std::string parentname;
            std::string parentemail;
            std::string initial_answer;
            std::string select;
            int user_guess;
            int cpu_num;
    //private: 

};


#endif