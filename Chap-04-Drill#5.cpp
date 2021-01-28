//********************************************************************************************
// Change the program so that it writes out "the numbers are almost equal" after
// writing out which is the larger and the smaller if the two numbers differ by less than 1.0/100
// `roundf` was the main "theme" of this part of the drill `(roundf(input2 * 100)/100)`
// Note: I also realized that the 1st else statement wasn't even needed.
//********************************************************************************************

#include <iostream>
#include <vector>
#include <cstdlib>
#include <math.h>

int main()
{
	std::string num1;
    std::string num2;
    double swap;
    std::vector<double> vect{};
	while (true) 
    {
	    std::cout << "Enter two integers or '|' to quit: " << std::endl;	    
        
        std::cin >> num1;
        if (num1 == "|") {break;}
        std::cin>> num2;
        if (num2 == "|") {break;}
        
		double input1 = atof(num1.c_str());     // converting string to floating point
        double input2 = atof(num2.c_str());     // converting string to floating point

        // sort from smallest to largest. if first number is larger, swap. otherwise, do nothing
        if(input1 > input2){
            swap = input1;
            input1 = input2;
            input2 = swap;            
            std::cout << "The smaller is: " << input1 << " The larger is: " << input2 << std::endl;
        }
        else if (input1 < input2){
            std::cout << "The smaller is: " << input1 << " The larger is: " << input2 << std::endl; 
            }

        // used roundf to round the floating point doubles to within 2 decimal places
        double num3 = (roundf(input2 * 100)/100);
        double num4 = (roundf(input1 * 100)/100);
        double num5 = num3-num4;
        double num6 = (roundf(num5 *100)/100);
        
        // check if the numbers are within .01 if so echoprint it :)
        if(num6 <= .01 && num6 > 0.00){
            std::cout<<" The numbers are almost equal! "<< std::endl;
        }
        
        // if the numbers entered are the same, tell the user
        if (input1 == input2){
            std::cout << "The two numbers you entered have the same value! Please, only enter integers of different values: "<< std::endl;
        }    
    }
}