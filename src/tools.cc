
#include <iostream>
#include <random>
#include "tools.h"


namespace Siga
{
    namespace Tools {


    std::vector<int> get_random_int_vector(int n)
    {
        const int range_from  = 0;
        const int range_to    = n-1;
        std::random_device                  rand_dev;
        std::mt19937                        generator(rand_dev());
        std::uniform_int_distribution<int>  distr(range_from, range_to);

        std::vector<int> vec(n);
        for (int i = 0; i < n; ++i) {
            vec[i] = distr(generator);
        }
        return vec;
    }


    PerformanceTimer::PerformanceTimer()
    {
        running = false;
    }

    void PerformanceTimer::start()
    {
        start_time = std::chrono::high_resolution_clock::now();
        running = true;
    }

    void PerformanceTimer::stop()
    {
        end_time = std::chrono::high_resolution_clock::now();
        running = false;
    }

    double PerformanceTimer::elapsed_time()
    {
        std::chrono::duration<double> elapsed_seconds;
        if(running)
        {
            elapsed_seconds = std::chrono::high_resolution_clock::now() - start_time;
        }
        else
        {
            elapsed_seconds = end_time - start_time;
        }
        return elapsed_seconds.count();
    }

    }
    
}
