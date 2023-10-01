#ifndef FRIEND_H
#define FRIEND_H
#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>

using namespace std;

class Friend : public User {
    public:
    void chatbot(){

        unordered_map<string,string> memory;
        string user_input;

        //welcome message
        cout << "Welcome friend, I am Botty!" <<endl;

        //chat functionality
        while(true) {

            //getting user input
            getline(cin,user_input);
            //convert all inputs to lowercase
            transform(user_input.begin(), user_input.end(),user_input.begin(), ::tolower);

            if(user_input == "hi" ||user_input == "hello" || user_input == "hey"){
                cout << "Hey friend! How can I help you?" << endl;
            }else if(user_input == "how are you") {
                cout << "As a robot, I Botty, don't have emotions!" <<endl; 
            }else if(user_input == "what's my name") {
                if(memory.find("name")!= memory.end()){
                    cout <<"Your name is "<< memory["name"] << endl;
                }else{
                    cout << "Sorry, you didn't tell me your name yet. What is your name? " <<endl;
                }
            }else if(user_input.find("my name is")!=string::npos){
                size_t pos = user_input.find("my name is");
                string name = user_input.substr(pos+11);
                memory["name"] = name;
                cout << "Nice to meet you " <<name<<endl;
            }else if(user_input == "bye"){
                cout << "Bye friend!";
                break;
            }else{ 
                //default message
                cout << "I didn't get that, sorry" <<endl;
            }
        }
        return;
    }
};

#endif