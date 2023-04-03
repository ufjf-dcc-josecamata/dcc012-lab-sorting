#ifndef SORT_H
#define SORT_H

#include <vector>

namespace Sort 
{


    // TODO: Implemente do algoritmos de ordenação basicos O(n^2)
    // Escolha uns dos métodos abaixo para implementar
    //   - BubbleSort
    //  - SelectionSort
    //  - InsertionSort
    template<typename T, class Compare >
    void BasicSort(std::vector<T> &v, Compare cmp)
    {

    }


    // TODO: Implemente algoritmo de ordenação MergeSort
    template<typename T, class Compare >
    void MergeSort(std::vector<T> &v, Compare cmp)
    {

    }

    // TODO: Implemente algoritmo de ordenação QuickSort
    template<typename T, class Compare >
    void QuickSort(std::vector<T> &v, Compare cmp)
    {

    }

    
    //  TODO: Implemente algoritmo de ordenação HeapSort
    template<typename T, class Compare >
    void HeapSort(std::vector<T> &v, Compare cmp)
    {
      
    }

    // TODO: Pesquise por algoritmos de ordenação eficientes não vistos em sala de aula.
    //       Implemente um deles.
    template<typename T, class Compare >
    void MySort(std::vector<T> &v, Compare cmp)
    {
   
    }

    //Observaçã0:
     // Compare cmp é uma função que recebe dois elementos do tipo T e retorna um bool.
     // Exemplo de como declarar uma função do tipo Compare:
     /*
       struct {
         bool operator() (T &a, T &b) const
            {
                return a < b;
            }
        } cmp;
    */
     // Se cmp(a, b) retorna true, então a é menor que b. 
     // veja nos arquivos de teste como usar essa função.

     // Funçoes auxiliares deve ser implementadas neste arquivo.
}

#endif /* SORT_H */
