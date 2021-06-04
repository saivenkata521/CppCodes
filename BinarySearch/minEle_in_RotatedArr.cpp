#include <bits/stdc++.h>
using namespace std;

 int findMin(vector<int>& nums) {
        
        int l = 0; int r = nums.size()-1;
    
        while( l <= r and nums[l] > nums[r] ) {
            
            int mid = l + (r-l)/2;
            if( nums[mid] > nums[r] ){
                l = mid+1;
            }
            else r = mid;
            
        }
        
        return nums[l];
        
}


int main(){

    int t; 
    cin>>t;

    while( t-- ){

        vector<int> nums;

        //input part
        int n; cin>>n;
        for( int i = 0 ; i < n ; i++ ){
            int t; cin>>t;
            nums.push_back(t);
        }

        cout<<findMin(nums);
    }
}