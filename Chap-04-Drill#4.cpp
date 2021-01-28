//********************************************************************************************
// Chapter 4 Drill #4
// Change the program so that it uses doubles instead of integers.
//********************************************************************************************

#include <iostream>
#include <vector>
#include <cstdlib>

int main()
{
	std::string num1;
    std::string num2;
    double swap;
    std::vector<double> vect{};
	while (true) 
    {
	    std::cout << "Enter two numbers or '|' to quit: " << std::endl;
	    
        std::cin >> num1;
        if (num1 == "|") {break;}
	    
        std::cin>> num2;
        if (num2 == "|") {break;}

		double input1 = atof(num1.c_str());     // Converting string to double floating point
        double input2 = atof(num2.c_str());     // Converting string to double floating point

        // Sort from smallest to largest
        // if larger is the first number, swap. Otherwise, do nothing.
        if(input1 > input2){
            swap = input1;
            input1 = input2;
            input2 = swap;    
            std::cout << "The smaller is: " << input1 << " The larger is: " << swap << std::endl;
        }
        
        else if (input1 < input2) { 
            std::cout << "The smaller is: " << input1 << " The larger is: " << input2 << std::endl; 
        }
        
        // If the numbers entered are the same, tell the user
        else if (input1 == input2) {
            std::cout << "The two numbers you entered have the same value! Please, only enter integers of different values: "<< std::endl;
        }
        
    }
}