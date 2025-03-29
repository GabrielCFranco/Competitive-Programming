#include <bits/stdc++.h>
using namespace std;

const char chars[] = {'A', 'H', 'I', 'M', 'O', 'T', 'U', 'V', 'W', 'X', 'Y'};
mt19937 rng((int) chrono::steady_clock::now().time_since_epoch().count());

int uniform(int l, int r){
	uniform_int_distribution<int> uid(l, r);
	return uid(rng);
}
int main()
{
    int i=1;
    cout << i << "\n";
    while(i--)
    {
        int cap = rng() % 20 + 1;
        string s;
        for (int i = 0; i < cap; i++) {
            int prob = (rng() % 10) + 2;
            if(prob >= 2)
                s.push_back(chars[rng()%(sizeof(chars)/sizeof(chars[0]))]);
            else
                s.push_back('B');
        }
        cout << s << "\n";
    }
}