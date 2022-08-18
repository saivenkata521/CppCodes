#include <bits/stdc++.h>
using namespace std;


//This algorithm is used to find the kth smallest number in the unsorted array
//in worst case this algorithm takes o(n^2)

int main(){


    vector<int> v = {9,6,9,9,5,3,2,1};
    int n = v.size();
    int k = 3;
  

    int idx = -1;
    int j = 0;
    int pivot = v[n-1];

    while( 1 ){

        while( j < n ){

            if( v[j] <= pivot ){
                idx++;
                swap( v[idx] , v[j] );
            }
            j++;

        }

        pivot = v[idx-1];   
        if( idx+1 == k ) break;
        idx = idx-1;
        idx = -1;
        j = 0;


        
    }

    for( int i = 0 ; i < n ; i++ ) cout<<v[i]<<" ";





}
