
#include <iostream>
using namespace std;
int main() {

    int t; cin>>t; 
    while( t-- ){
        
        int n; cin>>n;
        int Arr[n];
        for( int i = 0 ; i < n ; i++ ) cin>>Arr[i];
        for( int i = 1; i < n ; i++ ){
            int index = i;
            while( index > 0 and Arr[index-1]>Arr[index]){
                swap( Arr[index-1],Arr[index] );
                index--;
            }
        }

       for( int i = 0 ; i < n ; i++ ){
           cout<<Arr[i]<<" ";
       } 
       cout<<endl;


    }


}
