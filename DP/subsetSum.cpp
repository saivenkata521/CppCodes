
#include<bits/stdc++.h> 
using namespace std; 


bool isTrue( int arr[] , int sum , int i , int N ){

        //if sum == 0 means there is possible subset sum
        if( sum == 0 ) return true;
        //we reached starting element of array from end we didn't find 
        //any subset with given sum;
        if( N == 0 ) return false;

        //Choice based 
        //the elements which are less than the sum are only consider for 
        //subset elements
        if( arr[N-1] <= sum ){
                //we can consider that element or we may not consider that element
                return max( isTrue(arr,sum-arr[N-1],i,N-1) , isTrue(arr,sum,i,N-1) );
        }
        //if we don't consider that element we are just skipping
        else return isTrue( arr , sum , i , N-1 );

}

bool isTrue( int arr[] , int sum , int N ){

    //we need sum assumptions like 
   /*    sum 
         -------->
         0  1  2  3  4  5 
a    0   T  F  F  F  F  F
r    1   T
r    2   T
a    3   T 
y    4   T

    in order to filling base vertical we need to think that 
    Vertical: If sum is 0 , we can get sum 0 without including elements so True
    Horizontal : if there are no elements in the array we can can't get sum 1 , 2 , 3 ... so False */
    
    vector<vector<int>> dp( N+1 , vector<int> (sum+1,0) );
    
    for( int i = 0 ; i <= N ; i++ ){
        dp[i][0] = 1;
    }

    for( int i = 1 ;  i <= N ; i++ ){
        for( int j = 1 ; j <= sum ; j++ ){
            if( arr[i-1] <= j ){
                //w.r.t to recursive func we can observe 
                dp[i][j] = max( dp[i-1][j-arr[i-1]] , dp[i-1][j] );
            }
            else dp[i][j] = dp[i-1][j];
        }
    }
    return dp[N][sum];


}
void isSubsetSum(int N, int arr[], int sum){
        
            //recursivly generating all subset sums 
            cout<<isTrue( arr , sum , 0 , N )<<endl;
            //dynamic Programming
            cout<<isTrue( arr , sum , N )<<endl;

}

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        int arr[N];
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
      
        isSubsetSum(N, arr, sum);
    }
    return 0; 
} 
