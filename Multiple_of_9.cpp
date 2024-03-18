
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




void solve(){

// void solve(){
   
//  int N ;
//  cin>>N;

// if(N>5){
//     cout<<1<<" "<<N-1<<endl;
//     return ;
// }
//  cout<<0<<" "<<N<<endl;
    

// }
int n;
cin>>n;
string s;
cin>>s;
int sum=0;
for(int i=0;i<n;i++){
   if(s[i]!='?') sum+=s[i]-'0';
}
string t="";
int c=0;
for(int i=0;i<n;i++){
   if(s[i]=='?' && c==0) {
    t+='1'; c=1;
   }else if(s[i]=='?'){ if(s[0]=='?'){ t+='0'; }else{   t+='1'; }  }
}
if(sum>0 && sum%9==0 && s[0]!='?'){
    t[t.size()-1]='2';
}
cout<<t<<endl;



}

int32_t main(){

int t=1;
cin>>t;
while(t--){
solve();

}
return 0;
}

