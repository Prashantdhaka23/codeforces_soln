



#include<bits/stdc++.h>
using namespace std;


#define prashant ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)



void solve(){
  

int n;
string s;
cin>>n>>s;
int b=1;

for(int i=n-2;i>=0;i--){
    if(s[i]==s[n-1]){
        b++;
    }else{
        b--;
    }
    if(abs(b)>1){
        cout<<"NO"<<endl;
        return ;
    }
}

     cout<<"YES"<<endl;


}

int32_t main(){
int t=1;
cin>>t;
while(t--){
solve();
}
return 0;
}









