#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll unsigned long long
int main()
{
    int n;
    set<int> s;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int aux;
        cin >> aux;
        s.insert(aux);
    }   
    cout << s.size() << "\n";
}