#include<bits/stdc++.h>
using namespace std;
# define ll long long 

long long ok(vector<vector<int> > &dp,vector<int> & x,vector<int> &y,int pre,int last,int i){
if(i>=x.size())return pre*last;
if(dp[i])
ll a=x[i]*pre +ok(dp,x,y,y[i],last,i+1);
ll b=y[i]*pre +ok(dp,x,y,y[i],last,i+1);
dp[i][0]=a;
dp[i][0]=b;
return min(a,b);




}


 int main(){




int t;
cin>>t;
while(t--){
  
ll n,m,s;
ll ans=0;

cin>>n>>s;



vector<int> v(n,0);
for(int i=0;i<n;i++){
     cin>>v[i];
}

vector<int>x(n-2,0);
vector<int>y(n-2,0);

for(int i=1;i<n-1;i++){
     if(v[i]>=s){
x[i-1]=v[i]-s;
x[i-1]=s;
     }
     else{
x[i-1]=v[i];
y[i-1]=0;
     }
}




vector<vector<int> > dp(n,vector<int> (2,-1));

cout<<ok(dp,x,y,v[0],v[n-1],0,1LL);


cout<<endl;


}
return 0;

}





     









