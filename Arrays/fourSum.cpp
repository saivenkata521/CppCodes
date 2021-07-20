#include <bits/stdc++.h>
using namespace std;


int main(){

		vector<int> nums{ 1,0,-1,0,-2,2 };
		sort( nums.begin() ,  nums.end() );

		vector<vector<int>> ans;
        unordered_map<int,vector<pair<int,int>> > mp;
        int n = nums.size();
        
        for( int i = 0 ;  i < n-1 ; i ++ ){
            for( int j = i+1 ; j < n ; j++ ){
                mp[nums[i]+nums[j]].push_back(make_pair( i , j ));
            }
        }
        
        for( int i = 0 ; i < n-1 ; i ++ ){
            
            if( i > 0 and nums[i] == nums[i-1] ) continue;
               
              for( int  j = i+1 ; j  < n ; j++ ){
                  
                  if( j > i+1 and nums[j] == nums[j-1] ) continue;
                  
                  int rem = target - ( nums[i]+nums[j] );
                  
                  if( mp.find(rem) != mp.end() ){
                      
                      for( auto it : mp[rem] ){
                          
                          int k = it.first;
                          int l = it.second;
                          //i < j < k < l 
                          if( j < k ){                           
                              
                              //Duplicates
                              if( !ans.empty() and ans.back()[0] == nums[i] and ans.back()[1] == nums[j] and ans.back()[2] == nums[k] and ans.back()[3] == nums[l] ) 
                              			continue;
                              ans.push_back( {nums[i],nums[j],nums[k],nums[l]} );
                              
                          }
                       }
                  }
              }
               
         }
        
        return ans;



}