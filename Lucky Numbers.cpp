/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
const long long int mx = 1e7;
const long long int mn = 1e9+7;
long long int a[mx];
int main()
{
     optimize();
   long long int t,i,j,n,a[1000];
     cin>>t;
     long long int x=1;
     a[0]=1;
     for(i=1;i<64;i++){
      a[i]=a[i-1]*2;
     }
     while(t--){
     long long int sum=0;
      cin>>n;
      long long int p=log2(n)+1;//1010 0001
      for(i=0;i<p;i++){
         for(j=i+1;j<p;j++){
           if(a[i]+a[j]<=n){
               //sum=sum+pow(2,i)+pow(2,j);
               sum=sum+a[i]+a[j];
           }
         }
      }
      cout<<sum%mn<<endl;
     }
}
/// ALHAMDULILLAH




