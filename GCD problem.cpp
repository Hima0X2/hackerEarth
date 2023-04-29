#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const long long int mx = 1e7+123;
long long int a[mx];

int main()
{
     optimize();
long long int i,j,k,l,n,t,sum;
cin>>t;
while(t--){
          sum=0;
          long long int x;
     cin>>n;
     for(i=1;i<=n;i++){
        for(j=i+1;j<=n;j++){
          for(k=j+1;k<=n;k++){
               for(l=k+1;l<=n;l++){
                    x=__gcd(i,__gcd(j,__gcd(k,l)));
                    sum=sum+pow(x,4);
               }
          }
        }
     }
     cout<<sum<<endl;
}
}


