#ifndef SORT_H
#define SORT_H

#include <vector>

namespace Sort 
{

    // Implementação do algoritmos de ordenação Insertion Sort
    template<typename T, class Compare >
    void InsertionSort(std::vector<T> &v, Compare cmp)
    {
        // Insertion sort
        for (int i = 1; i < v.size(); i++) {
            T key = v[i];
            int j = i - 1;
            while (j >= 0 && cmp(v[j], key)) {
                v[j + 1] = v[j];
                j--;
            }
            v[j + 1] = key;
        }
    }

    // Merge
    template<typename T, class Compare >
    void merge(std::vector<T> &v, int l, int m, int r, Compare cmp)
    {
        int i, j, k;
        int n1 = m - l + 1;
        int n2 =  r - m;

        /* create temp arrays */
        std::vector<T> L(n1);
        std::vector<T> R(n2);

        /* Copy data to temp arrays L[] and R[] */
        for (i = 0; i < n1; i++)
            L[i] = v[l + i];
        for (j = 0; j < n2; j++)
            R[j] = v[m + 1+ j];

        /* Merge the temp arrays back into arr[l..r]*/
        i = 0; // Initial index of first subarray
        j = 0; // Initial index of second subarray
        k = l; // Initial index of merged subarray
        while (i < n1 && j < n2)
        {
            if (cmp(L[i], R[j]))
            {
                v[k] = L[i];
                i++;
            }
            else
            {
                v[k] = R[j];
                j++;
            }
            k++;
        }

        /* Copy the remaining elements of L[], if there
           are any */
        while (i < n1)
        {
            v[k] = L[i];
            i++;
            k++;
        }

        /* Copy the remaining elements of R[], if there
           are any */
        while (j < n2)
        {
            v[k] = R[j];
            j++;
            k++;
        }
    }
        
    template<typename T, class Compare >
    void MergeSort_internal(std::vector<T> &v,int l, int r, Compare cmp)
    {
        if (l < r)
        {
            // Same as (l+r)/2, but avoids overflow for
            // large l and h
            int m = l+(r-l)/2;

            // Sort first and second halves
            MergeSort_internal(v, l, m, cmp);
            MergeSort_internal(v, m+1, r, cmp);

            merge(v, l, m, r, cmp);
        }
    }

    // Implementação do algoritmos de ordenação MergeSort
    template<typename T, class Compare >
    void MergeSort(std::vector<T> &v, Compare cmp)
    {
        // Merge sort
        int l = 0;
        int r = v.size() - 1;
        MergeSort_internal(v, l, r, cmp);
    }

    template<typename T, class Compare >
    int partition(std::vector<T> &v, int l, int r, Compare cmp)
    {
        T pivot = v[r];
        int i = (l - 1);

        for (int j = l; j <= r - 1; j++)
        {
            // If current element is smaller than or
            // equal to pivot
            if (cmp(v[j], pivot))
            {
                i++;    // increment index of smaller element
                std::swap(v[i], v[j]);
            }
        }
        std::swap(v[i + 1], v[r]);
        return (i + 1);
    }

    template<typename T, class Compare >
    void QuickSort_internal(std::vector<T> &v, int l, int r, Compare cmp)
    {
        if (l < r)
        {
            /* pi is partitioning index, arr[p] is now
               at right place */
            int pi = partition(v, l, r, cmp);

            // Separately sort elements before
            // partition and after partition
            QuickSort_internal(v, l, pi - 1, cmp);
            QuickSort_internal(v, pi + 1, r, cmp);
        }
    }
    // Implementação do algoritmos de ordenação QuickSort
    template<typename T, class Compare >
    void QuickSort(std::vector<T> &v, Compare cmp)
    {
        // Quick sort
        int l = 0;
        int r = v.size() - 1;
        QuickSort_internal(v, l, r, cmp);
    }

    template<typename T, class Compare >
    void heapify(std::vector<T> &v, int n, int i, Compare cmp)
    {
        int largest = i;  // Initialize largest as root
        int l = 2*i + 1;  // left = 2*i + 1
        int r = 2*i + 2;  // right = 2*i + 2

        // If left child is larger than root
        if (l < n && cmp(v[l], v[largest]))
            largest = l;

        // If right child is larger than largest so far
        if (r < n && cmp(v[r], v[largest]))
            largest = r;

        // If largest is not root
        if (largest != i)
        {
            std::swap(v[i], v[largest]);

            // Recursively heapify the affected sub-tree
            heapify(v, n, largest, cmp);
        }
    }
    // Implementação do algoritmos de ordenação HeapSort
    template<typename T, class Compare >
    void HeapSort(std::vector<T> &v, Compare cmp)
    {
        // Heap sort
        int n = v.size();

        // Build heap (rearrange array)
        for (int i = n / 2 - 1; i >= 0; i--)
            heapify(v, n, i, cmp);

        // One by one extract an element from heap
        for (int i=n-1; i>=0; i--)
        {
            // Move current root to end
            std::swap(v[0], v[i]);

            // call max heapify on the reduced heap
            heapify(v, i, 0, cmp);
        }

    }

    // Implementação do algoritmos de ordenação da sua escolha> não pode 
    // ser o mesmo que os anteriores, nem o BubbleSort e nem o SelectionSort.
    template<typename T, class Compare >
    void MySort(std::vector<T> &v, Compare cmp)
    {
        // Shellsort
        int n = v.size();
        for (int gap = n/2; gap > 0; gap /= 2)
        {
            // Do a gapped insertion sort for this gap size.
            // The first gap elements a[0..gap-1] are already in gapped order
            // keep adding one more element until the entire array is
            // gap sorted
            for (int i = gap; i < n; i += 1)
            {
                // add a[i] to the elements that have been gap sorted
                // save a[i] in temp and make a hole at position i
                T temp = v[i];

                // shift earlier gap-sorted elements up until the correct
                // location for a[i] is found
                int j;
                for (j = i; j >= gap && cmp(v[j - gap], temp); j -= gap)
                    v[j] = v[j - gap];

                //  put temp (the original a[i]) in its correct location
                v[j] = temp;
            }
        }

    }
}

#endif /* SORT_H */
