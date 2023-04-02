#ifndef TOOLS_H
#define TOOLS_H

#include <iostream>
#include <chrono>
#include <vector>

#include "estudante.h"


// Gerar valores aletórios de inteiros entre 0 e n-1.

namespace Siga {
    
namespace Tools {

    std::vector<int> get_random_int_vector(int n, int max_values);

    template<typename T, class Compare >
    bool is_sorted(std::vector<T> &data, Compare cmp)
    {
        for(int i = 0; i < data.size()-1; i++)
        {
            if(cmp(data[i], data[i+1]))
            {
                return false;
            }
        }
        return true;
    }

    template<typename T>
    void print_vector(std::vector<T> &data)
    {
        for(int i = 0; i < data.size(); i++)
        {
            std::cout << data[i] << endl;
        }
       
    }

    template<typename T, class Compare >
    bool compare_vector(std::vector<T> &data1, std::vector<Estudante> &data2, Compare cmp)
    {
        if(data1.size() != data2.size())
        {
            return false;
        }
        for(int i = 0; i < data1.size(); i++)
        {
            if(cmp(data1[i], data2[i]))
            {
                return false;
            }
        }
        return true;
    }

    // Classe para medir o tempo de execução de um algoritmo
    class PerformanceTimer
    {   
        public:
            PerformanceTimer();
            void start();
            void stop();
            double elapsed_time();
        private:
            std::chrono::time_point<std::chrono::high_resolution_clock> start_time;
            std::chrono::time_point<std::chrono::high_resolution_clock> end_time;
            bool running;
    };
} // end namespace tools

}

#endif /* TOOLS_H */
