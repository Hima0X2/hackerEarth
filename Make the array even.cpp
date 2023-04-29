#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int t,i,n,c=0,d=0,x;
     cin>>t;
     while(t--){
               c=0;
              d=0;
          cin>>n;
          long long int a[n];
          for(i=0;i<n;i++){
               cin>>a[i];
               if(a[i]&1){
                   c++;
               }
               else{
               d=d+c+(c&1)*3;
                c=0;
            }
          }
            d=d+c+(c&1)*3;
         cout<<(d/2)<<endl;
}
}
