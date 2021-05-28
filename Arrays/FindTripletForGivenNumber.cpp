 
#include <bits/stdc++.h>
using namespace std;

 
bool find3Numbers(int A[], int n, int X)
{
        
        sort( A , A+n );
        
        for( int i = 0; i < n ; i++ ){
            int l = i+1, r = n-1;
            int currSum = 0;
            while( l < r ){
                currSum = A[i] + A[l] + A[r];
                if( currSum == X ) return true;
                else if( currSum < X ) l++;
                else r--;
            }
        }
        return false;

}
 

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)	cin>>A[i];
        cout <<  find3Numbers(A, n, X) << endl;
    }
}
