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
int n,m;
 bool isvalid(int x,int y){
    if(x<0 || y<0 || x>=n || y>=m)return false;
    return true;
}
vector<pair<int,int>> dis={{1,0},{0,1},{-1,0},{0,-1}};
     
     int dfs(int i,int j,vector<vector<int>>& grid){
int l=grid[i][j];

    grid[i][j]=0;
     for(auto it : dis){
         int x=it.first+i;
         int y=it.second+j;
         if(isvalid(x,y) && grid[x][y]!=0 ){
             
            l+= dfs(x,y,grid);
         }

     }
     return l;

     }

 int main(){

ll t;
cin>>t;
while(t--){
int a,b,ans=0;
cin>>n>>m;
vector<vector<int> > v(n, vector<int> (m,0) );
for(int i=0;i<n;i++){
     for(int j=0;j<m;j++){
          cin>>v[i][j];
     }
}

 for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
         
          if(v[i][j]!=0){
              int k=0;
            k=  dfs(i,j,v);
              ans=max(ans,k);
          }

            }
        }

cout<<ans<<endl;





}

















}














     







