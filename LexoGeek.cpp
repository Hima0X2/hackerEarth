#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t,i;
     string s;
     cin>>t;
     while(t--){
          cin>>s;
          if(next_permutation(s.begin(),s.end()))
          {
               cout<<s<<endl;
          }
          else{
               cout<<"no answer"<<endl;
          }
     }
}
