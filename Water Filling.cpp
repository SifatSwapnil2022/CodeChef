#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
 int t;
 cin>>t;
 while(t--){
    int x,y,z;
    cin>>x>>y>>z;
    if(x==0 && y==0 && z==0){
        std::cout << "Water filling time" << std::endl;
    }
    else if( (x== 0 && y== 0 && z==1)  ||  (x== 0 && y== 1 && z==0) || (x== 1 && y== 0 && z==0)){
        std::cout << "Water filling time" << std::endl;
        
    }
    else{
        cout<<"Not now"<<endl;
    }
 }
}
