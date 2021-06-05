#include <bits/stdc++.h>
using namespace std;

//what is xor 
//if input is binary
// if both inputs are same then output will be 0
//if  one of the input is 1 then output will be 1
//otherwise output will be zero 

//if input is decimal then 
//each binary bit of each number will be under xor comparision
//and then we get final decimal output


int main(){
	int t; 
	cin>>t;
	while( t-- ){
		
		cout<<"Enter Two Number to get XOR :";
		int m,n;
		
		cin>>m>>n;
		
		cout<<(m^n)<<endl<<endl;
		
		
	}

}
