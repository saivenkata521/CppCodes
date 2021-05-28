 
#include <bits/stdc++.h>
using namespace std;

 
int getPairsCount(int arr[], int n, int k) {
    // code here
    map<int,int> mp;
    int count = 0;
    for( int i = 0 ; i < n ; i ++ ) mp[arr[i]] = 1;
    for( int i = 0 ; i < n ; i++ ){
        if( mp[ k-arr[i] ] == 1 ){
            count += 1;
            mp[k-[i]] += 1;
        }
    }
    return count;
}
 
 .

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
      cout<<getPairsCount(arr, n, k);
         
    }
    
    return 0;
} 