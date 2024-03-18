
#include<bits/stdc++.h>
#include<vector>
#include<string>
#include<unordered_map> 
#include<algorithm>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
vector<string> a,b,c;
for(int i=0;i<n;i++){
    string p;
    cin>>p;
    a.push_back(p);
}
for(int i=0;i<n;i++){
    string p;
    cin>>p;
    b.push_back(p);
}for(int i=0;i<n;i++){
    string p;
    cin>>p;
    c.push_back(p);
}
int a1=3*n,b1=3*n,c1=3*n;
unordered_map<string,int> mp;
for(int i=0;i<n;i++){
    mp[a[i]]++;
     mp[b[i]]++; mp[c[i]]++;
}
for(auto it:mp){
    if(it.second==3){
        a1-=3;
         b1-=3;
          c1-=3;
    }
    if(it.second==2){
        for(int i=0;i<n;i++){
   if(a[i]==it.first){
       a1-=2;
       break;
   }
}for(int i=0;i<n;i++){
   if(b[i]==it.first){
       b1-=2;
       break;
   }
}for(int i=0;i<n;i++){
   if(c[i]==it.first){
       c1-=2;
       break;
   }
}
        
    }
}
cout<<a1<<" "<<b1<<" "<<c1<<endl;

}

}