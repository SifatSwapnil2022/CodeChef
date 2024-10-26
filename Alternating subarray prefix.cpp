#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int countArray[n];
         countArray[n-1] = 1;
         
         
        long long int arr[n];
        
        
        for(int i = 0 ; i<n ; i++){
            cin>>arr[i];
        }
        
        
        for(int i = n - 2; i>=0 ; i--){
            if(arr[i] * arr[i+1] < 0){
                countArray[i] = countArray[i+1] + 1;
            }        
            else{
                countArray[i] = 1;
            }
        }
        for(int i = 0 ; i<n ; i++){
            cout<<countArray[i]<< " ";
            
        }
        cout<<endl;
        cout<<endl;
    }
    return 0;
}
