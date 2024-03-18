#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
# define ll long long 
# define  fo(i,n) for(int i=0;i<n;i++)
#include<unordered_map>
int gcd(int a, int b){  int c = a % b;  while(c != 0)  {    a = b;    b = c;    c = a % b;  }  return b;}



 int main(){
int t;
cin>>t;
while(t--){
     vector<int> v;
     // unordered_map<int,int> mp;
int n,x,y,a,b,c,d,e,fl=1;
cin>>n;
fo(i,n){
     int k;
     cin>>k;
     v.push_back(k);
}
x=0;
for(int i=0;i<n;i++){

y=gcd(x,v[i]);
x=y;



}

if(x==1) cout<<0<<endl;
else{
     c=n+1;
while(n){
if(gcd(x,n)==1){

     cout<<min(c-n,3)<<endl;
     break;
}

n--;



}






}


}



}