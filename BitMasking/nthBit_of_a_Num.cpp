#include <bits/stdc++.h>
using namespace std;

// a << b means 
//1 . shifting each bit by b times 
//2 . that is also equal to a*(pow(2,b));

//Example 1
		
		// 1 << i means 00001 shifting each bit to i times
		// if n == 1 then 00001 
		//    1 << i( say 0 ) then ( 1 << i ) values will be 00001
		// comapre  00001
		//          00001
		//          00001 > 0 
		
//Example 2
		
		//suppose if i == 2 i.e., ( 1 << 2 )
		//if n == 1 and i == 2
		//then                                              n = 000001
		// each bit of i will be after shifting twice           000100
		//                                                      000000 ( == 0 ) 
		// answe will 0;
		

int main(){
	int t; 
	cin>>t;
	while( t-- ){
		
		//n for number
		int n; 
		cin>>n;
		
		//which bit u need ith 
		int i;
		cin>>i;
		
		
		
		
		
		if( (n & (1 << i )) > 0 ){
			cout<<"1"<<endl;
		}
		else{
			cout<<"0"<<endl;
		}
		
				
	}

}
