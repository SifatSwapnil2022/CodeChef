#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
  int t;
  cin>>t;
  while(t--){
      int x,y;
      cin>>x>>y;
      int ans = x*y;
      int ans1 = ans/100;
      std::cout << ans1 << std::endl;
  }
}
