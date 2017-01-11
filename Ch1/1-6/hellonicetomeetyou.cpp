// if you enter first and last name after the "what is your name" prompt,
// it appears that both names are stored for variable name, but only the first name is implimented
// in the first output, and then the second name is read for the second output. That is, no prompt
// is generated if 2 names are supplied at the beginning.
//
// example of input/output
//
// What is your name? marilu dick
// Hello, marilu
// and what is yours? Hello, dick; nice to meet you too!
#include <iostream>
#include <string>

int main()
{
    // ask for the person's name
    std::cout << "What is your name? ";

    // read the name
    std::string name;    // define -name-
    std::cin >> name;    // read into -name-

    // build the message that we intend to write
    std::cout << "Hello, " << name
              << std::endl << "and what is yours? ";

    std::cin >> name;    // read into -name-
    std::cout << "Hello, " << name
              << "; nice to meet you too!" << std::endl;

    return 0;
}
