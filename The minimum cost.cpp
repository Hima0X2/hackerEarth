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
     long long int t,i,n,c0,c1;
     cin>>t;
     while(t--){
               long long int one=0,zero=0,total,mn;
       cin>>n>>c0>>c1;
       for(i=1;i<=n;i++){
          cin>>a[i];
       }
       for(i=1;i<=n;i++){//odd--1
          if(i%2){
               if(!a[i]){
                    one++;
               }
          }
          else{
               if(a[i]){
                    zero++;
               }
          }
       }
       total=one*c0+zero*c1;
       one=0,zero=0;
        for(i=1;i<=n;i++){//even--1
          if(!(i%2)){
               if(!(a[i])){
                    one++;
               }
          }
          else{
               if(a[i]){
                    zero++;
               }
          }
       }
       mn=one*c0+zero*c1;
       cout<<min(mn,total)<<endl;
     }
}
/// ALHAMDULILLAH



