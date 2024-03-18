#include<bits/stdc++.h>
using namespace std;
# define ll long long 
# define  fo(i,n) for(int i=0;i<n;i++)
#include<unordered_map>

 int main(){
int t;
cin>>t;
while(t--){
     int n,x,y,a,b,c,d,e,fl=1;
cin>>n;
     vector< pair <int,int > > v(n);
     // unordered_map<int,int> mp;

long long sum=0,ans=0;;
long long ma=INT_MIN;
fo(i,n){
     long long k,l;
     cin>>k>>l;
     pair<int,int> s;
     s.first=k;
     s.second=l;
     v.push_back(s);

     sum+=k+k+l+l;
     ans+=max(k,l);
     ma=max(ma,max(k,l));

}

cout<<sum-2*ans+2*ma<<endl;



}



}