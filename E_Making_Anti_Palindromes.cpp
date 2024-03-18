#include <bits/stdc++.h>
using namespace std;

int main() {
	 int t;
	 cin>>t;
	 while(t--){
	     int n;
	     cin>>n;
	     vector<int> v(n,0);
	     
	     for(int i=0;i<n;i++){
	         cin>>v[i];
	     }
	     vector<int> p=v;
	     vector<int> l=v;

	     int a=0;
	    //  sort(p.begin(),p.end());
	      for(int i=1;i<n;i++){
          p[i]=max(p[i-1],p[i]);
	        
	     }

        for(int i=n-2;i>=0;i--){
          l[i]=min(l[i+1],l[i]);
	        
	     }
       for(int i=0;i<n;i++){
      if(v[i]==l[i] && p[i]==v[i] ){
        a++;
      }
	     }
	     if(a==n){
	         int ans=1;
	         
	         for(int i=0;i<a;i++ ){
	             ans+=ans;
	             ans=ans%998244353;
	         }
	         cout<<(ans-1+998244353)%998244353<<endl;
	         
	     }else{
	         long long ans=1LL;
	         
	         for(int i=0;i<a;i++ ){
	             ans+=ans;
	             ans=ans%998244353;
	         }
	        cout<<(ans)%998244353<<endl;
	       
	         
	         
	     }
	     
	 }
	return 0;
}
