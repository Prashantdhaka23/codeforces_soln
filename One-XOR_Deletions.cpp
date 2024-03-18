#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
         for(int i=0;i<n;i++)cin>>arr[i];
	    map<int,int> mp;
	    int m=INT_MIN;
	    for(int i=0;i<n;i++){
	        mp[arr[i]]++;
	        if(arr[i]!=0 && arr[i]!=1){
	        m=max(m,mp[arr[i]]);}
	        
	    }
         int b=0;
         for(auto it : mp){
if(it.first!=0 && it.first!=1){
b+=it.second;
}

         }
	    cout<<b-m<<endl;
	    
	}
	return 0;
}
