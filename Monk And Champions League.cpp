#include<bits/stdc++.h>
using namespace std;
int main()
{
      priority_queue< long long int> p;
     long long int n,i,m,a[100000],sum=0,x;
      cin>>n>>m;
     for(i=0;i<n;i++){
          cin>>a[i];
          p.push(a[i]);
     }
    while(m--){
     x=p.top();
     sum=sum+x;
    x--;
    p.pop();
    if (x>0){
          p.push (x);
        }
    }
    cout<<sum<<endl;
}
