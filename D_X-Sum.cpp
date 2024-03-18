#include<bits/stdc++.h>
using namespace std;
# define ll long long 
# define  fo(i,n) for(int i=0;i<n;i++)
 int main(){
int t;
cin>>t;
while(t--){

ll x,y;
cin>>x>>y;
ll mx[x+1][y+1];
map<ll,ll> sum;
map<ll,ll> sub;
for(int i=1;i<=x;i++){
     for(int j=1;j<=y;j++){
          int m;
cin>>m;
mx[i][j]=m;
sum[i+j]+=m;
sub[i-j]+=m;
     }
}
ll ans=INT_MIN;
for(int i=1;i<=x;i++){
     for(int j=1;j<=y;j++){
ans=max(ans,(sum[i+j]+sub[i-j]-mx[i][j]));
     }
}
cout<<ans<<endl;
}

}