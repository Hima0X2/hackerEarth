#include<bits/stdc++.h>
using namespace std;
bool sam(char i,char j){
 return (i=='(' && j==')')||(i== '{' && j=='}')||(i=='[' && j==']');
}
int main()
{
     int t,n;
     bool p;
     string s;
     cin>>n;
     p=1;
     while(n--){
          cin>>s;
          stack<char> st;
           for ( auto u : s ) {
            if ( u == '(' || u == '{' || u == '[' ) st.push ( u );
            else {
                if ( st.empty() ) {
                    p = 0;
                    break;
                }
                    else{
                         if(sam(st.top(),u)){
                              st.pop();
                         }
                         else{
                              p=0;
                              break;
                         }
                    }
               }
          }
          if(p==1){cout<<"YES"<<endl;}
          else{
               cout<<"NO"<<endl;
          }
     }
}
