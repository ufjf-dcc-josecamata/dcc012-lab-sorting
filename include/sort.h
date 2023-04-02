#ifndef SORT_H
#define SORT_H

#include <vector>

namespace Sort 
{


    // Implementação do algoritmos de ordenação Insertion Sort
    template<typename T, class Compare >
    void InsertionSort(std::vector<T> &v, Compare cmp)
    {

    }


    // Implementação do algoritmos de ordenação MergeSort
    template<typename T, class Compare >
    void MergeSort(std::vector<T> &v, Compare cmp)
    {

    }

    // Implementação do algoritmos de ordenação QuickSort
    template<typename T, class Compare >
    void QuickSort(std::vector<T> &v, Compare cmp)
    {

    }

    
    // Implementação do algoritmos de ordenação HeapSort
    template<typename T, class Compare >
    void HeapSort(std::vector<T> &v, Compare cmp)
    {
      
    }

    // Implementação do algoritmos de ordenação da sua escolha> não pode 
    // ser o mesmo que os anteriores, nem o BubbleSort e nem o SelectionSort.
    template<typename T, class Compare >
    void MySort(std::vector<T> &v, Compare cmp)
    {
   
    }

    //Observaçã:
     // Compare cmp é uma função que recebe dois elementos do tipo T e retorna um bool.
     // Se cmp(a, b) retorna true, então a é menor que b. 
     // veja nos arquivos de teste como usar essa função.
}

#endif /* SORT_H */
