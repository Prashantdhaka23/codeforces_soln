#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back 
#define popb pop_back
#define sza(x) ((int)x.size())
#define mp make_pair
#define ve vector
#define vii vector < int >
#define vll vector < ll > 
#define pii pair < int , int >
#define pll pair < ll , ll >
#define vpl vector < pll >
#define fi first


int main(){
     ll n,m;
     cin>>n>>m;
     vector<vector<long long > >a(n+1,vector<ll>(m+1,1));
     ll x,y;
     cin>>x>>y;
     ll N;
     cin>>N;
     for(int i=0;i<N;i++){
         ll x1,y1;
         cin>>x1>>y1;
         a[x1][y1]=0;
     }
     ll q;
     cin>>q;
     for(int i=0;i<q;i++){
         char d;
         ll l;
         cin>>d;
         cin>>l;
         if(d=='D'){
             while(l>0&&x+1<=n&&a[x+1][y]!=0){
                 x++;
                 l--;
             }
         }
         else if(d=='R'){
             while(l>0&&y+1<=m&&a[x][y+1]!=0){
                 y++;
                 l--;
             }
         }else if(d=='U'){
             while(l>0&&x-1>=1&&a[x-1][y]!=0){
                 x--;
                 l--;
             }
         }else if(d=='L'){
             while(l>0&&y-1>=1&&a[x][y-1]!=0){
                 y--;
                 l--;
             }
         }
         cout<<x<<" "<<y<<endl;
     }
    //  cout<<x<<" "<<y<<endl;

}