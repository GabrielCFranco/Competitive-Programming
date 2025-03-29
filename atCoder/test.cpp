#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40, 50};

    // Finding lower bound for value 35 in vector v
    cout << *lower_bound(v.begin(), v.end(), 29);

    return 0;
}