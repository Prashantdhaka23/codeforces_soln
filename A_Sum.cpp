#include<bits/stdc++.h>
using namespace std;
# define ll long long 
# define  fo(i,n) for(int i=0;i<n;i++)




 int main(){
int t;
cin>>t;
while(t--){
int a,b,c,d=0,e,fl=1;
cin>>a>>b>>c;

if(a+b==c){
     d=1;
}if(a+c==b){
     d=1;
}if(c+b==a){
     d=1;
}

if(d)cout<<"YES"<<endl;
else{
     cout<<"NO"<<endl;
}




}



}