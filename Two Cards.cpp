#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    int brr[n];
	    int i,j;
	    
	    for( i=0;i<n;i++)cin>>arr[i];
	    for( j=0;j<n;j++)cin>>brr[j];
	    
	    int maxx = -1;
	    int maxy = -1;
	    int maxIndex_x =-1;
	    int maxIndex_y =-1;
	    
	    for(int k = 0 ;k<n;k++){
	        if(arr[k] >maxx){
	            maxy = maxx;
	            maxIndex_y = maxIndex_x;
	            maxx = arr[k];
	            maxIndex_x = k;
	        }
	        else if(arr[k] >maxy){
	            maxy = arr[k];
	            maxIndex_y = k;
	        }
	    }
	    
	    int max_value_x = max(maxx,brr[maxIndex_x]);
	    int max_value_y = max(maxy ,brr[maxIndex_y]);
	    
	    int aliceWon = 0;
	    
	    for(int l =0; l<n; l++){
	        int alicevalue = max(arr[l],brr[l]);
	        if((l == maxIndex_x && alicevalue >max_value_y)
	        || (l != maxIndex_x && alicevalue>max_value_x)){
	            aliceWon =1;
	            break;
	        }
	    }
	    
	    if(aliceWon==1){
	        cout<<"Yes"<<endl;
	    }
	    else{
	        cout<<"No"<<endl;
	    }
	    
	}
	return 0;
}
