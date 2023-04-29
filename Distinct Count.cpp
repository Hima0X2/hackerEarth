#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int t,i,n,k;
     cin>>t;
     while(t--){
          cin>>n>>k;
          long long a[n];
          set<int> s;
          for(i=0;i<n;i++){
               cin>>a[i];
               s.insert(a[i]);
          }
          int d=s.size();
          if(d>k){cout<<"Average"<<endl;}
          else if(d<k){cout<<"Bad"<<endl;}
          else{cout<<"Good"<<endl;}
     }
}
