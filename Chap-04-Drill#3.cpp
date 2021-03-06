//********************************************************************************************
// Chapter 4 Drill #2
// Change the program so that it will tell the user if he enters integers of the same value.
//********************************************************************************************

#include <iostream>
#include <vector>
#include <cstdlib>

int main()
{
	std::string num1;
    std::string num2;
    int swap;
    std::vector<int> vect{};
	while (true) 
    {
	    std::cout << "Enter two integers or '|' to quit: " << std::endl;
	    
        std::cin >> num1;
        if (num1 == "|") {break;}
	    
        std::cin>> num2;
        if (num2 == "|") {break;}

		int input1 = atoi(num1.c_str());     // Converting string to integer
        int input2 = atoi(num2.c_str());     // Converting string to integer

        // Sort from smallest to largest
        // if larger is the first number, swap. Otherwise, do nothing.
        if(input1 > input2){
            swap = input1;
            input1 = input2;
            input2 = swap;
            std::cout << "The smaller is: " << input1 << " The larger is: " << swap << std::endl;
        }
            
        else if (input1 < input2){ 
            std::cout << "The smaller is: " << input1 << " The larger is: " << input2 << std::endl; 
        }
        
        // If the numbers entered are the same, tell the user
        else if (input1 == input2) {
            std::cout << "The two numbers you entered have the same value! Please, only enter integers of different values: "<< std::endl;
        }
    }
}