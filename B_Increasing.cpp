#include<bits/stdc++.h>
using namespace std;
# define ll long long 
# define  fo(i,n) for(int i=0;i<n;i++)




 int main(){
int t;
cin>>t;
while(t--){
int a,b,c,d,e,fl=1;
cin>>a;
int arr[a];
set<int> s;
for(int i=0;i<a;i++){
     
     cin>>arr[i];
     s.insert(arr[i]);

}
if(s.size()==a)cout<<"YES"<<endl;
else{
     cout<<"NO"<<endl;
}




}



}