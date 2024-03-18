#include<bits/stdc++.h>
using namespace std;
# define ll long long 
# define  fo(i,n) for(int i=0;i<n;i++)
#include<unordered_map>

 int main(){
int t;
cin>>t;
while(t--){
     // vector<int> v;
     // unordered_map<int,int> mp;
int n,x,y,a,b,c,d,e,fl=1;
char ch;

cin>>n>>ch;
// fo(i,n){
//      int k;
//      cin>>k;
//      v.push_back(k);
// }
string s;
cin>>s;
s=s+s;
if(ch=='g'){
     cout<<0<<endl;
}
else{
     int cnt=0;
     int ans=0;
for(int i=0;i<2*n;i++){
if(s[i]==ch){
     cnt=0;
while(s[i]!='g'&& i<2*n){
     cnt++;
     i++;
}
ans=max(ans,cnt);

}


}
cout<<ans<<endl;
}



}



}