#include <bits/stdc++.h>
using namespace std;


void InsertionSort( int Arr[] , int l , int n , int index ){
    if(  l == n+1 ) return;
    if( Arr[index-1] > Arr[index] and index > 0 ){
        swap( Arr[index-1],Arr[index] );    
        InsertionSort( Arr , l , n , index-1 );
    }
    else{
        index = l+1;
        InsertionSort( Arr , l+1 , n , index );
    }
}

int main(){
    int t; cin>>t;
    while( t-- ){

        int n; cin>>n;
        int Arr[n];
        for( int i = 0 ; i < n ; i++ )   cin>>Arr[i];

        InsertionSort( Arr , 1 , n-1 , 1);
        for( int i = 0 ; i < n ; i ++ ){
            cout<<Arr[i]<<" ";
        }
        cout<<endl;
    }
}