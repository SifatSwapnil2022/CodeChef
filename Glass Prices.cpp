#include <bits/stdc++.h>
using namespace std;

int main() {
    int x_plastic,y_metal;
    cin>>x_plastic>>y_metal;
    
    if(x_plastic*2 < y_metal){
        std::cout << "PLASTIC" << std::endl;
    }
    else{
        cout<<"METAL"<<endl;
    }
 return 0;
}
