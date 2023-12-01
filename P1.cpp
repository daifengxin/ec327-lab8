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
        if(command == "add"){
            std::cin >> bookName;
            if(library.addBook(bookName)){
                std::cout << "Book added" << std::endl;
            }else{
                std::cout << "Book already exists or library is full" << std::endl;
            }
        }else if(command == "remove"){
            std::cin >> bookName;
            if(library.removeBook(bookName)){
                std::cout << "Book removed" << std::endl;
            }else{
                std::cout << "Book does not exist" << std::endl;
            }
        }else if(command == "print"){
            library.print();
        }else if(command == "quit"){
            break;
        }else{
            std::cout << "Invalid command" << std::endl;
        }
    }


}
