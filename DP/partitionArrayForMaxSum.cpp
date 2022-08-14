#include <bits/stdc++.h>
using namespace std;

int solve( vector<int> v , int start , int n , int k ){

    if( start == n ) return 0;

    int len = 0;
    int Max = INT_MIN;
    int maxAns = INT_MIN;
   

    for( int i = start ; i < ( start+k < n ? start+k : n ) ; i++ ){
        
        len++;
        Max = max( v[i] , Max );
        int sum = Max * len + solve( v , i+1 , n , k );
        maxAns = max( maxAns , sum );

    }   

    return maxAns; 
  
}

int main(){

    freopen("input.txt","r",stdin);

    int t;
    cin>>t;

    while( t-- ){

        int n;
        cin>>n;

        vector<int> v(n);

        for( int i = 0 ; i < n ; i ++ ) cin>>v[i];

        int k ;
        cin>>k;

        int a = solve( v , 0 , n , k );

        cout<<a<<endl;

        



        

    }

}