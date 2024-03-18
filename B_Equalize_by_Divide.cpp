#include<bits/stdc++.h>
using namespace std;
# define ll long long 
# define py cout<<"Yes"<<endl;
# define pn cout<<"No"<<endl;
ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b);}
// map<int,int> mp;
// std::map<int,int>::iterator it;
// for( it=mp.begin();it!= mp.end();it++){

// }
 
 int main(){

ll t=1;
cin>>t;

while(t--){
ll n ;
cin>>n;
map<int,int> mp;
int f=0;
priority_queue<pair<int,int> > pq;
for(int i=1;i<=n;i++){
     int k;
     cin>>k;
     pq.push(make_pair(k,i));
     mp[k]++;
     if(k==1)f=1;
}

if(mp.size()==1){
     // cout<<mp[]
cout<<0<<endl;
}
else if(f){
cout<<-1<<endl;

}
else{
     vector<pair<int,int> > ans;

while(true){

int x=pq.top().first;
int y=pq.top().second;
pq.pop();
vector<pair<int,int> >v2;
while( pq.size()>0 && pq.top().first==x){
v2.push_back(make_pair(pq.top().first,pq.top().second));
pq.pop();
}
int e=pq.size();
int x1,y1;
if(e!=0){
 x1=pq.top().first;
 y1=pq.top().second;
}
for(int i=0;i<v2.size();i++){

pq.push(make_pair(v2[i].first,v2[i].second));

}
if(e==0)break;


int x3=x/x1;
mp[x]--;
if(mp[x]==0){
     mp.erase(x);
}



ans.push_back(make_pair(y,y1));

if(x1==1)break;
if(x%x1!=0){
     x3++;
}
mp[x3]++;
pq.push(make_pair(x3,y));
if(mp.size()==1)break;

}

map<int,int> mpp;
while(pq.size()){
     mpp[pq.top().first]++;
     pq.pop();
}
if(mpp.size()==1){
     cout<<ans.size()<<endl;
for(int i=0;i<ans.size();i++){
     cout<<ans[i].first<<" "<<ans[i].second<<endl;
}

}
else{

cout<<-1<<endl;

}




}





}



return 0;
}







     










