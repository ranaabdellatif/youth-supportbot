#ifndef MOTIVATE_H
#define MOTIVATE_H
#include <iostream>
#include <fstream>
#include <string>
#include "user.h"
using namespace std;


class Motivate : public User {
    public:

    std::string motivation() {
        std::ifstream file;
        std::string line;
        int line_number, current_line;

        std::cout << "Pick a number between 1 and 10: ";
        std::cin >> line_number;

        if (line_number < 1 || line_number > 10) { //ensure line num is within acceptable range
            std::cout << "This is not a valid input." << std::endl;
            return "";
        }

        file.open("quotes.txt");
        if (!file.is_open()) { 
            std::cout << "File failed to open." << std::endl;
            return "";
        }
        
        current_line = 0;

        while (getline(file, line)) {
            current_line++;
            if (current_line == line_number) {
                file.close();
                return line; //return the str (the quote)
            }
        }

        file.close();
        return ""; //return empty str if cant find line_number
    }




        private:
        int current_line;
        int line_number;
        std::string line;
};

#endif