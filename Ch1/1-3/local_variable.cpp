//    const std::string greeting = "Hello" + ", world" + exclam;  // show that you can't concatenate two string literals.

#include <iostream>
#include <string> 

int main()
{
    {  const std::string s = "a string!";  
       std::cout << s << std::endl; }

    {  const std::string s = "a string, too!";  
       std::cout << s << std::endl; }

    return 0;
}
