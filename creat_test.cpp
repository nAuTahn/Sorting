#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e6;
vector <double> input;
double maxx = 696969696969.0;
double minn = -696969696969.0;

int main() {
    freopen("data.inp","w",stdout);
    srand(time(NULL));
    for (int i = 0; i < MAX; ++i) {
        float scale = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
        input.push_back(minn + scale * (maxx - minn));
    }
    //sort(input.begin(), input.end());
    for (auto t: input)
        cout << fixed << setprecision(6) << t << " ";
    return 0;
}
