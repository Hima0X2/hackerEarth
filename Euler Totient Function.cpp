/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
const int mx = 1e6+123;
int is_prime[mx];
vector<int> prime;
void Prime(int n){
     int i,j;
  for(i=4;i<n;i=i+2){
     is_prime[i]=1;
}
for(i=3;i<sqrt(n);i=i+2){
     if(is_prime[i]==0){
          for(j=i*i;j<n;j=j+(i+i)){
               is_prime[j]=1;
          }
     }
}
is_prime[0]=is_prime[1]=1;
for(i=2;i<n;i++){
     if(is_prime[i]==0){
          prime.push_back(i);
     }
}
}
int phi(long long int n){
     int c=n;
     for(auto u:prime){
          if(1LL*u*u>n||n==0){
               break;
          }
          if(n%u==0){
                    c=c/u;
          c=c*(u-1);
               while(n%u==0){
                    n=n/u;
               }
          }
     }
     if(n>1){
          c=c/n;
          c=c*(n-1);
     }
     return c;
}
int main()
{
     optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
     long long int t,i,n;
     Prime(1e6);
     cin>>t;
    cout<<phi(n);
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




