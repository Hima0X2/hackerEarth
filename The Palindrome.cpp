#include<bits/stdc++.h>
using namespace std;
int main()
{
     int i,t;
     string s,d;
     cin>>t;
     while(t--){
          cin>>s;
         d=s;
         reverse(d.begin(),d.end());
         if(d==s){
          cout<<"Yes\n";
         }
         else{cout<<"No\n";}
     }
}
