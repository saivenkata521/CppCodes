//Leader of Array problem:
/*
Description : If it a leader the elements right side are less than the current ele
then it is called leader. The last element in a array always a leader because it
it doesn't have any other element present right side to it.
*/

#include <bits/stdc++.h>
using namespace std;

//driver code
int main(){

    freopen("input.txt","r",stdin);
    //no.of Test Cases
    int t; cin>>t;
    while( t-- ){

        //input part
        int n; cin>>n;
        int Arr[n];
        for( int i = 0 ; i < n ; i ++ )  cin>>Arr[i];

        //Inorder to maintain maximum from end
        int max = INT_MIN;
       
        //Stack inorder to store leader 
        stack<int> S;
       
        //traversing array from last ele
        for( int i = n-1 ; i >= 0 ; i-- ){
            if( Arr[i] >= max ) {
                S.push(Arr[i]);
                max = Arr[i];
            }
        }


        while( !S.empty())
        {
            cout<<S.top()<<" ";
            S.pop();
        }

        cout<<endl;

    }


}


// input test cases
/*
2

5
1 19 23 29 21 

8
2 5 6 7 1 2 4 5 */
