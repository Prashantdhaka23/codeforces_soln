#include<bits/stdc++.h>
using namespace std;
# define ll long long 
# define  fo(i,n) for(int i=0;i<n;i++)




 int main(){
int t;
cin>>t;
while(t--){
int a=0,b,c,d=INT_MAX,e,fl=1;
int x,y;
cin>>x>>y;
vector<string> v;
fo(i,x){
     string s;
  cin>>s;
  v.push_back(s);
}
for(int i=0;i<x-1;i++){
     for(int j=i+1;j<x;j++){
          c=0;
fo(k,y){
c+=abs((v[i][k]-'a')-(v[j][k]-'a'));

}
d=min(d,c);
     }
}

cout<<d<<endl;




}



}