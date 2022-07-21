//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
    }
 
    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            if(i!=A.size()-1) cout << A[i]<< " ";
            else cout << A[i];
        }
        cout << endl;
    }
};


// } Driver Code Ends
class Solution {
  public:

    int cntInvalidParanthesis( string s ){

        stack<char> S;

        for( int i = 0 ; i < s.length() ; i++ ){
            if( s[i] == '(' ) S.push('(');
            else if( s[i] == ')' ){
                if( S.size() == 0 or S.top() == ')' ) S.push(')');
                else S.pop();
            }
        }
        return S.size();



    }


    vector<string> ans;
    set<string> Set;
    void genValidPar( string s , int invalidParCnt ){
        
        if( invalidParCnt == 0 ){
            if( cntInvalidParanthesis(s) == 0 ){
                int prev = Set.size();
                Set.insert(s);
                if( Set.size() > prev ){
                    ans.push_back(s);
                }
            }
            return;
        }

        for( int i = 0 ; i < s.length() ; i++ ){
            string leftPart = s.substr(0,i);
            string rightPart = s.substr(i+1);
            genValidPar( leftPart + rightPart , invalidParCnt-1 );
        }

    }

    vector<string> removeInvalidParentheses(string s) {
        
        // code here
        int invalidParCnt = cntInvalidParanthesis(s);

        //rmPartsCnt will return how many invalid paranthesis we need to remove
        genValidPar( s , invalidParCnt );

        for( auto it : ans ){
            cout<<it<<endl;
        }

    }
};


//{ Driver Code Starts.

int main(){
    freopen("input.txt","r",stdin);
    int t; 
    scanf("%d",&t);
    while(t--){
        
        string s; 
        cin>>s;
        
        Solution obj;
        vector<string> res = obj.removeInvalidParentheses(s);
        
        Array::print(res);
        
    }
}

// } Driver Code Ends
