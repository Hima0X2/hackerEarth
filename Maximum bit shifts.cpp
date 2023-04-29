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
    long long int t,i,n,a,j;
    cin>>n;
    while(n--)
    {
        long long int rem,bin=0;
        cin>>a;
        if((a&(a+1))==0)
        {
            cout<<a<<endl;
            continue;
        }
       string s="";
        for(j=a; j!=0; j /= 2)
        {
            rem = j % 2;
          if(rem==1){
               s=s+'1';
          }
          else{
               s=s+'0';
          }
        }
       sort(s.begin(),s.end());
       reverse(s.begin(),s.end());
        cout<<bitset<64> (s).to_ulong()<<" ";
    }
    cout<<endl;
}
/// ALHAMDULILLAH


