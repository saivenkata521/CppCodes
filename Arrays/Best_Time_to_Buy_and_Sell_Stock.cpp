#include <bits/stdc++.h>
using namespace std;

//driver code
int main(){
    int t; cin>>t; //no.of test cases
    
    while( t-- ){

        int n; cin>>n; //no.of elements
        vector<int> prices;
        for( int i = 0 ; i < n ; i++ ){
            cin>>prices[i];
        }

        int BuyPrice = INT_MAX;
        int profit = 0;
        for( int i = 0 ; i < prices.size() ; i++ ){
            if( BuyPrice > prices[i] ){
                BuyPrice = prices[i];
            }
            else{
                profit = max(profit,prices[i]-BuyPrice);
            }
        }
        cout<<profit<<endl;


    }
}

/* input format
    2
    5
    5 4 3 2 1
    3
    1 3 2
*/
