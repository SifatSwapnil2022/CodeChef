#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    string s;
	    cin>>n;
	    cin>>s;
	   int i=0;
	   int cnt=0;
	   while(i<n){
	       if(s[i] =='a' || s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
	           cnt=0;
	       }
	       else{
	           cnt++;
	       }
	       if(cnt==4)break;
	       i++;
	   }
	   if(cnt==4)
	   std::cout << "NO" << std::endl;
	   else
	   cout<<"YES"<<endl;
	}
	return 0;

}
