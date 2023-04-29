#include<bits/stdc++.h>
using namespace std;
int main()
{
     priority_queue< long long int> p;
     long long int n,i,a[100000],x,y,z;
     cin>>n;
     for(i=0;i<n;i++){
          cin>>a[i];
     }
       for(i=0;i<n;i++){
         p.push(a[i]);
         if(p.size()>=3)
     {
          x=p.top();
          p.pop();
          y=p.top();
          p.pop();
          z=p.top();
          p.pop();
          cout<<x*y*z<<endl;
          p.push(x);
          p.push(y);
          p.push(z);
         }
         else{
          cout<<-1<<endl;
         }
     }
}
