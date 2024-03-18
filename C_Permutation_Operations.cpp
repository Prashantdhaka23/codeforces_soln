#include<bits/stdc++.h>
using namespace std;
# define ll long long 
# define  fo(i,n) for(int i=0;i<n;i++)




 int main(){
int t;
cin>>t;
while(t--){
int a,b,c,d,e,fl=1;
ll n;
cin>>n;
ll arr[n];
priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > > p;

for(int i=0;i<n;i++)cin>>arr[i];

for(int i=1;i<n;i++){
     p.push({arr[i]-arr[i-1],i});
}
d=1;

for(int i=n-1;i>=0;i--){
if(p.top().first<0){

while(p.top().first<0){

p.top().first+=d;
cout<<p.top().second+1<<" ";
if(d<=n)
d++;
else {
     fl=0;
     break;
}

}
}

}
if(fl){
while(d<=n){
     cout<<1<<" ";
d++;

}}

cout<<endl;


}



}