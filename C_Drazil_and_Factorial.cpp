
#include<bits/stdc++.h>


using namespace std;

int main(){
int t=1;

cin>>t;
while(t--){
string n;
     cin>>n;
     string ans;
for(int i=0;i<n.size();i++){
   if(n[i]=='4'){
     ans+="322";
   }
   else if(n[i]=='6'){
     ans+="53";
   }
   else if(n[i]=='8'){
     ans+="7222";
   }
   else if(n[i]=='0' || n[i]=='1'){

   }
   else if(n[i]=='9'){
     ans+="7332";
   }
   else{
     ans+=n[i];
   }
}
sort(ans.begin(),ans.end());
reverse(ans.begin(),ans.end());

cout<<ans<<endl;



}


}
