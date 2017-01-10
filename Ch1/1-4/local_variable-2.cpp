// Exercise 1-4, combining two blocks (stuff inside {}) from exercise 1-3, 
// and adding a semicolon after the inner block to seeing what happens.
// The output remains the same because a semicolon signals the end of a statement, 
// and a statement can be null, which it is, in the case of changing }} to };} 
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

// exercise 1-4 second part.
int main()
{
    {  const std::string s = "a string!";  
       std::cout << s << std::endl; 

    {  const std::string s = "a string, too!";  
       std::cout << s << std::endl; };}
 
    return 0;
}
