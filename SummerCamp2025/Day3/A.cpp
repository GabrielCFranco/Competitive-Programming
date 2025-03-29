#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
int main()
{
    int x,y;
    cin >> x >> y;
    int r;
    cin >> r;
    cout << x-r << " " << y+r << "\n";
    cout << x-r << " " << y-r << "\n";
    cout << x+r << " " << y-r << "\n";
    cout << x+r << " " << y+r << "\n";
}