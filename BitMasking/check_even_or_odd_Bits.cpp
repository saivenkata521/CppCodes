#include <bits/stdc++.h>
using namespace std;


//How it works 
//suppose if n == 2  we have to compare n with 1 
//the binary representation of 2 is 10
//the binary representation of 1 is 01
//compare the 0 and 1 which are last binary digits of 2 and 1 
//the and operation 0 and 1 is 0 it is even




int main(){
	int t; 
	cin>>t;
	while( t-- ){
		
		int n;
		cin>>n;
		
		if( (n & 1) ) cout<<"odd \n";
		else cout<<"even \n";
				
	}

}
