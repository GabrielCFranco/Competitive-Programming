#include <bits/stdc++.h>
using namespace std;
#define MAX 1001
vector<vector<int>> v(MAX);
int vis[MAX];
int sum=-1;
void addEdge(int x,int y)
{
    v[x].push_back(y);
}
void dfs(int x)
{
    if(vis[x]==1) return;
    vis[x]=1;
    stack<int> stk;
    stk.push(x);
    int ans=0;
    while(!stk.empty())
    {
        int t = stk.top();
        stk.pop();  
        for(auto act:v[t])
        {
            if(vis[act+t]==0)
            {
                vis[act+t]=1;
                stk.push(t+act);
                ans+=act;
            }
            sum = max(sum,ans);
        }
        ans=0;
    }
}
template<typename T> vector<int> pi(T s) {
	vector<int> p(s.size());
	for (int i = 1, j = 0; i < s.size(); i++) {
		while (j and s[j] != s[i]) j = p[j-1];
		if (s[j] == s[i]) j++;
		p[i] = j;
	}
	return p;
}

template<typename T> vector<int> matching(T& s, T& t) {
	vector<int> p = pi(s), match;
	for (int i = 0, j = 0; i < t.size(); i++) {
		while (j and s[j] != t[i]) j = p[j-1];
		if (s[j] == t[i]) j++;
		if (j == s.size()) addEdge(i-j+1,j), j = p[j-1];
	}
	return match;
}

struct KMPaut : vector<vector<int>> {
	KMPaut(){}
	KMPaut (string& s) : vector<vector<int>>(26, vector<int>(s.size()+1)) {
		vector<int> p = pi(s);
		auto& aut = *this;
		aut[s[0]-'a'][0] = 1;
		for (char c = 0; c < 26; c++)
			for (int i = 1; i <= s.size(); i++)
				aut[c][i] = s[i]-'a' == c ? i+1 : aut[c][p[i-1]];
	}
};
int main()
{
    string s; cin >> s;
    int n; cin >> n;
    vector<vector<int>> mat;
    vector<string> vs;
    for(int i=0;i<n;i++)
    {
        string p;
        cin >> p;
        mat.push_back(matching(p,s));
        vs.push_back(p);
    }
    int sum = -1;
    for(int i=0;i<v.size();i++)
    {
        dfs(i);
    }
    cout << sum << "\n";
}