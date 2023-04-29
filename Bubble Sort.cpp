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
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
     long long int t,i,n,j,temp,c=0;
     cin>>n;
     for(i=0;i<n;i++){
          cin >>a[i];
     }
     bool ok=true;
     while(ok!=false){
               ok=false;
          c++;
     for(i=0;i<n-1;i++){
          if(a[i]>a[i+1]){
                    swap(a[i],a[i+1]);
          ok=true;
          }
     }
     }
               //cout<<"temp"<<temp<<endl;
             // cout<<temp<<endl;
//       for(i=0;i<n;i++){
//          cout<<a[i]<<" ";
//     }
//     cout<<endl;
    // cout<<"T"<<temp<<endl;
     cout<<c<<endl;
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH
