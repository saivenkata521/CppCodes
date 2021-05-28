#include <bits/stdc++.h>
using namespace std;

//time complexity O(n)
int findLongestConseqSubseq(int arr[], int N)
{
      
      priority_queue< int,vector<int>,greater<int> > pq;
      for( int i = 0 ; i < N ; i++ )  pq.push(arr[i]);

      int temp = pq.top(); pq.pop();
      int max = 0,count=1;
      while(!pq.empty()){
	  if( pq.top()-1 == temp or pq.top() == temp){
              if( pq.top() != temp ) count++;
              temp = pq.top(); pq.pop(); 
          }
          else{
              temp = pq.top(); pq.pop();
              if( count > max ) max = count;
              count = 1;              
          }
      }
      if( count > max ) return count;
      else return max;
          
      
}


int main()
{
	 int t; cin>>t; //no.of test case
	 while( t-- ){
		int n; cin>>n;
		int arr[n]; 
		for( int i = 0 ; i < n ; i++ ) cin>>arr[i];
		cout<<findLongestConseqSubseq( arr , n )<<endl;
	 }
}
