#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
int n;
void solveOdd()
{
    for(int i=2;i<=n;i+=2)
    {
        cout << i << " ";
    }
    for(int i=1;i<=n;i+=2)
    {
        cout << i << " ";
    }
    cout << "\n";
}
void solveEven()
{
    for(int i=1;i<=n;i+=2)
    {
        cout << i << " ";
    }
    for(int i=2;i<=n;i+=2)
    {
        cout << i << " ";
    }
    cout << "\n";
}
int main()
{
    cin >> n;
    if(n>=2&&n<=3) {cout << "NO SOLUTION\n";return 0;}
    if(n%2==0) solveOdd();
    else solveEven();
    return 0;
}