#include<bits/stdc++.h>
using namespace std;

# define ll long long 
# define  fo(i,n) for(int i=0;i<n;i++)




 int main(){
int t;
cin>>t;
while(t--){
int a,b,c,d,e,fl=1;
ll x,y;
cin>>x>>y;
map<int,int> mp;
set<int> s;
for(int i=0;i<x;i++){
int z;
cin>>z;
mp[z]++;
if(mp[z]==y){
  s.insert(z);   
}

}

if(s.size()<2)cout<<-1<<endl;
else{
     int x=(*s.begin()-*s.end()-1);
     cout<<*s.begin()<<" "<<*s.end()-1<<endl;
}




}



}