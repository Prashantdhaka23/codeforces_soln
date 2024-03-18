
#include<bits/stdc++.h>
#include<vector>
#include<string>
#include<unordered_map> 
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
     long long n;
string s,t;
cin>>n;
cin>>s>>t;

for(int i=0;i<n;i++){
     if(s[i]=='G'){
          s[i]='B';
     }if(t[i]=='G'){
          t[i]='B';
     }
}
if(s==t){
     cout<<"yes"<<endl;
}else{
     cout<<"no"<<endl;
}

}

}

