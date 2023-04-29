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
     long long int c,i,n,j,mx=0;
     cin>>c;
     for(i=1;i<=c;i++){
               for(j=1;j<=(c^i);j++){
                    mx=max(mx,i*j);
               }

     }
     cout<<mx<<endl;
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH



