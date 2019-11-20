//C++ source file, the one that you execute by default.
//include all the functions in int main() body in order to have your code executed.

#include <iostream> //the basic header, input/output stream system, allows you to interact with a console.
#include <string> //a header that allows you to create text strings, example: std::string ver = "Windows 7 version 6.1.7601".
#include "functions.h" //our custom header, you can name it some other way.

int main() //the root function, the body that is exectued in console
{
    pre_swap();
    swap(a, b);
    post_swap();
    is_it_even(x, y);
    passthrough();
    password();
    popup();
	  getchar(); //pauses the console, pressing any key will exit the conhost/debugger
	  return 0; //returning no value
}

//alternative of getchar() on Windows NT-based systems/Wine: std::system("Pause>nul")
//does require iostream