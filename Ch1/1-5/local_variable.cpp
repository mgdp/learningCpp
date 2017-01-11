// Exercise 1-5, internal block has a variable that you want to manipulate 
// after it's outside it's block.
// The x is not identified outside of the inner block. will not work this way.

#include <iostream>
#include <string> 

// exercise 1-4
//int main()
//{
//    {  const std::string s = "a string!";  
//       std::cout << s << std::endl; 
//
//    {  const std::string s = "a string, too!";  
//       std::cout << s << std::endl; }}
//
//    return 0;
//}

// exercise 1-5
int main()
{
    {  std::string s = "a string";  
//  {  std::string x = s + ", really!";  
       std::string x = s + ", really!";   // fix previous line.
//     std::cout << s << std::endl; }
       std::cout << s << std::endl;      // fix previous line.
       std::cout << x << std::endl;
    }
    return 0;
}
