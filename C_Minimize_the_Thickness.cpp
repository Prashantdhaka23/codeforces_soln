#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
# define ll long long 
# define  fo(i,n) for(int i=0;i<n;i++)




 int main(){
int t;
cin>>t;
while(t--){
long long n,b=0,c,d,e,fl=1;
cin>>n;
unordered_map<int,int> mp;
int a[n];
int ar[n];
long long ans=n;

for(int i=0;i<n;i++){cin>>a[i];
b+=a[i];
mp[b]=i+1;
ar[i]=b;
}

for(int i=0;i<n;i++){
c=ar[i];
vector<int> v;
e=mp[ar[i]];
v.push_back(e);
d=2;
while(true){
     if(mp.find(c*d)!=mp.end()){
v.push_back(mp[c*d]-e);
e=mp[c*d];
d++;
     }
     else break;
}
if(ar[n-1]==c*(d-1)){
     long long m=*max_element(v.begin(),v.end());
     ans=min(ans,m);

     
}
v.clear();
}





cout<<ans<<endl;


}



}