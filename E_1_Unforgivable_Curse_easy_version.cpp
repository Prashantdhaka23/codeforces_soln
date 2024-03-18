
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
int n ,m;
cin>>n>>m;
string s,k;
cin>>s;
cin>>k;
map<char,int> mp1,mp2;
for(int i=0;i<n;i++){
mp1[s[i]-'a']++;
mp2[k[i]-'a']++;
}

if(mp1==mp2){

     if(n>=2*m){
cout<<"YES"<<endl;

     }
     else if(n<=m && s==k){
cout<<"YES"<<endl;
     }
     
     else{
int f=0;
          for(int i=0;i<n;i++){
if(i+m>=n && i-m<0){
    if( s[i]!=k[i])f=1;
}


          }

        if(f==1)cout<<"NO"<<endl;  
else cout<<"YES"<<endl;
        
     }



}else{
     cout<<"NO"<<endl;
}









}
return 0;
}







     










