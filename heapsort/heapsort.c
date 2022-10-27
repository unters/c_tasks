#include "./heapsort.h"


/* a - pointer to an array; n - number of elements in a; i - idnex of an
 * element to heapify.  */
void heapify_nonasc(int * a, int n, int i) {
    int largest = i;
    int l = i * 2 + 1;
    int r = i * 2 + 2;

    if (l < n)
        if (a[l] > a[i]) 
            largest = l;

    if (r < n)
        if (a[r] > a[largest])
            largest = r;
        
    if (largest != i) {
        swap((a + i), (a + largest));
        heapify_nonasc(a, n, largest);
    }        
}


/* a - pointer to an array; n - number of elements in a.  */
void build_heap_nonasc(int * a, int n) {
    for (int i = n / 2 - 1; i >= 0; --i)
        heapify_nonasc(a, n, i);
}


/* a - pointer to an array; n - number of elements in a.  */
void heapsort_asc(int * a, int n) {
    build_heap_nonasc(a, n);

    for (int i = n - 1; i > 0; --i) {
        swap(a, (a + i));
        heapify_nonasc(a, --n, 0);
    }
}

void swap(int * p, int * q) {
        int t = *p;
        *p = *q, *q = t;
}
