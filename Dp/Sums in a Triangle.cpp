#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n][n];
	    for(int i=0;i<n;i++){
	        for(int j=0;j<=i;j++){
	            cin>>a[i][j];
	        }
	    }
	    
	    int k=n-2;
	    while(k>=0){
	    for(int i=0;i<=k;i++){
	        a[k][i] += max(a[k+1][i] ,a[k+1][i+1]);
	    }
	    k--;
	    }
	    cout<<a[0][0]<<endl;
	}
	return 0;

}
