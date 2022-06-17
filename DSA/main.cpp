#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#include "quicksort.h"
#include "heapsort.h"
#include "mergesort.h"
#define All(v) v.begin(), v.end()

const int MAX = 1e6;

void times(double start, double ends) {
    double ti = (ends - start) / CLOCKS_PER_SEC;
    cout << (int) (1000 * ti);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("data.inp", "r", stdin);
    freopen("FINISH.out", "w", stdout);
    srand(time(NULL));
    cout << "Test  " << "HeapSort  " << "MergeSort " << "QuickSort " << "std::sort \n";
    for (int i = 1; i <= 10; ++i) {
        vector <double> arr;
        for (int j = 1; j <= MAX; ++j) {
            double x;
            cin >> x;
            arr.push_back(x);
        }

        int siz = arr.size();

        vector <double> brr(MAX);
        for (int k = 0; k < MAX; ++k)
            brr[i] = arr[i];

        double start, ends;

        start = clock();
        heapsort(brr, siz);
        ends = clock();
        if (i < 10)
            cout << i << "       ";
        else cout << i << "      ";
        times(start, ends);
        cout << "         ";

        for (int k = 0; k < MAX; ++k)
            brr[i] = arr[i];
        start = clock();
        mergesort(brr, 0, siz - 1);
        ends = clock();
        times(start, ends);
        cout <<"       ";

        for (int k = 0; k < MAX; ++k)
            brr[i] = arr[i];
        start = clock();
        quicksort(brr, 0, siz - 1);
        ends = clock();
        times(start, ends);
        cout << "       ";

        for (int k = 0; k < MAX; ++k)
            brr[i] = arr[i];
        start = clock();
        sort(All(brr));
        ends = clock();
        times(start, ends);
        cout << "      \n";

        arr.clear();
    }
    return 0;
}
