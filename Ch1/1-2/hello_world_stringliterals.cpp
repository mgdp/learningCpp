// show that you can't concatenate two string literals.
// unlike in problem 1-1, this has two string literals : "Hello" and ", world"
// attemting to be operated on using the operator +, which is not allowed.
// the error message when trying to compile:
// hello_world_stringliterals.cpp:9:42: error: invalid operands to binary expression ('const char *' and 'const char *')
//    const std::string greeting = "Hello" + ", world" + exclam;  // show that you can't concatenate two string literals.

#include <iostream>
#include <string> 

int main()
{
    const std::string exclam = "!";  
    // build the message that we intend to write
    const std::string greeting = "Hello" + ", world" + exclam;  // show that you can't concatenate two string literals.

    // write all
    std::cout << std::endl;
    std::cout << "* " << greeting << " *" << std::endl;

    return 0;
}
