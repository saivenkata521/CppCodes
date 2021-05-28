#include <bits/stdc++.h>
using namespace std;

void dfs( vector<vector<int>> &image , int r , int c , int src , int newColor ){
        
        if( r < 0 || r >= image.size() || c < 0 || c >= image[0].size() ) return;
        else if( image[r][c] != src ) return;
        
        image[r][c] = newColor;
        dfs( image , r+1 , c , src , newColor );
        dfs( image , r-1 , c , src , newColor );
        dfs( image , r , c+1 , src , newColor );
        dfs( image ,r , c-1 , src , newColor );
        
}
    
vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
    
    if( image[sr][sc] == newColor ) return image;
    int src = image[sr][sc];
    dfs( image ,  sr , sc , src ,newColor );
    return image;
}



int main(){

    vector<vector<int>> image;
    int m,n;  cin>>m>>n;  
    for( int i = 0 ; i < m ; i++ ){
        vector<int> temp;
        for( int j = 0 ; j < n ; j++ ){
            int t; cin>>t;
            temp.push_back(t);
        }
        image.push_back(temp);
    }
    int sr,sc,newColor; cin>>sr>>sc>>newColor;
    vector<vector<int>> P =  floodFill( image , sr , sc , newColor );
    
}
