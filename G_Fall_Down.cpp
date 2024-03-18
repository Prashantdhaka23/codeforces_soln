#include<bits/stdc++.h>
using namespace std;
# define ll long long 
# define py cout<<"YES"<<endl;
# define pn cout<<"NO"<<endl;
ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b);}
// map<int,int> mp;
// std::map<int,int>::iterator it;
// for( it=mp.begin();it!= mp.end();it++){

// }


 int main(){

ll t=1;
cin>>t;
while(t--){
ll n,m,r;
cin>>n>>m;
vector<vector<char> > v(n);
for(int i=0;i<n;i++){
     for(int j=0;j<m;j++){
          char k;
          cin>>k;
          v[i].push_back(k);
     }
}
for(int j=0;j<m;j++){
     int cnt=0;
     for(int i=0;i<n;i++){
if(v[i][j]=='*'){
     cnt++;
     v[i][j]='.';
}
if(v[i][j]=='o'){
     int x=i-1;
int y=j;
while(cnt){
v[x][y]='*';
cnt--;
x--;

}
     
    
    cnt=0;
}

     }
     int x=n-1;
int y=j;
while(cnt){
v[x][y]='*';
cnt--;
x--;

}

}
// for(int i=0;i<m;i++){
//      for(int j=0;j<n;j++){
// if(v[j][i]!='.' && v[j][i]!='o'){
// int cnt=(v[j][i])-'0';
// int x=j;
// int y=i;
// while(cnt){
// v[x][y]='*';
// cnt--;

// }


// // }


//      }
// }
for(int i=0;i<n;i++){
     for(int j=0;j<m;j++){
          cout<<v[i][j];
     }
     cout<<endl;
}
cout<<endl;






     
 }






 
 }
 
 




