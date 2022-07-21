#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:

bool isPalindrome( string s ){
    string temp = s;
    reverse(temp.begin(),temp.end());
    return ( s == temp );
}

void traverse( string s , int start , vector<string> &temp , vector<vector<string>> &ans  ){

        if( start == s.length() ){
            ans.push_back(temp);
            return;
        }

        string curStr = "";

        for( int i = start ; i < s.length() ; i++ ){

            curStr += s[i];

            if( isPalindrome(curStr) ){
                temp.push_back(curStr);
                traverse( s , i+1 , temp , ans );
                temp.pop_back();
            }

        }
}

vector<vector<string>> allPalindromicPerms(string S) {
    
    // code here
    vector<vector<string>> ans;
    vector<string> temp;
    traverse( S , 0 , temp , ans   );

    return ans;

}
};


int main() {
    freopen("input.txt","r",stdin);
    int t;
    cin >> t;
    while (t--) {
        string S;
        
        cin>>S;

        Solution ob;
        vector<vector<string>> ptr = ob.allPalindromicPerms(S);
        
        for(int i=0; i<ptr.size(); i++)
        {
            for(int j=0; j<ptr[i].size(); j++)
            {
                cout<<ptr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
