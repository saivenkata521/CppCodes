#include <bits/stdc++.h>
using namespace std;


 

bool check( vector<int> bloomDay , int m , int k , int target , int n ){
    
    int currCount = 0,totCount = 0;
    
    for( int i = 0 ; i < n ; i++ ){
        
        if( bloomDay[i] <= target and i < n ){
            currCount += 1;
            if( currCount == k ){
                totCount += 1;
                currCount = 0;
            }
                
        } 
        else    currCount = 0;
    }
    
    if( totCount >= m ) return true;
    else return false;
    
}

int minDays(vector<int>& bloomDay, int m, int k) {
    
    int n = bloomDay.size();
    
    if(  n < m*k ) return -1;
    
    int l = *min_element( bloomDay.begin() , bloomDay.end() );
    int r = *max_element( bloomDay.begin() , bloomDay.end() );
    int ans = -1;
    while( l <= r ){
        
        
        int mid = l+(r-l)/2;
        
        if( check( bloomDay , m , k , mid , n ) ){
            
            ans = mid;
            r = mid-1;
            
        }
        else l = mid+1;
        
        
    }
    
    return ans;
}


int main(){
    cout<<"\nEnter how many bloom  Days are there ";
    int m,k,size; vector<int> bloomDay;
    cin>>size;
    cout<<"\nEnter the bloom days \n";
    for( int i = 0 ; i < size; i++ ) cin>>bloomDay[i];
    cout<<"\nEnter No.of  bouquets need "; cin>>m;
    cout<<"\n Enter No.of flowers needed :"; cin>>k;
    cout<<minDays( bloomDay , m , k );
    

}