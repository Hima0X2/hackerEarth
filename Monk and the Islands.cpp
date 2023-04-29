/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
const int mx = 1e4+123;
vector<int> adj[mx];
int ok[mx];
int c;
void dfs(int u)
{
    ok[u]=1;
    for(auto v: adj[u])
    {
        if(ok[v]==0)
        {
            dfs(v);
        }
    }
}
int main()
{
    optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
    long long int t,i,n,m,u,v,j,a;

//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH
