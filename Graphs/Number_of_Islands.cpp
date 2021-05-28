   #include <bits/stdc++.h>
   using namespace std;

    void oqpyIsland( vector<vector<char>> &grid , int i , int j ){
        if( i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size() ) return;
        else if( grid[i][j] == '0' || grid[i][j] == '2' )  return;
        grid[i][j] = '2';
        oqpyIsland( grid , i+1 , j );
        oqpyIsland( grid , i-1 , j );
        oqpyIsland( grid , i , j+1 );
        oqpyIsland( grid , i , j-1 );
    }
    
    
    int numIslands(vector<vector<char>>& grid) {
        
        int count = 0;
        for( int i = 0 ; i < grid.size() ; i++ ){
            for( int j = 0 ; j < grid[i].size() ; j++ ){
                if( grid[i][j] == '1' ){
                    count += 1;
                    oqpyIsland( grid , i , j );
                }
            }
        }
        
        return count;        
    }
    
    
   int main(){
        vector<vector<int>> grid;
        int m,n;  cin>>m>>n; // m x n matrix
        for( int i = 0 ; i < m ; i++ ){
            vector<int> temp;
            for( int j = 0 ; j < n ; j++ ){
                int t; cin>>t;
                temp.push_back(t);
            }
            grid.push_back(temp);
         }
         cout<<numIslands( grid );
   }
