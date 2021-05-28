#include <bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int>& nums) {
        
         
        int n = nums.size();
        int i= n-2;
        int flag = 0;
        while( i >= 0 and nums[i] >= nums[i+1] ){
            i --;
        }
        
        if( i >=0 ){
            int j = n-1;
            while( nums[j] <= nums[i] and j >= 0) {
                j --;
            }
            
            swap( nums[i] , nums[j] );
            reverse( nums.begin()+i+1 , nums.end() );
        }
        else{
            sort( nums.begin() , nums.end() );
        }
        
        
        
}

//driver code
int main(){
    vector<int> nums{1,2,3};
    nextPermutation(nums);
    for( int i = 0 ; i < nums.size() ; i ++ ){
        cout<<nums[i]<<" ";
    }
}