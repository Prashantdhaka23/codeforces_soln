#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--){
	    
	    int a,b;
	    cin>>a>>b;
	   priority_queue<vector<int>> pq;
	   
	    pq.push({-1,a,b});
	 
	    while(pq.size()){
	        
	         vector<int> v=pq.top();
	        
	        int x=v[0];
            x-=2*x;
	        int y=v[1];
	        int z=v[2];
	        pq.pop();
	        if(y==z){
	            cout<<x-1<<endl;
	            break;
	        }
	        
	        if(x%2==0){
	            pq.push({-1*(x+1),y+x,z});
	             pq.push({-1*(x+1),y,z+x});
	        }else{
	            pq.push({-1*(x+1),y+x,z});
	             pq.push({-1*(x+1),y,z+x});
	        }
	    }
	    
	    
	    
	    
	    
	    
	}

}
