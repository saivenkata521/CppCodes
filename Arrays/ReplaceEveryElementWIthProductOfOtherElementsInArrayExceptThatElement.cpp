 #include <bits/stdc++.h>
using namespace std;

void replaceEle( int Arr[] , int size  ){
    int auxArrR[size],auxArrL[size];
    int max = Arr[size-1]; auxArrR[size-1] = 1;
    for( int i = size-2 ; i >= 0 ; i-- ){
            auxArrR[i] = max;
            max *= Arr[i]; 
    }

    max = Arr[0];  auxArrL[0] = 1;
    for( int i = 1 ; i < size ; i++ ){
        auxArrL[i] = max;
        max *= Arr[i];
    }

    for( int i = 0 ; i < size ; i++ ){
        Arr[i] = auxArrL[i] * auxArrR[i];
    }

}

int main(){
    freopen("input.txt","r",stdin);
    int t; cin>>t;
    while( t-- ){

        int n; cin>>n;
        int Arr[n];
        for( int i = 0 ; i < n ;i++ ) cin>>Arr[i];
        replaceEle( Arr , n );
        for( int i = 0 ; i < n ; i++ ) cout<<Arr[i]<<" ";
        cout<<endl;

    }
}