#ifndef MERGESORT_H_INCLUDED
#define MERGESORT_H_INCLUDED

void Merge(vector<double> &a, int l, int mid, int r) {
    int nl = mid - l + 1;
    int nr = r - mid;
    vector <double> L_arr, R_arr;
    L_arr.resize(nl);
    R_arr.resize(nr);

    for (int i = 0; i < nl; ++i)
        L_arr[i] = a[l + i];
    for (int i = 0; i < nr; ++i)
        R_arr[i] = a[mid + 1 + i];

    int n = l;
    int i = 0, j = 0;

    while (i < nl && j < nr) {
        if (L_arr[i] <= R_arr[j])
            a[n++] = L_arr[i++];
        else a[n++] = R_arr[j++];
    }

    while (i < nl)
        a[n++] = L_arr[i++];
    while (j < nr)
        a[n++] = R_arr[j++];
}

void mergesort(vector <double> &a, int l, int r) {
    if (l < r) {
        int mid = l + (r - l) / 2;
        mergesort(a, l, mid);
        mergesort(a, mid + 1, r);
        Merge(a, l, mid, r);
    }
}

#endif // MERGESORT_H_INCLUDED
