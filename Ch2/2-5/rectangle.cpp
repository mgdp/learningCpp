// print a rectangle of "*"s
#include <iostream>
#include <string>

// say what standard-library names we use
using std::cin;		using std::endl;
using std::cout; 	using std::string;

int main()
{
    // the number of rows and columns to write
    int rows = 0;
    
    // write _rows_ rows of output
    // invariant: we have written _r_ rows so far
    while (rows < 4 ){
        rows +=1; 
        std::cout << "* * * * *" << std::endl;
    }
    return 0;

}
