#include <bits/stdc++.h>
using namespace std;

 
int main(){

//Logic :  comparing ( that_number + sum_upto_it's_before_element , that_number ) 
//MaxSoFar which maintains the maximum element 

    // freopen("input.txt","r",stdin ); //--> input.txt is a text file contains
    int t; cin>>t; //number of test cases
    while( t-- ){
        int n; cin>>n;
        int Arr[n];
        for( int i = 0 ; i < n ; i++ ) cin>>Arr[i];
        int MaxSum = Arr[0],MaxSoFar = Arr[0];
        for( int i = 1 ; i < n ; i++ ){
            MaxSum = max( MaxSum+Arr[i] , Arr[i] );
            MaxSoFar = max( MaxSoFar , MaxSum );
        }
        cout<<MaxSoFar<<endl;
    }

}
 


//Test Cases
// input.txt contains the following content
// 4
// 9
// -12 11 -13 -5 6 -7 5 -3 -6
// 9
// -1 2 -3 4 5 6 -7 8 9
// 16
// 3 5 -9 1 3 -2 3 4 7 2 -9 6 3 1 -5 4 
// 100
// 3 5 -9 1 3 -2 3 4 7 2 3 5 -9 1 3 -2 3 4 7 2 3 5 -9 1 3 -2 3 4 7 2 3 5 -9 1 3 -2 3 4 7 2 3 5 -9 1 3 -2 3 4 7 2 3 5 -9 1 3 -2 3 4 7 2 3 5 -9 1 3 -2 3 4 7 2 3 5 -9 1 3 -2 3 4 7 2 3 5 -9 1 3 -2 3 4 7 2 3 5 -9 1 3 -2 3 4 7 2 
































 

