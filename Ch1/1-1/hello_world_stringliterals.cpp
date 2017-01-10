// show that you can't concatenate two string literals.
#include <iostream>
#include <string> 

int main()
{
    const std::string hello = "Hello";  
    // build the message that we intend to write
    const std::string greeting = hello + ", world" + "!!";  // show that you can't concatenate two string literals.

    // write all
    std::cout << std::endl;
    std::cout << "* " << greeting << " *" << std::endl;

    return 0;
}
