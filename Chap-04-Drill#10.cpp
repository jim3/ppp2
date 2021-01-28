/*
###################################################################################################
1. add a unit to each double entered; that is, enter values such as 10cm, 2.5in,5ft, or 3.33m
2. accept the four units: cm, m, in, ft. assume conversion factors 1m == 100cm, 1in == 2.54cm, 1ft == 12in
3. read the unit indicator into a string. 
4. reject values without units or with “illegal” representations of units, such as y, yard, meter,
5. //std::vector<std::string> unit{"cm", "m", "in", "ft"};
###################################################################################################
*/

#include <iostream>
#include <vector>
#include <cstdlib>
#include <math.h>  
#include <algorithm>

int main()
{   
    std::string badData = "** Invalid unit! **";
    double sum_value;
    double float_low;
	std::string num_string;
    std::vector<double> v{};
    std::vector<double> u{};
    char unit;
    
    while (true)
    {
	    std::cout<< "Enter a value or '|' to quit: ";
        std::cin>> num_string;
        if (num_string == "|") {break;}

        // converting string to a floating point
		float_low = atof(num_string.c_str());

        while(true)
        {
            std::cout<< "Enter a unit: ";
            std::cin>> unit;

        switch (unit) {
        case 'c':
            std::cout<< num_string<< "cm\n";
            sum_value = float_low * .010;
            break;

        case 'm':
            std::cout<< num_string<< "m\n";
            sum_value = float_low;
            break;

        case 'i':
            std::cout<< num_string<< "in\n";
            sum_value = float_low * .02;
            break;        

        case 'f':
            std::cout<< num_string<< "ft\n";
            sum_value = float_low * 0.30;
            break;

        default:
            std::cout<< badData;
            continue;
        }
            break;                
        }
        
        // push each floating point number into a vector of type double
        v.push_back(float_low);
        
        // push values converted to meters, then get sum of all
        u.push_back(sum_value);
        double sum_meters = 0.0;
        
        for (double i=0; i<=u.size()-1; i++) {    
            sum_meters = sum_meters + u[i];
        }
        
        // sort vector before returning to beginning/ending the loop
        sort(v.begin(), v.end());

        std::cout<< " Largest value : "<< v[v.size()-1];                    std::cout<<"\n";
        std::cout<< " Smallest value : "<< v[0];                            std::cout<<"\n";
        std::cout<< " Number of values : " <<v.size();                      std::cout<<"\n";
        std::cout<< " The sum total of values in meters: "<< sum_meters;    std::cout<<"\n";
    }   
}
