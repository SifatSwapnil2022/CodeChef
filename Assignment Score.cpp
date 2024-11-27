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
	    for(int i=0;i<n;i++)cin>>arr[i];
	    int sum=0;
	    int sum1 =0;
	    int last = n-1;
	     for(int i=0;i<n;i++){
	         sum += arr[i];
	       
	     }
	     int totalNeed = 50 *(n+1);
	     int reqMarks = totalNeed - sum;
	     if(reqMarks>100){
	         cout<<-1<<endl;
	     }
	     else{
	         cout<<max(0,reqMarks)<<endl;
	     }
	   
	     
	    
	}
	return 0;

}
