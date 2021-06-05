#include <bits/stdc++.h>
using namespace std;


int main(){
	freopen( "input.txt" , "r" , stdin );
	int t; 
	cin>>t;
	while( t-- ){
		
		int n;
		cin>>n;
		int ans=0;
		for( int i = 0 ; i < n ; i++ ){
			int t;
			cin>>t;
			ans ^= t; 
		}
		
		cout<<ans<<endl;
		
		
	}

}
