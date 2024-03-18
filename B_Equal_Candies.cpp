#include<bits/stdc++.h>
using namespace std;
# define ll long long 
# define  fo(i,n) for(int i=0;i<n;i++)




 int main(){
int t;
cin>>t;
while(t--){
long long int a=LONG_MAX,b=0,c,d,e,fl=1;
ll n;
cin>>n;
ll arr[n];
fo(i,n){
cin>>arr[i];
a=min(a,arr[i]);}
fo(i,n){
b+=arr[i]-a;

}

cout<<b<<endl;






}



}