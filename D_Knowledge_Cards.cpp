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
cin>>x>>y>>n;
fo(i,n){
     int k;
     cin>>k;
     v.push_back(k);
}
b=n;
d=0;
for(int i=0;i<n;i++){
if(v[i]==b){
b--;

}else{
     d++;
}


}
if(d<=(x-1)*(y-1)){
     cout<<"YA"<<endl;

}else{
     cout<<"TIDAK"<<endl;
}



}



}