#include <bits/stdc++.h>
using namespace std;


		

int main(){
	int t; 
	cin>>t; 	
	
	while( t-- ){
		
		cout<<"Enter n(number) and i(which bit u want to replace 1 ) ";
		int n,i;
		cin>>n>>i;
		
		int temp = ( i << i );
		
		cout<< ( n | temp ) << endl;
		
				
	}

}

