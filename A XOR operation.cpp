/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
     optimize();
     long long int t,i,n,sum=0,d;
     cin>>t;
     while(t--){
               sum=0;
               bool flag=true;
   cin>>n;
   long long int a[n+1];
     unordered_map<long long int,long long int> mp;
   for(i=0;i<n;i++){
     cin>>a[i];
     sum=sum^a[i];
     mp[a[i]]=1;
   }
   for(i=0;i<n;i++){
          d=sum^a[i];
    if(mp[d]!=1){
     flag=false;
    }
   }
    if(!flag){
          cout<<-1<<endl;
     }
     else{
     cout<<sum<<endl;
     }
     }
}
/// ALHAMDULILLAH


