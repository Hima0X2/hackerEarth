/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
long long int lcm(long long int a,long long b){
         return a*(b/__gcd(a,b));
    }
const int mx = 1e6+123;
bitset<mx> is_prime;
vector<int> prime;
void Prime(int n){
     n=n+100;
     int i,j;
      is_prime[2]=1;
      prime.push_back(2);
     for(i=3;i<=n;i=i+2){
          is_prime[i]=1;
     }
     for(i=3;i<=sqrt(n);i=i+2){
          if(is_prime[i]==1){
               for(j=i*i;j<=n;j=j+(i+i)){
                    is_prime[j]==0;
               }
          }
     }
     for(i=3;i<=n;i=i+2){
           if(is_prime[i]==1){
                prime.push_back(i);
           }
     }
}
int NOD(long long int n){
int r=1,c;
for(auto p:prime){
          if ( 1LL * p * p > n ){
                    break;
          }
     if(n%p==0){
          c=1;
          while(n%p==0){
               n=n/p;
               c++;
          }
           r=r*c;
     }
}
if(n>1){
     r=r*2;
}
return r;
}
int main()
{
     optimize();
      long long int t,i,n,a,b;
      Prime(mx);
      cin>>t;
      while(t--){
       cin>>n;
       cout<<NOD(n)<<endl;
      }
}
/// ALHAMDULILLAH


