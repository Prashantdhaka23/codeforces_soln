#include<bits/stdc++.h>
using namespace std;
# define ll long long 
# define py cout<<"YES"<<endl;
# define pn cout<<"N"<<endl;
ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b);}
// map<int,int> mp;
// std::map<int,int>::iterator it;
// for( it=mp.begin();it!= mp.end();it++){

// }
ll mod=1e9+7;
vector<int> v;
ll dp[40005][505];
int n;
int ans=0;



 int main(){

ll t;
cin>>t;
v.clear();
v.push_back(0);

for(int l=1;l<=40005;l++){
     string str=to_string(l);
     string ss=str;
     
     reverse(ss.begin(),ss.end());
   if(ss==str) {v.push_back(l);
   }
   
}


for(int i=1;i<500;i++){
     dp[0][i]=1;
}

for(int i=1;i<40005;i++){
dp[0][i]=0;
for(int j=1;j<500;j++){

if(i>=v[j])dp[j][i]=dp[j-1][i]+dp[j][i-v[j]];
else {
     dp[j][i]=dp[j-1][i];
}
}

}



while(t--){
ll m,r;
cin>>r;
n=r;



// for(int i=0;i<v.size();i++){
//      cout<<v[i]<<" ";
// }

ans=0;




cout<<dp[n][499]<<endl;





}




 }

     






 

 
 




