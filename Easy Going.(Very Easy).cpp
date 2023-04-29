/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
const long long int mx = 1e7+123;
long long int a[mx];
int main()
{
    optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
    long long int t,i,n,m;
    cin>>t;
    while(t--)
    {
         long long int mn=0,mx=0;
        cin>>n>>m;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        long long int p=n-m;
        for(i=0; i<p; i++)
        {
            mn=mn+a[i];
        }
        for(i=n-1; i>=m; i--)
        {
            mx=mx+a[i];
        }
        cout<<abs(mx-mn)<<endl;
    }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




