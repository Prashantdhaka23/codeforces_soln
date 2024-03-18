#include<bits/stdc++.h>
using namespace std;
# define ll long long 
# define  fo(i,n) for(int i=0;i<n;i++)
#include<unordered_map>
int fac(int n){
if(n==0 || n==1)return 1;
else return n*fac(n-1);

}
 int main(){
int t;
cin>>t;
while(t--){
     vector<int> v;
     unordered_map<int,int> mp;
int n,x,y,a,b,c,d,e,fl=1;
cin>>n;
fo(i,n){
     int k;
     cin>>k;
     v.push_back(k);
}

cout<<(10-n)*(10-n-1)*3<<endl;





}



}