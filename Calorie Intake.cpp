#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int x,y,z;
	cin>>x>>y>>z;
	int sweets = y*z;
	if(x>sweets)
	cout<<x-sweets<<endl;
	else{
	    cout<<-1<<endl;
	}
	return 0;

}
