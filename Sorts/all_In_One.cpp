#include <bits/stdc++.h>
using namespace std;


void Merge( vector<int> &v , int start , int mid , int end ){
	
	
		// l for left sub array length
		// r for right sub array length
		int l = mid-start+1;
		int r = end-mid;
		
		int A[l],B[r];
		for( int i = 0 ; i < l ; i++ )
			A[i] = v[i+start];
		for( int j = 0 ; j < r ; j++ )
			B[j] = v[mid+1+j];
			
		//i and j are two pointers 
		//i and j pointing to the 0th index of both arrays ie., A and B
		//Merging Both array elements
		int i = 0, j = 0;
		int k = start;
		// k is a pointer to the starting point of the vector part we had
		
		while( i < l and j < r ){
			
			if( A[i] <= B[j] ){
				v[k++] = A[i++]; 
			}else{
				v[k++] = B[j++];
			}
			
		}
		
		while( i < l ){
			v[k++] = A[i++];
		}
		
		while( j < r ){
			v[k++] = B[j++];
		}
		
}

int Partition( vector<int> &v , int start , int end ){
	
	int Pivot = v[start];
	int i = start+1;
	for( int j = start+1 ; j <= end ; j++ ){
		if( v[j] < Pivot ){
			swap( v[i++] , v[j] );
		}
	}
	swap( v[i-1] , v[start] );
	return i-1;
		
}



void QuickSortItr( vector<int> &v , int start , int end ){
		
		stack<int> s;
		s.push(start);
		s.push(end);
		
		while( !s.empty() ){
			
			int h = s.top(); s.pop();
			int l = s.top(); s.pop();
			int P = Partition( v , l , h );
			
			if( P-1 > l ){
				s.push( l );
				s.push( P-1 );
			}
			
			if( P+1 < h ){
				s.push(P+1);
				s.push(h);
			}
			
		}
		
}

void QuickSortRec( vector<int> &v , int start , int end ){
		
		if( start < end ){
			
			int P = Partition( v , start ,  end );
			QuickSortRec( v , start , P-1 );
			QuickSortRec( v , P+1 , end );
		}
		
}



void MergeSortRec( vector<int> &v , int start , int end ){
	
	if( start < end ){
		
		int mid = (start+end)/2;
		MergeSortRec( v , start , mid );
		MergeSortRec( v , mid+1 , end );
		Merge( v , start , mid , end );
		
	}
	

}


int main(){
	
	
		while(1){
			
			int op;
			cout<<"Choose your option \n";
			cout<<"1. Merge Sort Using recursion \n";
			cout<<"2. Quick Sort Using iteration \n";
			cout<<"3. Quick Sort Using recursion \n";
			cin>>op;
			
			if(!( op >= 1 and op <= 3 ) ){
				cout<<"Terminated due to invalid option \n";
				break;
			}
			
			cout<<"How many number u wanted to sort :";
			int n;
			cin>>n;
			vector<int> v(n,0);
			
			cout<<"Enter "<<n<<" elements \n";
			for( int i = 0 ; i < n ; i++ )
				cin>>v[i];
			
			
			if( op == 1 ){
				cout<<" You had chosen Merge Sort using recursion \n";
				MergeSortRec( v , 0 , n-1 );

			}else if( op == 2 ){
				cout<<"You had chosen Quick Sort using iteration \n";
				QuickSortItr( v , 0 , n-1 );
				
			}else if( op == 3 ){
				cout<<"You had chosen Quick Sort using recursion \n";
				QuickSortRec( v , 0 , n-1 );
				
			}
			
			
			for( int i = 0 ; i < n ; i++ )
				cout<<v[i]<<" ";
			cout<<endl<<endl;
			
	
		}
		
}

