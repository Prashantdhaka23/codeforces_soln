#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    int c=a;
	    set<int> s;
	    vector<int> v;
	    
	    for(int i=a;i<=b;i++){
	        v.push_back(i+1);
	        if(i==b)v.back()=a;
	    }
	    
	   for(int i=0;i<v.size();i++){
	        
	       if(gcd(i+a,v.back())==1 && gcd(b,v[i])==1){
	           swap(v[i],v[v.size()-1]);
	        //    break;
	       }
	        
	   }
	    
	    
	   for(int i=0;i<v.size();i++){
	       if(__gcd(v[i],i+a)!=1){
            // cout<<i<<" ";
	           cout<<-1<<endl;
            //    cointnue;
            // cointinue;
	       }
	   }
	      for(int i=0;i<v.size();i++){
	       cout<<v[i]<<" ";
	    }
	    cout<<endl;
	    
	   
	    
	    
	}

}
