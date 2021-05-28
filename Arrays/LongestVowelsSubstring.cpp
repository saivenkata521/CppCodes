#include <bits/stdc++.h>
using namespace std;


//driver code
int main(){

     
    int t; cin>>t; //no.of test cases
    while( t-- ){

        string word; cin>>word;
        int StrLen = word.length();
        int MaxLen = 0;
        map<char,int> mp;
        if( StrLen < 5 ){
            cout<<MaxLen;
            return 0;
        }
        for( int i = 0; i < StrLen ; i++ ){

            if( word[i] <= word[i+1] ){
                mp[word[i]]++;
            }
            else{
                mp[word[i]]++;
                if( mp['a'] == 0 or mp['e']==0 or mp['i']==0 or mp['o'] == 0 or mp['u'] == 0 ){
                    mp['a'] = 0 ; mp['e'] = 0 ; mp['i'] = 0; mp['o'] = 0 ; mp['u'] = 0; 
                }
                else{
                    int Len = mp['a'] + mp['e'] + mp['i']+ mp['o'] +mp['u'];
                    mp['a'] = 0 ; mp['e'] = 0 ; mp['i'] = 0; mp['o'] = 0 ; mp['u'] = 0; 
                    MaxLen = max( Len , MaxLen );
                }
            }
            
        }
        cout<<MaxLen<<endl;

    }


}

 
