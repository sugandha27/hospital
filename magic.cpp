#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n,m;

	cin>>t;

	while(t--){
	c=0;

		cin>>n>>m;

		int a[n];

		for(int i=0;i<n;i++)
		{ cin>>a[i];
		   if(a[i]%m==0)c++;
		  }
		  
		  ans=c*(c+1)/2;

		 cout<<ans;


	}
}