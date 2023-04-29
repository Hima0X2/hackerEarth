/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
const int mx = 1e4+123;
vector<int> adj[mx];
bool vis[mx];
int c;
void dfs(int u)
{
    vis[u]=1;
    for(auto v:adj[u])
    {
        if(vis[v]!=1)
        {
            dfs(v);
        }
    }
}
int main()
{
    optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
    long long int t,i,n,m,k,u,v,c=0;
    cin>>n>>m>>k;
    for(i=0; i<m; i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(i=1; i<=n; i++)
    {
        if(vis[i]==0)
        {
            c++;
            dfs(i);
        }
    }
    if(c>k)
    {
        cout<< -1<<endl;
    }
    else
    {
        cout<<m-n+k;
    }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




