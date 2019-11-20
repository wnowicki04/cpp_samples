//header, used for defining/implementing functions

#ifndef H_FUNCTIONS
#define H_FUNCTIONS //it is necessary to define a header

int a = 16;
int b = 7;

int x; //for console use (input)
int y; //for console use (input)

void pre_swap()
{
	std::cout << "pre-swap" << std::endl;
	std::cout << "a = " << a << ", b = " << b << std::endl;
}

void swap(int& a, int& b) //a function that swaps the contents of @param a and @param b
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void post_swap()
{
	std::cout << "post-swap" << std::endl;
	std::cout << "a = " << a << ", b = " << b << std::endl;
}

void is_it_even(int& x, int& y) //this function checks whether a number is even or not
{
    std::cout << "enter a value (x): ";
    std::cin >> x;
    std::cout << "enter a value (y): ";
    std::cin >> y;

    if (x > 0 && x % 2 == 0)
    	std::cout << "x is an even number" << std::endl;
    else if (x == 0)
    	std::cout << "x has been assigned with a value of 0" << std::endl; //0 is NOT an even number and it has to be mentioned as an arguement
    else
    	std::cout << "x is not an even number" << std::endl;

    if (y > 0 && y % 2 == 0)
    	std::cout << "y is an even number" << std::endl;
    else if (y == 0)
    	std::cout << "y has been assigned with a value of 0" << std::endl; //0 is NOT an even number and it has to be mentioned as an arguement
    else
    	std::cout << "y is not an even number" << std::endl;
}

void passthrough()
{
	std::cout << " " << std::endl;
	std::cout << "enjoy the next bit" << std::endl;
	std::cout << " " << std::endl;
}

std::string pswd; //an empty string, to become an example of a password mechanism (no encryption)

int password()
{
	std::cout << "enter the password: ";
	std::cin >> pswd;
	
  if (pswd == "windowslh3718")
		std::cout << "correct password" << std::endl;
	else
		std::cout << "incorrect password" << std::endl;

	return 0;
}

void popup() //a note from me
{
	if (pswd == "windowslh3718")
		std::cout << "best Windows NT 6.0 build" << std::endl;
}

#endif //ending the header definition