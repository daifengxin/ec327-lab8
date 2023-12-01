//include headers and libraries
#include "Library.h"
#include <iostream>
//implement class functions
int main(){
    Library library;
    string command, bookName;
    //ask for commands and execute
    while(true){
        std::cout << "Enter command: ";
        std::cin >> command;
        if(command == "a"){
            std::cin >> bookName;
            if(!library.addBook(bookName)){
                std::cout << "Cannot add the book." << std::endl;
            }
        }else if(command == "r"){
            std::cin >> bookName;
            if(!library.removeBook(bookName)){
                std::cout << "Cannot remove the book." << std::endl;
            }
        }else if(command == "p"){
            library.print();
        }else if(command == "q"){
            std::cout << "Exiting" << std::endl;
            break;
        }else{
            std::cout << "Invalid command" << std::endl;
        }
    }
    return 0;
}
