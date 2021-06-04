#include <bits/stdc++.h>
using namespace std;

int get_1st_occurance( vector<int> elements , int target , int firstOcc){

    int start = 0,end = elements.size()-1;
    while( start <= end ){

        int mid = ( start + end )/2;

        if( elements[mid] == target ) 
            firstOcc = mid;

        if( target <= elements[mid] ) 
            end = mid-1;
        else 
            start = mid+1;


    }

    return firstOcc;

}
int get_Last_Occurance( vector<int> elements , int target , int lastOcc ){

    int start = 0,end = elements.size()-1;
    while( start <= end ){

        int mid = ( start + end )/2;

        if( elements[mid] == target ) 
            lastOcc = mid;
        
        if( target >= elements[mid] )
            start = mid+1;
        else 
            end = mid-1;


    }
    return lastOcc;

}

//driver code
int main(){

    freopen( "input.txt" , "r"  , stdin );
    //t for no.of test cases
    // cout<<"Enter Number of inputs ";
    int t; 
    cin>>t;

    while( t-- ){

        vector<int> elements;

        //input part
        int n; cin>>n;
        for( int i = 0 ; i < n ; i++ ){
            int t; cin>>t;
            elements.push_back(t);
        }


        int target; cin>>target;


        cout<<get_1st_occurance( elements , target , -1 )<<endl;
        cout<<get_Last_Occurance( elements , target , -1 )<<endl<<endl;

    }

}