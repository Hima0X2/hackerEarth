/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
const long long int mx = 1e7+123;
long long int c[mx];
bool check(int n)
{

    int x=log2(n)+1;

    int cnt=0;

    for(int i=0; i<x; i++)

    {

        if(n & 1<<i)

        {

            cnt++;

            if(cnt==2)

            {

                return true;

            }

        }

        else{

            cnt=0;
        }

    }

    return false;

}
int main()
{
    optimize();
    long long int t,i,n,l,r,a,p;
    cin>>n>>t;
    for(i=1; i<=n; i++)
    {
        cin>>a;
          c[i]=check(a);
    }
    while(t--)
    {
         long long int d=0;
        cin>>l>>r;
        for(i=l; i<=r; i++)
        {
          if(c[i]){
               d++;
          }
        }
        cout<<d<<endl;
    }
}
/// ALHAMDULILLAH



