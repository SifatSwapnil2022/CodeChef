#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    int arr[n];
	    int brr[m];
	    int i,j;
	    int cnt=0;
	    for( i=0;i<n;i++)cin>>arr[i];
	    for( j=0;j<m;j++)cin>>brr[j];
	    
	    
             for( int k=0;k<m;k++){
            if(arr[brr[k] - 1] >0 ){
                arr[brr[k] -1 ]--;
            }
            else{
                cnt++;
            }
        }
	             
	         
	    
	    std::cout << cnt << std::endl;
	    
	    
	}
	return 0;

}
