// This works because you're not concatenating two string literals because
// the operator: + , is left-left associative, meaning:
//    const std::string greeting = hello + ", world" + "!!";
//    is the same as:
//    const std::string greeting = (hello + ", world") + "!!";
//    where the object in the parentheses is no longer a "string literal" but
//    a "string".
#include <iostream>
#include <string> 

int main()
{
    const std::string hello = "Hello";  
    // build the message that we intend to write
    const std::string greeting = hello + ", world" + "!!";

    // write all
    std::cout << std::endl;
    std::cout << "* " << greeting << " *" << std::endl;

    return 0;
}
