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
     long long int t,i,n,j;
     cin>>t;
     while(t--){
               vector<long long int> v;
              cin>>n;
     long long int pow=1;
     while(n){
          if(n%2){
               v.push_back(pow);
          }
          n=n/2;
          pow=pow*3;
     }
     cout<<v.size()<<endl;
     for(i=0;i<v.size();i++){
          cout<<v[i]<<" ";
     }
     cout<<endl;
     }
}
/// ALHAMDULILLAH



