
#include<bits/stdc++.h>


using namespace std;

int main(){
int t=1;

cin>>t;
while(t--){
     string s;
     cin>>s;
     int n=s.size(),f=0;
// vector<int> arr;
//     for(int i=0;i<n;i++){
//         int k; cin>>k;
//         arr.push_back(k);
    
//     }
for(int i=0;i<n;i++){
if((s[i]-'0')%2==0) f=1;

}
if((s[n-1]-'0')%2==0)cout<<0<<endl;
else if((s[0]-'0')%2==0)cout<<1<<endl;
else if(f)cout<<2<<endl;
else cout<<-1<<endl;



}


}
