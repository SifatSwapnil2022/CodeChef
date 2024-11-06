#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n_cards;
	    cin>>n_cards;
        int throw_x;
        cin>>throw_x;
        
        int ans1= n_cards/2;
        int ans2=n_cards-ans1;
        int ans3 = ans1 - 1;
        int ans4 = ans2 - 1;
        if(throw_x%2 ==0){
            cout<< ans3<<endl;
        }
        else{
            cout<<ans4<<endl;
        }
	    
	    
	}
	return 0;

}
