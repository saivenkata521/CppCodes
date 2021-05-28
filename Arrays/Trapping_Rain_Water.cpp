//https://leetcode.com/problems/trapping-rain-water/
int trap(vector<int>& height) {
        
        if( height.size() < 3 ) return 0;
        int n = height.size();
        int lMax[n],rMax[n];
        int max = height[0]; lMax[0] = 0;
        for( int i = 1; i < n-1 ; i++ ){
            lMax[i] = max; 
            if( height[i] >= max ) max = height[i];
        }
        
        max = height[n-1]; rMax[n-1] = 0; 
        for( int i = n-2 ; i >= 0 ; i-- )
        {
            rMax[i] = max;
            if( height[i] >= max ) max = height[i];
        }
        
        int wtrQuant = 0;
        for( int i = 1; i < n-1 ; i++ ){
            int val = min( lMax[i] , rMax[i] ) - height[i];
            if( val > 0 ) wtrQuant += val;
        }
        
        return wtrQuant;
        
 }

int main(){
  vector<int> height;
  int n; // for no.of elevations
  cin>>n;
  
  for( int i = 0 ; i < n ; i++ ){
    int t; cin>>t;
    height.push_back(t);
  }
  cout<<trap(height);
  
}

