/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
long long int lcm(long long int a,long long b){
         return a*(b/__gcd(a,b));
    }
const long long int mx = 1e7+123;
long long int a[mx];

int main()
{
     optimize();
     long long int t,i,n,p;
     char m;
     cin>>p;
     while(p--){
          cin>>t>>n;
     cin>>m;
    string s = bitset<16>(t).to_string();
     if(m=='L'){
               s=s.substr(n) + s.substr(0, n);
     }
     else{
        s=s.substr(s.size()-n)+s.substr(0,s.size()-n);
     }
     cout<<bitset<16> (s).to_ulong()<<endl;
 }
}
/// ALHAMDULILLAH




