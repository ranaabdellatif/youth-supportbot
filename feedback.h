#ifndef FEEDBACK_H
#define FEEDBACK_H
#include <iostream>
#include <string>
#include "user.h"


//feedback class is derived from user class
class Feedback: public User {
    public:
    // function to receive feedback
    Feedback() : user_feedback("") {}  // Default constructor

    void give_feedback(){
        std::cout << "Please provide any feedback you have to help me improve: " << std::endl;
        std::cin >> user_feedback;
        std::cout << "Thank you for the advice! I'll do my best to improve on that :) " << std::endl; 
    }

    private:
    std::string user_feedback;
};



#endif