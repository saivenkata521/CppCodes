#include <bits/stdc++.h>
using namespace std;

int search(vector<int>& nums, int target) {
        
        int n = nums.size();
        int start = 0, end = n-1;
        while( start <= end ){
            
            int mid =  (start+end)/2;
            
            if( nums[mid] == target ) return mid;
            
            if( nums[mid] <= nums[end] ){
                
                if( nums[mid] <= target and nums[end] >= target ){
                        start = mid+1;

                }
                else{
                       end = mid-1;

                }
                
            }
            
            else{
                
                if( target <= nums[mid] and target >= nums[start] ){
                         end = mid-1;    

                }
                else{
                         start = mid + 1;

                }
                
            }
            
        }
            
        
        return -1;
        
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

        int target; cin>>target;
        
        cout<<search( nums , target )<<endl;
    }


}

