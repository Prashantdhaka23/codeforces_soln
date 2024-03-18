#include<bits/stdc++.h>
using namespace std;
# define ll long long 
# define  fo(i,n) for(int i=0;i<n;i++)
#include<unordered_map>

 int main(){
int t;
cin>>t;
while(t--){
     vector<int> v;
     // unordered_map<int,int> mp;
int n,x,y,a,b,c,d,e,fl=1;
cin>>n;

fo(i,n){
     int k;
     cin>>k;
     v.push_back(k);
}
sort(v.begin(),v.end());
x=v[n-1];
c=x;
for(int i=n-1;i>0;i--){
if(v[i]<x){
     c=v[i];
}


}

cout<<abs(x-v[0])+abs(x-c)<<endl;







}



}