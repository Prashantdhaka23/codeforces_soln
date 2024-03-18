#include<iostream>
using namespace std;
# define int long long 
# define  fo(i,n) for(int i=0;i<n;i++)
#include<unordered_map>

 int32_t main(){
int t=1;
// cin>>t;
while(t--){
     // vector<int> v;
     unordered_map<int,int> mp;
     mp.insert({1,2});
float n,x,y,a,b,c,d,e,fl=1;
cin>>x>>y;
float z=y/x;
int k=z*10000;
if(k%10>5){
     z=z+0.0005;
}

// for(auto it :mp){
//      cout<<*it<<endl;
// }


cout << fixed << setprecision(3) << z << endl;







}



}