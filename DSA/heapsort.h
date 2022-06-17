#ifndef HEAPSORT_H_INCLUDED
#define HEAPSORT_H_INCLUDED

void init(vector <double> &arr, int n, int i) {
    int largest = i; //as father
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < n && arr[l] > arr[largest])
        largest = l;

    if (r < n && arr[r] > arr[largest])
        largest = r;

    if (largest != i) {
        swap(arr[i], arr[largest]);

        init(arr, n, largest);
    }
}

void heapsort(vector <double> &arr, int n) {
    for (int i = n / 2 - 1; i >= 0; i--)
        init(arr, n, i);

    for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]);
        init(arr, i, 0);
    }
}

#endif // HEAPSORT_H_INCLUDED
