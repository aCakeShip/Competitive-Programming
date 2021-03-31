/*You are given a rooted tree with n nodes and node 1 as a root. There is a unique path between any two nodes. 
Here, d(i,j) is defined as a number of edges in a unique path between nodes i and j.

You have to find the number of pairs (i.j) such that d(i,j) = d(i, 1) - d(j,1).

Input format

The first line contains n denoting the integer.
Next n-1  lines denote the edges of the tree.
Output format

Print a single integer denoting the number of pairs (i,j)  such that d(i,j) = d(i, 1) - d(j,1). */

#include <bits/stdc++.h>
 
using namespace std;
 
#define For(i,n) for(int i=0;i<n;i++)
#define mem(a,b) memset(a,b,sizeof(a))
#define int long long int
#define ld long double
#define fio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define ld long double
#define pb push_back
#define ff first
#define ss second
#define vpi vector<pair<int,int> >
#define vv vector<int>
#define MAXN 1001
 
int A[MAXN];
 
vector<int > adj[100001];
 
int h[100001];
 
void dfs(int u, int p) {
   h[u] = h[p] + 1;
 
   for (auto i : adj[u]) {
       if (i != p) { dfs(i, u); }
   }
}
int32_t main() {
 
#ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
#endif
   fio;
   int t;
   int n;
   cin >> n;
   for (int i = 0; i < n - 1; i++) {
 
       int l, r;
       cin >> l >> r;
       adj[l].pb(r);
       adj[r].pb(l);
   }
   dfs(1, 0);
   int ans = 0;
   for (int i = 1; i <= n; i++) {
       ans += h[i];
   }
   cout << ans << endl; 
   // cout << h[4] << endl;
}


