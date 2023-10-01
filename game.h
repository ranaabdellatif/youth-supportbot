//using this game.h file 
#ifndef GAME_H
#define GAME_H
#include <iostream>
#include <string>
#include "user.h"

class Game : public User {

    public: 

    //constuctor 
    Game(const std::string& username) : User(username), user_guess(0) {
    }

    //function to play game where CPU generates a random number between 1-10 which the user gets to guess
    void play_game(int guess) {
        //generate random int between 1-10 (including 1 & 10)
        cpu_num = rand() % 10 + 1;
        try {
    if (guess > 10 || guess < 1) {
        throw guess;
    } else {
        if (guess == cpu_num) {
            std::cout << "No way! You got it right!!!" << std::endl;
            return;
        } else {
            std::cout << "Haha. Wrong! I'm nice so I'll let you try again!" << std::endl;
            
            int new_guess;
            std::cout << "Try again. Enter your new guess: ";
            std::cin >> new_guess;
            
            play_game(new_guess); //recursive call w/ new guess
        }
    }

    } catch (int) {
        std::cout << "Exception" << std::endl;
    }
}

    private:
    int user_guess;
    int cpu_num;
    

};


#endif
