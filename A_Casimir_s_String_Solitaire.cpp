#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    
	    int n;
	    cin>>n;
	    string a;
	    int l=0,r=0;
	    for(int i=0;i<n;i++){
	        cin>>a;
            if(a=="START38"){
	            l++;
	        }
	        if(a=="LTIME108"){
	            r++;
	        }
	    }
	    
	    cout<<l<<" "<<r<<endl;
	}
	
	return 0;
}
