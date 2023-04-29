#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	long long int t,i,n,m,j;
	cin>>t;
while(t--){
	long long int mx=0;
	cin>>n>>m;
	for(i=0;i<n;i++){
		long long int c=0;
		cin>>s;
		for(j=0;j<s.size();j++){
			if(s[j]=='#'){
				c++;
			}
		}
		mx=max(mx,c);
	}
	cout<<mx<<endl;
}
}