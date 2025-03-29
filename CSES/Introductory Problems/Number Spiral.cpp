#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
int main()
{
    ll t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        ll row, col, aux;
        cin >> row >> col;
        if(row>=col)
        {
            if(row%2==0) cout << row*row - (col-1) << "\n";
            else cout << row*row - ((row-1)+(row-col)) << "\n";
        }
        else
        {
            if(col%2==1) cout << col*col - (row-1) << "\n";
            else cout << col*col - ((col-1)+(col-row)) << "\n";
        }
    }
}