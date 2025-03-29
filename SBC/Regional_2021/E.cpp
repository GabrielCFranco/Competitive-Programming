#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define ll long long
bool wait=false;
void solve()
{
    int n;
    int time=0, side;
    cin >> n;
    int t, d;
    cin >> t >> d;
    time = t+10; side = d;
    int last=t, lasto=0;
    for(int i=1;i<n;i++)
    {
        cin >> t >> d;
        if(t>time)
        {
            if(lasto!=0)
            {
                last=time;
                time = last+10;
                lasto=0;
            }
            else
            {
                time = t;
            }
            time+=10;
            side = d;
        }
        else if(side==d)
        {
            last = t;
            time = last+10;
        }
        else
        {
            lasto=t;
        }
    }
    if(lasto!=0)
    {
        time+=10;
    }
    cout << time << "\n";
}
int main()
{
    do
    {
        solve();
    }while(0);
}