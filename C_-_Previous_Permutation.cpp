#include<bits/stdc++.h>
using namespace std;
# define ll long long 
# define  fo(i,n) for(ll i=0;i<n;i++)
#include<unordered_map>

 int main(){
ll t=1;
// cin>>t;
while(t--){
     vector<int> v;
     // unordered_map<int,int> mp;
ll n,x,y,a,b,c,d,e,fl=1;
cin>>n;
fo(i,n){
     ll k;
     cin>>k;
     v.push_back(k);
}
vector<int> ans;
for(int i=n-1;i>0;i--){
if(v[i]<v[i-1]){
c=i;
     for(int j=i;j<n;j++){
          if(v[j]<v[i-1]){
              c=v[j]; 
          }
          ans.push_back(v[j]);
     }
     sort(ans.begin(),ans.end());
reverse(ans.begin(),ans.end());
int k=0;
for(int j=i;j<n;j++){

v[j]=ans[k];
if(v[j]==c){
    v[j]=v[i-1];
    v[i-1]=c;
}
k++;
}
break;


}

}

for(int i=0;i<n;i++){
     cout<<v[i]<<" ";
}
cout<<endl;

}



}