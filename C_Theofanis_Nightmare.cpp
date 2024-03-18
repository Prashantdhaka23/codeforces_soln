
#include<bits/stdc++.h>
using namespace std;
int dp[5000][5000];
int fun(vector<int> & v ,int index ,int c){
if(index>=v.size()){
    return 0;
}
if(dp[index][c]!=-1)return dp[index][c];

return ans;
}

void solve(){
 
 int n;
 cin>>n;
 vector<int> v(n,0);
 for(int i=0;i<n;i++){
    cin>>v[i];
 }
memset(dp,-1,sizeof(dp));
cout<<fun(v,0,1)<<endl;
}

int32_t main(){
  
int t=1;
cin>>t;
while(t--){
solve();
}
return 0;
}
