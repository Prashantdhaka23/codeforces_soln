#include <bits/stdc++.h>
using namespace std;
bool dfs(int a ,int b){


int x=max(a,b);
int y=min(a,b);

int i=1;
while(1){
  if(x-y*i>0) {
    if( dfs(x-y*i,y)==false){
        return true;
    }
  }
  else break;

    i++;
}
return false;


}
int main() {
    int t=1;
    // cin>>t;
    while(t--){
    int a,b;
    cin>>a>>b;
    cout<<dfs(a,b)<<endl;

     
    }
    
   
}
