#include<bits/stdc++.h>

using namespace std;

 
 int main(){

int t=1;
cin>>t;
while(t--){

int n ;
cin>>n;

vector< vector<string>  > v1(n);

int x=2*n-2;

while(x--){
     string st;
     cin>>st;
     int a=st.size();

     v1[a].push_back(st);

}

int fl=1;


for(int i=1;i<n;i++){
reverse(v1[i][1].begin(),v1[i][1].end());
if(v1[i][0]!=v1[i][1]){
    fl=0;
      break;
}


}
if(fl==1)cout<<"YES"<<endl;
else cout<<"NO"<<endl;;



}

return 0;
}







     








