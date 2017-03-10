// print a triangle of "*"s
//  *  
// ***
//*****
#include <iostream>
#include <string>

// say what standard-library names we use
using std::cin;		using std::endl;
using std::cout; 	using std::string;

int main()
{
    // the number of rows and columns to write
    int rows = 0;
    std::string star = "*";
    std::string space = " ";
    // write _rows_ rows of output
    // invariant: we have written _r_ rows so far
    while ( rows < 4 ){
        int column = 0;
        while ( column < 4 ){
                if ( column < rows ){
                    std::cout << space;
                } else {
                    std::cout << star;
                }
//                column += 1;
                if ( column >= rows ){
                    std::cout << space;
                }
                column += 1;
        }
        std::cout << std::endl;
        rows += 1; 
    }
    return 0;

}
