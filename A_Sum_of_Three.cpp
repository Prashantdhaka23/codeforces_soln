
/*

****************************************************************************************
*                                Jai Bajrangbali                                       *
*                             codechef-prashantdhaka                                   *
*                             cf-dhakaprashant666                                      *
*                         email-:dhakaprashant666@gmail.com                            *
****************************************************************************************                                                                         



*/




#include<bits/stdc++.h>
using namespace std;



 
       
 
#define endl                                "\n"
#define int                                 long long    //in case of mle ,tle high constraints
#define ll                                  long long


#define pyy                                  cout<<"YES"<<endl;
#define pnn                                  cout<<"NO"<<endl;
#define inf                                 1000000000000000005    //2e18+5




void solve(){
  
int n;
cin>>n;


int a,b;
cin>>a>>b;
a=3;
b=16;
int f=-1;


int ans=1e9;
for(int k=1;k<=1e5;k++){

int d=((a+(k-1))/k)+(b+(k-1))/k;
d+=k-1;
if(d<ans){
f=k;
}
ans=min(ans,d);

}
cout<<f<<endl;

cout<<ans<<endl;



}

int32_t main(){
   
int tcc=1;
cin>>tcc;
while(tcc--){
solve();
}
return 0;
}

