/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
long long int pw(long long int b,long long int p,long long int m)
{
    if(p==0)
        return 1;
    long long int k=pw(b,p/2,m)%m;
    if(p&1)
        return (b*k*k)%m;
    else
    {
        return ((k*k))%m;
    }
}
int main()
{
    optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
    long long int t,i,n,m,k,x;
    cin>>t;
    while(t--)
    {
        cin>>x>>k>>m;
         if(m==1){
       cout<<0<<endl;
       continue;
         }
    if(k==1){
      cout<<x%m<<endl;
      continue;
    }
        long long int ans=x;
        for(i=1; i<k; i++)
        {
         ans=pw(ans,x,m)%m;
        }
        cout<<ans%m<<endl;
    }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH

