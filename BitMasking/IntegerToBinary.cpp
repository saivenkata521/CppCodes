#include <bits/stdc++.h>
using namespace std;



int getBinary( int n ){
	
	if( n == 1 ) return 0;
	
	long N = long(n);
	string ans = "";
	
	while( N > 0 ){
		if(  N % 2 > 0 ){
			ans += to_string(1);
			N /= 2;		
		}
		else{
			ans += to_string(0);
			N /= 2;
		}
	}
	
	
	reverse(ans.begin() , ans.end() );
	
	return stoi(ans);
	
			
}




int main(){
	int t; 
	cin>>t;
	while( t-- ){
		
		int n;
		cin>>n;
		cout<<getBinary( n )<<endl;
		
	}

}
