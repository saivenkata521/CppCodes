#include <bits/stdc++.h>
using namespace std;

bool isPal( string s ){
    string s1 = s;
    reverse( s1.begin() , s1.end() );
    return ( s1 == s );
}

void solve( string s , int start , int n , vector<string> ans ){

    if( start == n ){
        for( auto it : ans ){
            cout<<it<<" ";
        }
        cout<<endl;
        return;
    }

    string curStr = "";

    for( int i = start ; i < n ; i++ ){
        curStr += s[i];
        if( isPal(curStr) ){
            ans.push_back(curStr);
            solve( s , i+1 , n , ans );
        }
    }

}


int main(){

    string s = "abbba";
    // cin>>s;

    
    vector<string> ans;

    solve( s , 0 , s.length() , ans );

}
