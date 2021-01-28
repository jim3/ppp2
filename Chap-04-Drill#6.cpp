/*
now change the body of the loop so that it reads just one double each time
around. define two variables to keep track of which is the smallest and which is
the largest value you have seen so far. each time through the loop write out the
value entered. if it’s the smallest so far, write the smallest so far after the
number. if it is the largest so far, write the largest so far after the number.
********************************************************************************************
*/

#include <iostream>
#include <vector>
#include <cstdlib>
#include <math.h>  
#include <algorithm>

int main()
{
	std::string num_string;
    std::vector<double> v{};
	
    while (true)
    {
	    std::cout << "Enter an integer or '|' to quit: ";
        std::cin >> num_string;
        if (num_string == "|") {break;}
        
        // converting string to a floating point
		double float_low = atof(num_string.c_str());
                
        // push each floating point number into a vector of type double
        v.push_back(float_low);

        // declared & initialized a variable to represent the highest/lowest element of the vector
        double lo = v[v.size()-1];
        double hi = v[v.size()-1];
        
        // (v.size()-1 = the element #)
        if (v[v.size()-1] < v[0]){
        std::cout<< lo << " Is your smallest value so far: ";
        std::cout<< std::endl;
        }
        
        if ((v[v.size()-1]) > (v[v.size()-2])){
        std::cout<< hi << " Is your largest value so far";
        std::cout<< std::endl;
        }
        
        std::cout<< "# " << v[v.size()-1]<< " goes into the vector : ";
        std::cout<< std::endl;

        sort(v.begin(), v.end());
    }
        // print out a sorted row, hi to lo
        for (double i=0; i<1; i++){
            for (double j=v.size()-1; j>=0; --j){
            std::cout<< v[j]<< ",";
            }
        }
}