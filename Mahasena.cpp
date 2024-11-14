#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];
	int cnt=0;
	int cnt1=0;
	for(int i=0;i<n;i++){
	    if(arr[i]%2==0){
	        cnt++;
	    }
	    else{
	        cnt1++;
	    }
	}
	if(cnt1 == cnt){
	    cout<<"NOT READY"<<endl;
	}
	else if(cnt>cnt1){
	    cout<<"READY FOR BATTLE"<<endl;
	}
	else{
	     cout<<"NOT READY"<<endl;
	}
	return 0;

}
