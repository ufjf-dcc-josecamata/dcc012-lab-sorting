
#include <iostream>
#include <random>
#include <set>
#include "tools.h"


namespace Siga
{
    namespace Tools {


    std::vector<int> get_random_int_vector(int n, int max_values)
    {
        const int range_from  = 0;
        const int range_to    = max_values-1;
        std::random_device                  rand_dev;
        std::mt19937                        generator(rand_dev());
        std::uniform_int_distribution<int>  distr(range_from, range_to);

        std::set<int>  s;
        while(s.size() < n)
        {
            s.insert(distr(generator));
        }
        std::vector<int> vec(n);
        std::copy(s.begin(), s.end(), vec.begin());
        for(int i = 0; i < vec.size(); i++)
        {
            cout << vec[i] << endl;
        }
        return vec;
      }
    }
    
}
