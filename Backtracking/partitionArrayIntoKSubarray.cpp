#include <bits/stdc++.h>
using namespace std;

void print( vector<vector<int>> ans ){
    
    for( auto it : ans ){
                cout<<"[ ";
                for( auto i : it ){
                    cout<<i<<" ";
                }
                cout<<"] ";
    }
    cout<<endl;
    
}

void solve( int arr[] , int k , int start , int n , vector<int> temp , vector<vector<int>> ans ){
        
        if( temp.size() > 0 ){
            ans.push_back(temp);
        }
        
        if( k-1 == 0 ){
            vector<int> temp1;
            for( int i = start ; i < n ; i++ ){
                temp1.push_back(arr[i]);
            }
            ans.push_back(temp1);
            print( ans );
            return;
        }
        
        vector<int> temp2;
        for( int i = start ; i < n-1 ; i++ ){
            temp2.push_back(arr[i]);
            solve( arr , k-1 , i+1 , n , temp2 , ans );
        }
}

int main(){
    
    int arr[] = { 1 , 2 ,3 , 4 , 5 ,6 } ;
    int n = 6;
    int k = 5;
    
    vector<vector<int>> ans;
    
    vector<int> temp;
        
    solve( arr , k , 0 , n , temp , ans );
    
    
}
