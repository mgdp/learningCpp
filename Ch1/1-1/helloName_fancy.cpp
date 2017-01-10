// ask for a person's name and generate a framed greeting
// Like:
// 1 ****************
// 2 *              *
// 3 * Hello, Name! *
// 4 *              *
// 5 ****************
#include <iostream>
#include <string> 

int main()
{
    // ask for the person's name
    std::cout << "Please enter your first name: ";

    // read the name
    std::string name;    // define -name-
    std::cin >> name;    // read into -name-
    
    const std::string hello = "Hello";
    // build the message that we intend to write
    const std::string greeting = "Hello, " + name + "!!" + hello ; 

    // build the second and fourth lines of the output
    const std::string spaces(greeting.size(), ' '); 
    const std::string second = "* " + spaces + " *";

    // build the first and fifth lines of the output
    const std::string first(second.size(), '*');

    // write all
    std::cout << std::endl;
    std::cout << first << std::endl;
    std::cout << second << std::endl;
    std::cout << "* " << greeting << " *" << std::endl;
    std::cout << second << std::endl;
    std::cout << first << std::endl;

    return 0;
}
