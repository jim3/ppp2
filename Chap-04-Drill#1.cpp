// *******************************************************************************************
// Chapter 4 Drill #1
// Write a program that consists of a while-loop that (each time around the loop) reads
// in two INTs and then prints them. Exit the program when a terminating '|' is entered.
// *******************************************************************************************

#include <iostream>
#include <cstdlib>

int main()
{
	std::string num1;
    std::string num2;
	while (true)
    {
	    std::cout << "Enter two integers or '|' to quit" << std::endl;
	    
        std::cin >> num1;
        if (num1 == "|") {
		    break;
        }
	    
        std::cin>> num2;
        if (num2 == "|") {
            break;
        }

        else {
		int input1 = atoi(num1.c_str());     // Converting string to integer
        int input2 = atoi(num2.c_str());     // Converting string to integer
		std::cout << "You just entered " << input1 << " and " << input2 << std::endl;
	    }
	}
}