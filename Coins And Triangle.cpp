#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;

	while(t--){
	    	int n;
	cin>>n;
            int triangle = 1;
            int row = 1;
            while(n>=triangle){
                row = row + 1;
                triangle = triangle + row;
            }
            std::cout << row-1 << std::endl;
	}
	return 0;

}
