#include <iostream>
#include <string>
#include "user.h"
#include "feedback.h"
#include "friend.h"
#include "game.h"
#include "SOS.h"
#include "motivate.h"

//create temp variables use them for paramaters of User class object

std::string answer;
std::string user_name;
int user_age;
std::string user_parentname;
std::string user_parentemail;
std::string user_selection;

int main() {


    std::cout << "Hello there! My name is Botty, and I'm your personal supportBot!\nI have several functions that I'll tell you more about later! For now can you provide some information? Y for Yes, N for No." << std::endl;
    std::cin >> answer;
    
        if (answer == "Y") {
            std::cout << "Enter your first name: " << std::endl;
            std::cin >> user_name;
            std::cout << "Enter your age: " << std::endl;
            std::cin >> user_age;
            std::cout << "Enter your parent's first name: " << std::endl;
            std::cin >> user_parentname;
            std::cout << "Enter your parent's email: " << std::endl;
            std::cin >> user_parentemail;
            std::cout << "Thanks! Now let's get into the details of what I'm capable of.\nI have five main features: Friend, Game, Feedback, Motivation, and SOS.\nThe friend feature allows you to have a conversation with me, Botty.\nWith the motivation feature, I can help inspire you with motivational quotes by diverse figures!\nThe game function allows us to have some fun with a computer game.\nThe Feedback function allows you to give me some input on what I can improve on.\nThe SOS feature is to make sure all my friends are safe. If you say anything alarming I will inform your parent," << user_parentname << ", with the email provided. This is solely to ensure your safety! Enter 'Y' when you're ready to continue: " << std::endl;
            std::cin >> answer; 
            if (answer == "Y"){
                std::cout << "Enter 'F' to access the Friend feature: \nEnter 'G' to access the Game feature: \nEnter 'M' to access the Motivation feature: \nEnter 'B' to access the Feedback feature: " << std::endl;
                std::cin >> user_selection;
                if (user_selection == "M"){ //invoking motivation class!

                    //motivation class instance
                    Motivate motivateInstance;

                    //motivate!
                    motivateInstance.motivation();

                } else if (user_selection == "G") { //invoking game class!

                    //game class instance
                    Game gameInstance(user_name);

                    int guess;
                    std::cout << "Let's test your intuition. Guess what number between 1-10  I'm thinking of! ";
                    std::cin >> guess;

                    //play game with user's guess
                    gameInstance.play_game(guess);
                    
                    
                }else if (user_selection == "B") { //invoking feedback class!

                    //feedback class instance
                    Feedback feedbackInstance;
                    //call give feedback fun
                    feedbackInstance.give_feedback();

                }else if (user_selection == "F") { //invoking friend class!
                
                    //friend class instance
                    Friend friendInstance;
                    //start chatting
                    friendInstance.chatbot();

                }

            }else {
                std::cout << "Botty is going to sleep...zzzzzzzzzzzzzzzzzzzzzzzz" << std::endl;
            }
    
            }else {
            std::cout << "Botty is going to sleep...zzzzzzzzzzzzzzzzzzzzzzzz" << std::endl;
            
        }

    }
