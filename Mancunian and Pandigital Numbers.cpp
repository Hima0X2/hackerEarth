/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
long long int lcm(long long int a,long long b){
         return a*(b/__gcd(a,b));
    }
const long long int mx = 1e7+123;
long long int a[mx];
bool valid(long long int n){
     string s;
     while(n){
          s.push_back(n%10+'0');
          n=n/10;
     }
     sort(s.begin(),s.end());
     if(s=="12"||s=="123"||s=="1234"||s=="12345"||s=="123456"){
          return true;
     }
     else{
          return false;
     }
}
int main()
{
     optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
     long long int t,i,n,l,r;
     a[1]=1;
     for(i=2;i<=1000000;i++){
          if(valid(i)){
               a[i]=a[i-1]+1;
          }
          else{
               a[i]=a[i-1];
          }
     }
     cin>>t;
     while(t--){
               cin>>l>>r;
     cout<<a[r]-a[l-1]<<endl;
     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




