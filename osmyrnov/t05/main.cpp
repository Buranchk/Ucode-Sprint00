#include <iostream>
#include <ostream>
#include <string>

int main(int argc, char* argv[]){
    if (argc != 5)
        std::cerr << "usage:./automaton [name] [level] [health] [stamina]" << std::endl;
    else {
        int i = 1;
        try {
            auto name = (argv[i++]);
            auto inta = std::stoi(argv[i++]);
            auto floa = std::stof(argv[i++]);
            auto doub = std::stod(argv[i++]);
            std::cout << "Name = " << name << std::endl;
            std::cout << "Level = " << inta << std::endl;
            std::cout << "Health = " << floa << std::endl;
            std::cout << "Stamina = " << doub << std::endl;
        }
        catch(...){
            std::cerr << "Invalid argument: " << argv[--i] << std::endl;
        }
    }
    return 0;
}