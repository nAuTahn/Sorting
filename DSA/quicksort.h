#ifndef QUICKSORT_H_INCLUDED
#define QUICKSORT_H_INCLUDED

void quicksort(vector<double> &a, int l, int r) {
    if(l >= r)
        return;

    int ran_l = l;
    int ran_r = r;
    double pivot = a[l + (r - l) / 2];

    while(ran_l <= ran_r) {
        while(a[ran_l] < pivot) ran_l++;
        while(a[ran_r] > pivot) ran_r--;
        if(ran_l <= ran_r) {
            swap(a[ran_l], a[ran_r]);
            ran_l++;
            ran_r--;
        }
    }

    if(l < ran_r)
        quicksort(a, l, ran_r);
    if(ran_l < r)
        quicksort(a, ran_l, r);
}

#endif // QUICKSORT_H_INCLUDED
