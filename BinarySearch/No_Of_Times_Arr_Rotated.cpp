#include <bits/stdc++.h>
using namespace std;

int get_Num( vector<int> elements ){

    int start = 0;
    int end = elements.size()-1;
    int mid = 0;
    int n = elements.size();

    if( elements[start] < elements[end] ) return n;

    while( start <= end and elements[start] >= elements[end] ){        

        mid = (start + end) / 2 ;

        if( elements[mid-1] > elements[mid] ) return n-mid;



        if( elements[start] >= elements[mid] )
            end = mid-1;
        else 
            start = mid+1;

    }

    return elements.size() - mid -1;


}

int main(){

    freopen( "input.txt" , "r"  , stdin );
    
    int t; 
    cin>>t;

    while( t-- ){

        vector<int> elements;

        int n; cin>>n;
        for( int i = 0 ; i < n ; i++ ){
            int t; cin>>t;
            elements.push_back(t);
        }

        cout<<get_Num( elements )<<endl;
    }


}