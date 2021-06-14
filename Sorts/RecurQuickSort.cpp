

#include <bits/stdc++.h>
using namespace std;


int Partition( vector<int> &A , int start , int end ){
	
	
	//let us take starting ele as pivot
	int pivot = A[start]; 
	//we have to exclude the pivot while traversing
	int i = start+1;      

	//i and j are two pointers pointing to same loc at
	//begin
	
	/*for( int i = start ; i <= end ; i++ )
		cout<<A[i]<<" ";
	cout<<endl;
	*/
	
	for( int j = start+1 ; j <= end ; j++ ){
		
		//checking from 2nd ele 
		//we have to make all ele's less than pivot at one side
		//pointing i and j to the 2nd ele in 1st itr
		//if condition statisfies i will increase other wise j will increase
		//when ever condition statisfies swap will happen
		if( A[j] < pivot ){
			
			swap( A[j] , A[i] );
			i += 1;
				
		}
		
	}
	
	swap( A[start] , A[i-1] );
	
	
	/*for( int i = start ; i <= end ; i++  )
		cout<<A[i]<<" ";
	cout<<endl<<i-1<<endl<<endl;
	*/
	
	return i-1;  
	
	
	
	
	
}



void QuickSort( vector<int> &v ,int start, int end ){
	
	
	if( start < end ){
		
		int P = Partition( v , start , end );
		QuickSort( v , start , P-1 );
		QuickSort( v , P+1   , end );
		
	}
	
	 

}

int main(){
	
	///freopen( "input.txt" , "r" , stdin );
	
	int t;
	cin>>t;
	while( t-- ){
		int n;
		cin>>n;
		
		vector<int> v;
		for( int i = 0 ; i < n ; i ++ ){
			int t; cin>>t;
			v.push_back(t);
		}
		
		QuickSort( v , 0 , n-1 );
		for( int i = 0; i < n ; i++ ){
			cout<<v[i]<<" ";
		}
		cout<<endl;
	}
		
}
