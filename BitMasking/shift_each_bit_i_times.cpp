#include <bits/stdc++.h>
using namespace std;


/// a << b represents a * (a^b);
/// a >> b represents a / (a^b);
//	

int main(){
	///freopen("input.txt","r",stdin);
	int t; 
	cin>>t;
	while( t-- ){
		
		cout<<"Enter Two integers ";
		int n,m;
		cin>>n>>m;
		
		//means each bit of n will be m times left shifted
		//and also means --> a*(pow(2,m));	
		cout<< ( n << m )<<endl; 
		
		//means each bit of n will be m times right shifted
		//and also means --> a/(pow(2,m));	
		cout<< ( n >> m )<<endl<<endl;
		
	}

}
