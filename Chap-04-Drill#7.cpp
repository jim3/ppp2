/*
###################################################################################################
1. add a unit to each double entered; that is, enter values such as 10cm, 2.5in,5ft, or 3.33m
2. accept the four units: cm, m, in, ft. assume conversion factors 1m == 100cm, 1in == 2.54cm, 1ft == 12in
3. read the unit indicator into a string. 
4. you may consider 12 m (with a space between the number and the unit) equivalent to 12m (without a space)
###################################################################################################
*/

#include <iostream>
#include <vector>
#include <cstdlib>
#include <math.h>  
#include <algorithm>

int main()
{
	//std::string num_string;
    //std::string unit;
    std::vector<double> v{};
	
    while (true)
    {
        std::string num_string;
        std::string unit;
	    
        std::cout << "Enter an integer or '|' to quit: ";
        std::cin >> num_string;
        if (num_string == "|") {break;}
        std::cout << "Enter unit: ";
        std::cin>> unit;
        
        // converting string to a floating point
		double float_low = atof(num_string.c_str());

        std::cout<< float_low<< unit<< std::endl;
                
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
}