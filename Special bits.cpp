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
     long long int t,i,n,l,r,k;
     cin>>t;
     while(t--){
       cin>>l>>r>>k;
       if(l<=(long long int)pow(2,k)-1&&(long long int)pow(2,k)-1<=r){
          cout<<pow(2,k)-1<<endl;
       }
       else{
          cout<<-1<<endl;
       }
     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH



