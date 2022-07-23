https://www.geeksforgeeks.org/longest-possible-route-in-a-matrix-with-hurdles/

#include <bits/stdc++.h>
using namespace std;


vector<pair<int,int>> dir{{0,-1},{0,1},{1,0},{-1,0}};


bool isValid( int i , int j , int r , int c ){
    return ( i >= 0 and j >= 0 and i < r and j < c );
}


vector<vector<pair<int,int>>> res;

void traverse( vector<vector<int>> m , int i , int j ,  vector<vector<bool>> &visited , int cnt , int &Max , vector<pair<int,int>> &temp ){


    if( i == m.size()-1 and j == m[0].size()-1 ){
        
        res.push_back(temp);
        
        Max = max(Max,cnt);
        return;
    }

    for( auto it : dir ){

        int k = i + it.first;
        int l = j + it.second;

        if( isValid(k,l,m.size(),m[0].size()) and visited[k][l] ==  false and m[k][l] == 1 ){

            visited[i][j] = true;
            temp.push_back({i,j});
            traverse( m , k , l , visited , cnt+1 , Max , temp );
            if( !temp.empty() ) temp.pop_back();
            visited[i][j] = false;

        }        

    }


}

void getInput(){

    freopen("input.txt","r",stdin );

    int r;
    int c;

    cin>>r>>c;

    vector<vector<int>> m(r,vector<int>(c));

    for( int i = 0 ; i < r ; i++ ){
        for( int j = 0 ; j < c ; j++ ){
            cin>>m[i][j];
        }
    }

    vector<vector<bool>> visited(r,vector<bool>(c));

    int Max = 0;

    vector<pair<int,int>> temp;


    traverse( m , 0 , 0 , visited ,  1 , Max , temp );

    cout<<Max<<endl; 

    // cout<<endl<<endl;

    // for( auto  it : res ){

    //     for( auto i : it ){
    //         cout<<"( "<<i.first<<" "<<i.second<<" )";
    //     }

    // }
    
}

int main(){

    getInput();



    

    




}
