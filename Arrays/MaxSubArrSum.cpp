#include <bits/stdc++.h>
using namespace std;


//driver code
int main()
{
   
    int n; cin>>n;
    int Arr[n];
    for( int i = 0 ; i < n ; i++ ) cin>>Arr[i];
   
    //Cummulative Sum Array
    int CumArr[n] = {0}; CumArr[0] = Arr[0];
    for( int i = 1 ; i < n ; i++ ){
        CumArr[i] = Arr[i] + CumArr[i-1];
    }
    // CumArr will be -4 ,-3 , 0 , -2  , 4 , 6  , 5  , 1  , -6 

    
    int MaxSum = INT_MIN;
    for( int i = 0 ; i < n ; i++ ){
        for( int j = i ; j < n ; j++ ){

            int CurrSum = 0;
            CurrSum  = CumArr[j] - CumArr[i-1];
            /* Explaination:
             1. suppose if we want to get sum from loc 2 4 then 
            we have to take --> ( sum upto 4 )  - ( sum upto 2 ) of CurrArr
            */

           if( MaxSum < CurrSum ) MaxSum = CurrSum;

        }
    }

    cout<<MaxSum;
}

// The above code takes O(N*N) if we use kaden's algo then it will O(N);