// Exercise 1-4, combining two blocks (stuff inside {}) from exercise 1-3, 
// and seeing what happens.
// The output doesn't change because the statements are all executed sequentially
// regardless of whether they are separate blocks or just 1.

#include <iostream>
#include <string> 

// exercise 1-3
//int main()
//{
//    {  const std::string s = "a string!";  
//       std::cout << s << std::endl; }
//
//    {  const std::string s = "a string, too!";  
//       std::cout << s << std::endl; }
//
//    return 0;
//}

// exercise 1-4
int main()
{
    {  const std::string s = "a string!";  
       std::cout << s << std::endl; 

    {  const std::string s = "a string, too!";  
       std::cout << s << std::endl; }}

    return 0;
}
