#include <bits/stdc++.h>
using namespace std;


void merge( vector<int> &v , int start , int mid , int end ){
	
	
	int n = mid-start+1;
	int m = end-mid;
	
	vector<int> v1(n),v2(m);
	
	for( int i = 0 ; i < n ; i++ )
		v1.push_back(v[start+i]);
	for( int j = 0 ; j < m ; j++ )
		v2.push_back(v[mid+1+j]);
	
	int l = 0;
	int r = 0;
	int k = startc;
	while( l < n and r < m ){
		
		if( v1[l] <= v2[r] ){
			v[k++] = v1[l++];
		}else{
			v[k++] = v2[r++];
		}
	}
	
	while( l < n ){
		v[k++] = v1[l++];
	}
	
	while( r < m ){
		v[k++] = v2[r++];
	}
}

//Merge Function
void mergeSort( vector<int> &v , int start , int end ){
	
	if( start < end ){
		
		int mid = (start)+(end-start)/2;
		mergeSort( v , start , mid );
		mergeSort( v , mid+1 , end );
		merge( v , start , mid , end );
	}
	
		
}



int main(){
	
	//freopen( "input.txt" , "r" , stdin );
	
	int t;
	cin>>t;
	
	while( t-- ){
		
		int n;
		cin>>n;
		
		vector<int> v(n);
		
		for( int i = 0 ; i < n ; i++ ){
			int p; cin>>p;
			v.push_back(p);
		}
		
		mergeSort( v , 0 , n-1 );
		for( int i = 0 ; i < n ; i++ )
			cout<<v[i]<<" ";
		cout<<endl;
		
		
	}
	
		
}



/*
 * void merge( vector<int> &v , int start , int mid , int end ){
	
	int l = start;
		int m = mid;
	int r = mid+1;
	int o = end;

	vector<int> A,B,C;
	
	for( int i = start ; i <= m ; i++ ){
			cout<<v[i]<<" ";
			A.push_back(v[i]);
	}
	for( int j = r ; j <= o ; j++ )
		B.push_back(v[j]);
	
	
		
		
		
	while( l <= m and r <= o ){
			if( A[l] == B[r] ){
				C.push_back(A[l]);
				C.push_back(B[r]);
				l += 1;
				r += 1;
			}else if( A[l] < B[r]){
				C.push_back(A[l]);
				l += 1;
			}else{
				C.push_back(B[r]);
				r += 1;
			}
	}
	
	while( l <= m ){
		C.push_back(A[l]);
		l += 1;
	}
	while( r <= o ){
		C.push_back(B[r]);
		r += 1;
	}
	
	for( int i = start ; i <= end ; i++ )
		cout<<C[i]<<" ";
	cout<<endl;
	

	
	
	for( int i = start ; i <= mid ; i++ ){
		v[i] = C[i];
	}
	for( int j = mid+1 ; j <= end ; j++ ){
		v[j] = C[j];
	}
} 
 */
