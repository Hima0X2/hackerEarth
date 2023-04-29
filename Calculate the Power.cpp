/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
long long int mod=1000000000+7;
long long int pw(long long int b,long long int p){
     if(p==0) return 1;
     long long int k=pw(b,p/2)%mod;
     if(p&1) return (b%mod*k%mod*k%mod)%mod;
     else{
          return ((k%mod*k%mod)%mod)%mod;
     }
}
int main()
{
     optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
     long long int a,b;
    cin>>a>>b;
    cout<<pw(a%mod,b%mod)<<endl;
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




