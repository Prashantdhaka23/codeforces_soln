#include<bits/stdc++.h>
using namespace std;
# define ll long long 
# define  fo(i,n) for(int i=0;i<n;i++)




 int main(){
int t;
cin>>t;
while(t--){
int n,x=0,y=0,z=0,fl=1;
cin>>n;
int a[n];
int b[n];
fo(i,n){
cin>>a[i];
if(a[i]==1)x++;
}
fo(i,n){
cin>>b[i];
if(b[i]==1)y++;
}
fo(i,n){
if(a[i]!=b[i]) z++;

}
if(x==y && z==0) cout<<0<<endl;
else if(x==y && z!=0) cout<<1<<endl;
else if(x!=y ) cout<<min(abs(x-y)+1,z)<<endl;


}



}