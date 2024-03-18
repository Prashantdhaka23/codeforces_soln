
#include<bits/stdc++.h>
using namespace std;
# define ll long long 
# define  fo(i,n) for(int i=0;i<n;i++)
#include<map> 
#include<iterator>



 int main(){
int t=1;
// cin>>t;
while(t--){
// int a,b,c,d,e,fl=1;
ll n;
cin>>n;
ll arr[n];
map<int,int> mp;
for(int i=0;i<n;i++){
cin>>arr[i];
mp[arr[i]]++;

}

for(int i=0;i<n;i++){
     int j=0;
for(auto it : mp){
if(it.first>arr[i]){
     j++;
}

}
arr[i]=j;

}
mp.clear();
for(int i=0;i<n;i++){
     mp[arr[i]]++;
}

for(auto it:mp){
cout<<it.second<<endl;
n--;

}
while(n){
     cout<<0<<endl;
}





}



}